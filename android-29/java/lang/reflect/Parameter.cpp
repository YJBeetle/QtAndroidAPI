#include "./Executable.hpp"
#include "./Parameter.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	Parameter::Parameter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Parameter::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass Parameter::getAnnotatedType()
	{
		return callObjectMethod(
			"getAnnotatedType",
			"()Ljava/lang/reflect/AnnotatedType;"
		);
	}
	__JniBaseClass Parameter::getAnnotation(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Parameter::getAnnotations()
	{
		return callObjectMethod(
			"getAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Parameter::getAnnotationsByType(jclass arg0)
	{
		return callObjectMethod(
			"getAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
	}
	__JniBaseClass Parameter::getDeclaredAnnotation(jclass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotation",
			"(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;",
			arg0
		);
	}
	jarray Parameter::getDeclaredAnnotations()
	{
		return callObjectMethod(
			"getDeclaredAnnotations",
			"()[Ljava/lang/annotation/Annotation;"
		).object<jarray>();
	}
	jarray Parameter::getDeclaredAnnotationsByType(jclass arg0)
	{
		return callObjectMethod(
			"getDeclaredAnnotationsByType",
			"(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;",
			arg0
		).object<jarray>();
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
	jstring Parameter::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass Parameter::getParameterizedType()
	{
		return callObjectMethod(
			"getParameterizedType",
			"()Ljava/lang/reflect/Type;"
		);
	}
	jclass Parameter::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/Class;"
		).object<jclass>();
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
	jstring Parameter::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang::reflect

