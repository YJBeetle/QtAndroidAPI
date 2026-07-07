#pragma once

#include "./SigningInfoException.def.hpp"

namespace android::content::pm
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint SigningInfoException::getCode() const
	{
		return callMethod<jint>(
			"getCode",
			"()I"
		);
	}
} // namespace android::content::pm

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::pm;
#endif
