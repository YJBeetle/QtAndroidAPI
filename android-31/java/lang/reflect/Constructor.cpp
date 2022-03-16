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
#include "./Constructor.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean Constructor::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Constructor::getAnnotatedReceiverType() const
	{
		return callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Constructor::getAnnotatedReturnType() const
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Constructor::getAnnotation(JClass arg0) const
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Constructor::getDeclaredAnnotations() const
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JClass Constructor::getDeclaringClass() const
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	JArray Constructor::getExceptionTypes() const
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		);
	}
	JArray Constructor::getGenericExceptionTypes() const
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	JArray Constructor::getGenericParameterTypes() const
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	jint Constructor::getModifiers() const
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	JString Constructor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JArray Constructor::getParameterAnnotations() const
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		);
	}
	jint Constructor::getParameterCount() const
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	JArray Constructor::getParameterTypes() const
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		);
	}
	JArray Constructor::getTypeParameters() const
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		);
	}
	jint Constructor::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Constructor::isSynthetic() const
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Constructor::isVarArgs() const
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	JObject Constructor::newInstance(JObjectArray arg0) const
	{
		return callObjectMethod(
			"newInstance",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	void Constructor::setAccessible(jboolean arg0) const
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	JString Constructor::toGenericString() const
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
	JString Constructor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

