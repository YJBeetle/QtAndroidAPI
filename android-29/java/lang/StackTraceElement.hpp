#pragma once

#ifndef JAVA_LANG_STACKTRACEELEMENT
#define JAVA_LANG_STACKTRACEELEMENT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class StackTraceElement : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jint arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jboolean isNativeMethod();
		QAndroidJniObject getFileName();
		jint getLineNumber();
		QAndroidJniObject getModuleName();
		QAndroidJniObject getModuleVersion();
		QAndroidJniObject getClassLoaderName();
		QAndroidJniObject getClassName();
		QAndroidJniObject getMethodName();
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void StackTraceElement::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	void StackTraceElement::__constructor(jstring arg0, jstring arg1, jstring arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jboolean StackTraceElement::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject StackTraceElement::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint StackTraceElement::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean StackTraceElement::isNativeMethod()
	{
		return __thiz.callMethod<jboolean>(
			"isNativeMethod",
			"()Z");
	}
	QAndroidJniObject StackTraceElement::getFileName()
	{
		return __thiz.callObjectMethod(
			"getFileName",
			"()Ljava/lang/String;");
	}
	jint StackTraceElement::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I");
	}
	QAndroidJniObject StackTraceElement::getModuleName()
	{
		return __thiz.callObjectMethod(
			"getModuleName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StackTraceElement::getModuleVersion()
	{
		return __thiz.callObjectMethod(
			"getModuleVersion",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StackTraceElement::getClassLoaderName()
	{
		return __thiz.callObjectMethod(
			"getClassLoaderName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StackTraceElement::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject StackTraceElement::getMethodName()
	{
		return __thiz.callObjectMethod(
			"getMethodName",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class StackTraceElement : public __jni_impl::java::lang::StackTraceElement
	{
	public:
		StackTraceElement(QAndroidJniObject obj) { __thiz = obj; }
		StackTraceElement(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
		StackTraceElement(jstring arg0, jstring arg1, jstring arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_STACKTRACEELEMENT

