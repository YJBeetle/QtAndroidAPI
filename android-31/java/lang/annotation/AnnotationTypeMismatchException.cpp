#include "../../../JString.hpp"
#include "../reflect/Method.hpp"
#include "./AnnotationTypeMismatchException.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// Constructors
	AnnotationTypeMismatchException::AnnotationTypeMismatchException(java::lang::reflect::Method arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.annotation.AnnotationTypeMismatchException",
			"(Ljava/lang/reflect/Method;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	java::lang::reflect::Method AnnotationTypeMismatchException::element() const
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/reflect/Method;"
		);
	}
	JString AnnotationTypeMismatchException::foundType() const
	{
		return callObjectMethod(
			"foundType",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::annotation

