#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./StackWalker_Option.def.hpp"

namespace java::lang
{
	// Fields
	inline java::lang::StackWalker_Option StackWalker_Option::RETAIN_CLASS_REFERENCE()
	{
		return getStaticObjectField(
			"java.lang.StackWalker$Option",
			"RETAIN_CLASS_REFERENCE",
			"Ljava/lang/StackWalker$Option;"
		);
	}
	inline java::lang::StackWalker_Option StackWalker_Option::SHOW_HIDDEN_FRAMES()
	{
		return getStaticObjectField(
			"java.lang.StackWalker$Option",
			"SHOW_HIDDEN_FRAMES",
			"Ljava/lang/StackWalker$Option;"
		);
	}
	inline java::lang::StackWalker_Option StackWalker_Option::SHOW_REFLECT_FRAMES()
	{
		return getStaticObjectField(
			"java.lang.StackWalker$Option",
			"SHOW_REFLECT_FRAMES",
			"Ljava/lang/StackWalker$Option;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::lang::StackWalker_Option StackWalker_Option::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.lang.StackWalker$Option",
			"valueOf",
			"(Ljava/lang/String;)Ljava/lang/StackWalker$Option;",
			arg0.object<jstring>()
		);
	}
	inline JArray StackWalker_Option::values()
	{
		return callStaticObjectMethod(
			"java.lang.StackWalker$Option",
			"values",
			"()[Ljava/lang/StackWalker$Option;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Enum.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
