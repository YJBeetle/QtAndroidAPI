#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "./StackWalker_Option.def.hpp"
#include "../util/EnumSet.def.hpp"
#include "./StackWalker.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::StackWalker StackWalker::getInstance()
	{
		return callStaticObjectMethod(
			"java.lang.StackWalker",
			"getInstance",
			"()Ljava/lang/StackWalker;"
		);
	}
	inline java::lang::StackWalker StackWalker::getInstance(java::lang::StackWalker_Option arg0)
	{
		return callStaticObjectMethod(
			"java.lang.StackWalker",
			"getInstance",
			"(Ljava/lang/StackWalker$Option;)Ljava/lang/StackWalker;",
			arg0.object()
		);
	}
	inline java::lang::StackWalker StackWalker::getInstance(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.StackWalker",
			"getInstance",
			"(Ljava/util/Set;)Ljava/lang/StackWalker;",
			arg0.object()
		);
	}
	inline java::lang::StackWalker StackWalker::getInstance(JObject arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.StackWalker",
			"getInstance",
			"(Ljava/util/Set;I)Ljava/lang/StackWalker;",
			arg0.object(),
			arg1
		);
	}
	inline void StackWalker::forEach(JObject arg0) const
	{
		callMethod<void>(
			"forEach",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
	inline JClass StackWalker::getCallerClass() const
	{
		return callObjectMethod(
			"getCallerClass",
			"()Ljava/lang/Class;"
		);
	}
	inline JObject StackWalker::walk(JObject arg0) const
	{
		return callObjectMethod(
			"walk",
			"(Ljava/util/function/Function;)Ljava/lang/Object;",
			arg0.object()
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
