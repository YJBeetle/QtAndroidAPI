#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Error.hpp"


namespace java::lang::annotation
{
	class AnnotationFormatError : public java::lang::Error
	{
	public:
		// Fields
		
		AnnotationFormatError(QAndroidJniObject obj);
		// Constructors
		AnnotationFormatError(jstring arg0);
		AnnotationFormatError(jthrowable arg0);
		AnnotationFormatError(jstring arg0, jthrowable arg1);
		AnnotationFormatError() = default;
		
		// Methods
	};
} // namespace java::lang::annotation

