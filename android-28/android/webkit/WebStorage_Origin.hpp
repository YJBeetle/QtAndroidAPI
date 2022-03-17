#pragma once

#include "../../JString.hpp"
#include "./WebStorage_Origin.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString WebStorage_Origin::getOrigin() const
	{
		return callObjectMethod(
			"getOrigin",
			"()Ljava/lang/String;"
		);
	}
	inline jlong WebStorage_Origin::getQuota() const
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	inline jlong WebStorage_Origin::getUsage() const
	{
		return callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
} // namespace android::webkit

// Base class headers

