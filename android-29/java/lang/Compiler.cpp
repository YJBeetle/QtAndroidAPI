#include "./Compiler.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Compiler::Compiler(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jobject Compiler::command(jobject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.Compiler",
			"command",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Compiler::compileClass(jclass arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClass",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jboolean Compiler::compileClasses(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClasses",
			"(Ljava/lang/String;)Z",
			arg0
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

