#pragma once

#include "../../JArray.hpp"
#include "../../JClass.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./StackTraceElement.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline StackTraceElement::StackTraceElement(JString arg0, JString arg1, JString arg2, jint arg3)
		: JObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		) {}
	inline StackTraceElement::StackTraceElement(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5, jint arg6)
		: JObject(
			"java.lang.StackTraceElement",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>(),
			arg6
		) {}
	
	// Methods
	inline jboolean StackTraceElement::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString StackTraceElement::getClassLoaderName() const
	{
		return callObjectMethod(
			"getClassLoaderName",
			"()Ljava/lang/String;"
		);
	}
	inline JString StackTraceElement::getClassName() const
	{
		return callObjectMethod(
			"getClassName",
			"()Ljava/lang/String;"
		);
	}
	inline JString StackTraceElement::getFileName() const
	{
		return callObjectMethod(
			"getFileName",
			"()Ljava/lang/String;"
		);
	}
	inline jint StackTraceElement::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	inline JString StackTraceElement::getMethodName() const
	{
		return callObjectMethod(
			"getMethodName",
			"()Ljava/lang/String;"
		);
	}
	inline JString StackTraceElement::getModuleName() const
	{
		return callObjectMethod(
			"getModuleName",
			"()Ljava/lang/String;"
		);
	}
	inline JString StackTraceElement::getModuleVersion() const
	{
		return callObjectMethod(
			"getModuleVersion",
			"()Ljava/lang/String;"
		);
	}
	inline jint StackTraceElement::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean StackTraceElement::isNativeMethod() const
	{
		return callMethod<jboolean>(
			"isNativeMethod",
			"()Z"
		);
	}
	inline JString StackTraceElement::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang;
#endif
