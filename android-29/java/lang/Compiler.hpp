#pragma once

#ifndef JAVA_LANG_COMPILER
#define JAVA_LANG_COMPILER

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
		static QAndroidJniObject command(jobject arg0);
		static void enable();
		static void disable();
		static jboolean compileClass(jclass arg0);
		static jboolean compileClasses(jstring arg0);
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
	QAndroidJniObject Compiler::command(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.Compiler",
			"command",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	void Compiler::enable()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Compiler",
			"enable",
			"()V");
	}
	void Compiler::disable()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.lang.Compiler",
			"disable",
			"()V");
	}
	jboolean Compiler::compileClass(jclass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClass",
			"(Ljava/lang/Class;)Z",
			arg0);
	}
	jboolean Compiler::compileClasses(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.Compiler",
			"compileClasses",
			"(Ljava/lang/String;)Z",
			arg0);
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

#endif // JAVA_LANG_COMPILER

