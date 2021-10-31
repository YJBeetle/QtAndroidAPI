#include "./AnnotationFormatError.hpp"

namespace java::lang::annotation
{
	// Fields
	
	AnnotationFormatError::AnnotationFormatError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnnotationFormatError::AnnotationFormatError(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AnnotationFormatError::AnnotationFormatError(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	AnnotationFormatError::AnnotationFormatError(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::lang::annotation

