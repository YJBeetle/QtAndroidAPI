#include "./AnnotationFormatError.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// QJniObject forward
	AnnotationFormatError::AnnotationFormatError(QJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	AnnotationFormatError::AnnotationFormatError(jstring arg0)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	AnnotationFormatError::AnnotationFormatError(jthrowable arg0)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	AnnotationFormatError::AnnotationFormatError(jstring arg0, jthrowable arg1)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang::annotation

