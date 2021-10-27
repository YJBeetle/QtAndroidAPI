#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Compiler : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jobject command(jobject arg0);
		static jboolean compileClass(jclass arg0);
		static jboolean compileClasses(jstring arg0);
		static jboolean compileClasses(const QString &arg0);
		static void disable();
		static void enable();
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void Compiler::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Compiler",
			"(V)V");
	}
	
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
	jboolean Compiler::compileClasses(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClasses",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Compiler : public __jni_impl::java::lang::Compiler
	{
	public:
		Compiler(QAndroidJniObject obj) { __thiz = obj; }
		Compiler()
		{
			__constructor();
		}
	};
} // namespace java::lang

