#pragma once

#include "../graphics/drawable/Icon.def.hpp"
#include "./CustomPrinterIconCallback.def.hpp"

namespace android::printservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean CustomPrinterIconCallback::onCustomPrinterIconLoaded(android::graphics::drawable::Icon arg0) const
	{
		return callMethod<jboolean>(
			"onCustomPrinterIconLoaded",
			"(Landroid/graphics/drawable/Icon;)Z",
			arg0.object()
		);
	}
} // namespace android::printservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::printservice;
#endif
