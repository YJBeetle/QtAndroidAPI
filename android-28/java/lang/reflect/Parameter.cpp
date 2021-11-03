#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Executable.hpp"
#include "./Parameter.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QAndroidJniObject forward
	Parameter::Parameter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Parameter::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject Parameter::getAnnotatedType()
	{
		return callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	JObject Parameter::getAnnotation(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Parameter::getAnnotations()
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JArray Parameter::getAnnotationsByType(JClass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JObject Parameter::getDeclaredAnnotation(JClass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	JArray Parameter::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		);
	}
	JArray Parameter::getDeclaredAnnotationsByType(JClass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0.object<jclass>()
		);
	}
	java::lang::reflect::Executable Parameter::getDeclaringExecutable()
	{
		return callObjectMethod(
			"getDeclaringExecutable",
			"()Ljava/lang/reflect/Executable;"
		);
	}
	jint Parameter::getModifiers()
	{
		return callMethod<jint>(
			"getModifiers",
			"()I"
		);
	}
	JString Parameter::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	JObject Parameter::getParameterizedType()
	{
		return callObjectMethod(
			"getParameterizedType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	JClass Parameter::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		);
	}
	jint Parameter::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Parameter::isImplicit()
	{
		return callMethod<jboolean>(
			"isImplicit",
			"()Z"
		);
	}
	jboolean Parameter::isNamePresent()
	{
		return callMethod<jboolean>(
			"isNamePresent",
			"()Z"
		);
	}
	jboolean Parameter::isSynthetic()
	{
		return callMethod<jboolean>(
			"isSynthetic",
			"()Z"
		);
	}
	jboolean Parameter::isVarArgs()
	{
		return callMethod<jboolean>(
			"isVarArgs",
			"()Z"
		);
	}
	JString Parameter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::reflect

