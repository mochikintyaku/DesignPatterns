#include "ClangBuilder.h"
#include "GCCBuilder.h"
#include "ClangBuilderConsoleLog.h"
#include "GCCBuilderConsoleLog.h"
#include <memory>
#include <vector>

int main()
{
	typedef std::vector<std::unique_ptr<Builder>> Builders;

	Builders builders;

	builders.emplace_back(std::make_unique<ClangBuilder>(ClangBuilderConsoleLog()));
	builders.emplace_back(std::make_unique<GCCBuilder>(GCCBuilderConsoleLog()));

	for (const auto& builder : builders)
	{
		builder->outputLog();
	}

	return 0;
}