#pragma once
#include <iostream>

struct ClangBuilderFileLog2
{
	template<typename BUILDER>
	void operator()(const BUILDER& builder)
	{
		std::cout << "ClangBuilder2 : ログをファイルに出力するってばよ。" << std::endl;
	}
};