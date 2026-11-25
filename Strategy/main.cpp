
#include "ClangBuilder.h"
#include "GCCBuilder.h"
#include "ClangBuilderConsoleLog.h"
#include "ClangBuilderFileLog.h"
#include "GCCBuilderConsoleLog.h"
#include "GCCBuilderFileLog.h"
#include "ClangBuilder2.h"
#include "ClangBuilderConsoleLog2.h"
#include "ClangBuilderFileLog2.h"

#include <memory>
#include <vector>

int main()
{
	// これに、VSBuilderを追加したときを考えてみると、Strategyになっていることが分かると思うよ
	typedef std::vector<std::unique_ptr<Builder>> Builders;

	Builders builders;

	builders.emplace_back(std::make_unique<ClangBuilder>(std::make_unique<ClangBuilderConsoleLog>()));
	builders.emplace_back(std::make_unique<ClangBuilder>(std::make_unique<ClangBuilderFileLog>()));
	builders.emplace_back(std::make_unique<GCCBuilder>(std::make_unique<GCCBuilderConsoleLog>()));
	builders.emplace_back(std::make_unique<GCCBuilder>(std::make_unique<GCCBuilderFileLog>()));

	for (size_t i = 0; i < builders.size(); i++)
	{
		builders[i]->outputLog();
	}

	ClangBuilder2<ClangBuilderConsoleLog2> clangBuilder_Console(ClangBuilderConsoleLog2{});
	ClangBuilder2<ClangBuilderFileLog2> clangBuilder_File(ClangBuilderFileLog2{});
	clangBuilder_Console.outputLog();
	clangBuilder_File.outputLog();

	return 0;
}