#pragma once

#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "./IncompleteAnnotationException.def.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// Constructors
	inline IncompleteAnnotationException::IncompleteAnnotationException(JClass arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.annotation.IncompleteAnnotationException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JClass IncompleteAnnotationException::annotationType() const
	{
		return callObjectMethod(
			"annotationType",
			"()Ljava/lang/Class;"
		);
	}
	inline JString IncompleteAnnotationException::elementName() const
	{
		return callObjectMethod(
			"elementName",
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
