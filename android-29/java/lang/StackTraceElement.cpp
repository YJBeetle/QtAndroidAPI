#include "./StackTraceElement.hpp"

namespace java::lang
{
	// Fields
	
	StackTraceElement::StackTraceElement(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StackTraceElement::StackTraceElement(jstring &arg0, jstring &arg1, jstring &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	StackTraceElement::StackTraceElement(const QString &arg0, const QString &arg1, const QString &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	StackTraceElement::StackTraceElement(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3, jstring &arg4, jstring &arg5, jint &arg6)
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
			arg6
		);
	}
	StackTraceElement::StackTraceElement(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5, jint &arg6)
	{
		__thiz = QAndroidJniObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			QAndroidJniObject::fromString(arg5).object<jstring>(),
			arg6
		);
	}
	
	// Methods
	jboolean StackTraceElement::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring StackTraceElement::getClassLoaderName()
	{
		return __thiz.callObjectMethod(
			"getClassLoaderName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StackTraceElement::getClassName()
	{
		return __thiz.callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StackTraceElement::getFileName()
	{
		return __thiz.callObjectMethod(
			"getFileName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StackTraceElement::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jstring StackTraceElement::getMethodName()
	{
		return __thiz.callObjectMethod(
			"getMethodName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StackTraceElement::getModuleName()
	{
		return __thiz.callObjectMethod(
			"getModuleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StackTraceElement::getModuleVersion()
	{
		return __thiz.callObjectMethod(
			"getModuleVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StackTraceElement::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean StackTraceElement::isNativeMethod()
	{
		return __thiz.callMethod<jboolean>(
			"isNativeMethod",
			"()Z"
		);
	}
	jstring StackTraceElement::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

