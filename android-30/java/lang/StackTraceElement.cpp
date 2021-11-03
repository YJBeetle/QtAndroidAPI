#include "./StackTraceElement.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	StackTraceElement::StackTraceElement(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StackTraceElement::StackTraceElement(jstring arg0, jstring arg1, jstring arg2, jint arg3)
		: JObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	StackTraceElement::StackTraceElement(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6)
		: JObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		) {}
	
	// Methods
	jboolean StackTraceElement::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring StackTraceElement::getClassLoaderName()
	{
		return callObjectMethod(
			"getClassLoaderName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StackTraceElement::getClassName()
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StackTraceElement::getFileName()
	{
		return callObjectMethod(
			"getFileName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StackTraceElement::getLineNumber()
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jstring StackTraceElement::getMethodName()
	{
		return callObjectMethod(
			"getMethodName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StackTraceElement::getModuleName()
	{
		return callObjectMethod(
			"getModuleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring StackTraceElement::getModuleVersion()
	{
		return callObjectMethod(
			"getModuleVersion",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StackTraceElement::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean StackTraceElement::isNativeMethod()
	{
		return callMethod<jboolean>(
			"isNativeMethod",
			"()Z"
		);
	}
	jstring StackTraceElement::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang

