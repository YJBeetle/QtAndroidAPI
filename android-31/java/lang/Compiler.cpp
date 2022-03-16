#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Compiler.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject Compiler::command(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Compiler",
			"command",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>()
		);
	}
	jboolean Compiler::compileClass(JClass arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClass",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	jboolean Compiler::compileClasses(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClasses",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	void Compiler::disable()
	{
		callStaticMethod<void>(
			"java.lang.Compiler",
			"disable",
			"()V"
		);
	}
	void Compiler::enable()
	{
		callStaticMethod<void>(
			"java.lang.Compiler",
			"enable",
			"()V"
		);
	}
} // namespace java::lang

