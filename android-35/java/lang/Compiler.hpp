#pragma once

#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Compiler.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Compiler::command(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Compiler",
			"command",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	inline jboolean Compiler::compileClass(JClass arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClass",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	inline jboolean Compiler::compileClasses(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClasses",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline void Compiler::disable()
	{
		callStaticMethod<void>(
			"java.lang.Compiler",
			"disable",
			"()V"
		);
	}
	inline void Compiler::enable()
	{
		callStaticMethod<void>(
			"java.lang.Compiler",
			"enable",
			"()V"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
