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
	
	// QAndroidJniObject forward
	Constructor::Constructor(QAndroidJniObject obj) : java::lang::reflect::Executable(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Constructor::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Constructor::getAnnotatedReceiverType()
	{
		return callObjectMethod(
			"getAnnotatedReceiverType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Constructor::getAnnotatedReturnType()
	{
		return callObjectMethod(
			"getAnnotatedReturnType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Constructor::getAnnotation(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Constructor::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JClass Constructor::getDeclaringClass()
	{
		return callObjectMethod(
			"getDeclaringClass",
			"()Ljava/lang/Class;"
		);
	}
	JArray Constructor::getExceptionTypes()
	{
		return callObjectMethod(
			"getExceptionTypes",
			"()[Ljava/lang/Class;"
		);
	}
	JArray Constructor::getGenericExceptionTypes()
	{
		return callObjectMethod(
			"getGenericExceptionTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	JArray Constructor::getGenericParameterTypes()
	{
		return callObjectMethod(
			"getGenericParameterTypes",
			"()[Ljava/lang/reflect/Type;"
		);
	}
	jint Constructor::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	JString Constructor::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JArray Constructor::getParameterAnnotations()
	{
		return callObjectMethod(
			"getParameterAnnotations",
			"()[[Ljava/lang/annotation/Annotation;"
		);
	}
	jint Constructor::getParameterCount()
	{
		return callMethod<jint>(
			"getParameterCount",
			"()I"
		);
	}
	JArray Constructor::getParameterTypes()
	{
		return callObjectMethod(
			"getParameterTypes",
			"()[Ljava/lang/Class;"
		);
	}
	JArray Constructor::getTypeParameters()
	{
		return callObjectMethod(
			"getTypeParameters",
			"()[Ljava/lang/reflect/TypeVariable;"
		);
	}
	jint Constructor::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Constructor::isSynthetic()
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Constructor::isVarArgs()
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	JObject Constructor::newInstance(JObjectArray arg0)
	{
		return callObjectMethod(
			"newInstance",
			"([Ljava/lang/Object;)Ljava/lang/Object;",
			arg0.object<jobjectArray>()
		);
	}
	void Constructor::setAccessible(jboolean arg0)
	{
		callMethod<void>(
			"setAccessible",
			"(Z)V",
			arg0
		);
	}
	JString Constructor::toGenericString()
	{
		return callObjectMethod(
			"toGenericString",
			"()Ljava/lang/String;"
		);
	}
	JString Constructor::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

