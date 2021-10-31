#include "../reflect/Method.hpp"
#include "./AnnotationTypeMismatchException.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// QJniObject forward
	AnnotationTypeMismatchException::AnnotationTypeMismatchException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	AnnotationTypeMismatchException::AnnotationTypeMismatchException(java::lang::reflect::Method arg0, jstring arg1)
		: java::lang::RuntimeException(
			"java.lang.annotation.AnnotationTypeMismatchException",
			"(Ljava/lang/reflect/Method;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	java::lang::reflect::Method AnnotationTypeMismatchException::element()
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/reflect/Method;"
		);
	}
	jstring AnnotationTypeMismatchException::foundType()
	{
		return callObjectMethod(
			"foundType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang::annotation

