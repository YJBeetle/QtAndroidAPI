#pragma once

#include "./LocaleData_PaperSize.def.hpp"

namespace android::icu::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint LocaleData_PaperSize::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint LocaleData_PaperSize::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::icu::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
