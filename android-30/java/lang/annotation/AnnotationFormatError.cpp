#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./AnnotationFormatError.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// QJniObject forward
	AnnotationFormatError::AnnotationFormatError(QJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	AnnotationFormatError::AnnotationFormatError(JString arg0)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AnnotationFormatError::AnnotationFormatError(JThrowable arg0)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	AnnotationFormatError::AnnotationFormatError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang::annotation

