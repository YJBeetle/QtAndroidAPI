#include "./Compiler.hpp"

namespace java::lang
{
	// Fields
	
	Compiler::Compiler(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jobject Compiler::command(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Compiler",
			"command",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Compiler::compileClass(jclass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClass",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jboolean Compiler::compileClasses(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClasses",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	void Compiler::disable()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Compiler",
			"disable",
			"()V"
		);
	}
	void Compiler::enable()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Compiler",
			"enable",
			"()V"
		);
	}
} // namespace java::lang

