#pragma once

#include "../../../JString.hpp"
#include "../reflect/Method.def.hpp"
#include "./AnnotationTypeMismatchException.def.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// Constructors
	inline AnnotationTypeMismatchException::AnnotationTypeMismatchException(java::lang::reflect::Method arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.annotation.AnnotationTypeMismatchException",
			"(Ljava/lang/reflect/Method;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline java::lang::reflect::Method AnnotationTypeMismatchException::element() const
	{
		return callObjectMethod(
			"element",
			"()Ljava/lang/reflect/Method;"
		);
	}
	inline JString AnnotationTypeMismatchException::foundType() const
	{
		return callObjectMethod(
			"foundType",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::annotation

// Base class headers
#include "../Exception.hpp"
#include "../RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::annotation;
#endif
