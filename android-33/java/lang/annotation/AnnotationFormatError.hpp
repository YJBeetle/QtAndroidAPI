#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./AnnotationFormatError.def.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// Constructors
	inline AnnotationFormatError::AnnotationFormatError(JString arg0)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AnnotationFormatError::AnnotationFormatError(JThrowable arg0)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline AnnotationFormatError::AnnotationFormatError(JString arg0, JThrowable arg1)
		: java::lang::Error(
			"java.lang.annotation.AnnotationFormatError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang::annotation

// Base class headers
#include "../Error.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::annotation;
#endif
