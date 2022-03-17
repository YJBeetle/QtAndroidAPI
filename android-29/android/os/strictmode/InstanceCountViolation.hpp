#pragma once

#include "../../../JClass.hpp"
#include "./InstanceCountViolation.def.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong InstanceCountViolation::getNumberOfInstances() const
	{
		return callMethod<jlong>(
			"getNumberOfInstances",
			"()J"
		);
	}
} // namespace android::os::strictmode

// Base class headers
#include "./Violation.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os::strictmode;
#endif
