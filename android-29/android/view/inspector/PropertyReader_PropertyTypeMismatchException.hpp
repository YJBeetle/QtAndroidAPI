#pragma once

#include "../../../JString.hpp"
#include "./PropertyReader_PropertyTypeMismatchException.def.hpp"

namespace android::view::inspector
{
	// Fields
	
	// Constructors
	inline PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint arg0, JString arg1, JString arg2)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	inline PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint arg0, JString arg1, JString arg2, JString arg3)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view::inspector

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

