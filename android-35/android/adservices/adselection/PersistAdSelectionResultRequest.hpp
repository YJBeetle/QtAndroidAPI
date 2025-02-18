#pragma once

#include "../../../JByteArray.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "./PersistAdSelectionResultRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong PersistAdSelectionResultRequest::getAdSelectionDataId() const
	{
		return callMethod<jlong>(
			"getAdSelectionDataId",
			"()J"
		);
	}
	inline jlong PersistAdSelectionResultRequest::getAdSelectionId() const
	{
		return callMethod<jlong>(
			"getAdSelectionId",
			"()J"
		);
	}
	inline JByteArray PersistAdSelectionResultRequest::getAdSelectionResult() const
	{
		return callObjectMethod(
			"getAdSelectionResult",
			"()[B"
		);
	}
	inline android::adservices::common::AdTechIdentifier PersistAdSelectionResultRequest::getSeller() const
	{
		return callObjectMethod(
			"getSeller",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
