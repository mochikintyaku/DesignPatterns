#pragma once
#include "Builder.h"

// 依存オブジェクト注入をテンプレートで行う
// 静的多体性を利用したStrategyパターン
// メソッドを直接呼ぶので、間接参照によるオーバーヘッドが減る
// その代わり、実行時にStrategyを変更できなくなる
#ifndef NDEBUG
template<typename LOG_STRATEGY>
class ClangBuilder2:
	public Builder
{
public:
	ClangBuilder2(LOG_STRATEGY logger)
		: logger_(std::move(logger))
	{ }

	~ClangBuilder2() = default;

	void outputLog()
	{
		// テンプレートを利用したStrategyパターンでは、
		// 関数オブジェクト（()演算子をオーバーロードしたクラス）を渡すのが慣例らしい。
		logger_(*this);
	}
private:
	LOG_STRATEGY logger_;
};

#else
template<typename LOG_STRATEGY>
class ClangBuilder2 :
	public Builder
{
public:
	ClangBuilder2(LOG_STRATEGY logger)
	{
	}

	~ClangBuilder2() = default;

	void outputLog()
	{
		LOG_STRATEGY{}(*this);
	}
};
#endif