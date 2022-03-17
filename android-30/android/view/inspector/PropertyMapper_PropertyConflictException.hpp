#pragma once

#include "../../../JString.hpp"
#include "./PropertyMapper_PropertyConflictException.def.hpp"

namespace android::view::inspector
{
	// Fields
	
	// Constructors
	inline PropertyMapper_PropertyConflictException::PropertyMapper_PropertyConflictException(JString arg0, JString arg1, JString arg2)
		: java::lang::RuntimeException(
			"android.view.inspector.PropertyMapper$PropertyConflictException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
} // namespace android::view::inspector

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inspector;
#endif
