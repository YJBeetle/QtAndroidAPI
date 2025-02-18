#pragma once

#include "../../../JByteArray.hpp"
#include "./GetAdSelectionDataOutcome.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray GetAdSelectionDataOutcome::getAdSelectionData() const
	{
		return callObjectMethod(
			"getAdSelectionData",
			"()[B"
		);
	}
	inline jlong GetAdSelectionDataOutcome::getAdSelectionDataId() const
	{
		return callMethod<jlong>(
			"getAdSelectionDataId",
			"()J"
		);
	}
	inline jlong GetAdSelectionDataOutcome::getAdSelectionId() const
	{
		return callMethod<jlong>(
			"getAdSelectionId",
			"()J"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
