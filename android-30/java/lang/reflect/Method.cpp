#include "../../../JByteArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../StringBuilder.hpp"
#include "./AccessibleObject.hpp"
#include "./Method.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	Method::Method(QJniObject obj) : java::lang::reflect::Executable(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Method::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Method::getAnnotatedReturnType()
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Method::getAnnotation(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Method::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JClass Method::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	JObject Method::getDefaultValue()
	{
		return callObjectMethod(
			"getDefaultValue",
			"()Ljava/lang/Object;"
		);
	}
	JArray Method::getExceptionTypes()
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		);
	}
	JArray Method::getGenericExceptionTypes()
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	JArray Method::getGenericParameterTypes()
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	JObject Method::getGenericReturnType()
	{
		return callObjectMethod(
			"getGenericReturnType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	jint Method::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	JString Method::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JArray Method::getParameterAnnotations()
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		);
	}
	jint Method::getParameterCount()
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	JArray Method::getParameterTypes()
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		);
	}
	JClass Method::getReturnType()
	{
		return callObjectMethod(
			"getReturnType",
			"()Ljava/lang/Class;"
		);
	}
	JArray Method::getTypeParameters()
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		);
	}
	jint Method::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject Method::invoke(JObject arg0, JObjectArray arg1)
	{
		return callObjectMethod(
			"invoke",
			"(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobject>(),
			arg1.object<jobjectArray>()
		);
	}
	jboolean Method::isBridge()
	{
		return callMethod<jboolean>(
			"isBridge",
			"()Z"
		);
	}
	jboolean Method::isDefault()
	{
		return callMethod<jboolean>(
			"isDefault",
			"()Z"
		);
	}
	jboolean Method::isSynthetic()
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Method::isVarArgs()
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	void Method::setAccessible(jboolean arg0)
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	JString Method::toGenericString()
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
	JString Method::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

