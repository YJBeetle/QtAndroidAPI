#pragma once

#include "../../view/InputEvent.def.hpp"
#include "../../../JString.hpp"
#include "./ReportEventRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	inline jint ReportEventRequest::FLAG_REPORTING_DESTINATION_BUYER()
	{
		return getStaticField<jint>(
			"android.adservices.adselection.ReportEventRequest",
			"FLAG_REPORTING_DESTINATION_BUYER"
		);
	}
	inline jint ReportEventRequest::FLAG_REPORTING_DESTINATION_SELLER()
	{
		return getStaticField<jint>(
			"android.adservices.adselection.ReportEventRequest",
			"FLAG_REPORTING_DESTINATION_SELLER"
		);
	}
	
	// Constructors
	
	// Methods
	inline jlong ReportEventRequest::getAdSelectionId() const
	{
		return callMethod<jlong>(
			"getAdSelectionId",
			"()J"
		);
	}
	inline JString ReportEventRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/String;"
		);
	}
	inline android::view::InputEvent ReportEventRequest::getInputEvent() const
	{
		return callObjectMethod(
			"getInputEvent",
			"()Landroid/view/InputEvent;"
		);
	}
	inline JString ReportEventRequest::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()Ljava/lang/String;"
		);
	}
	inline jint ReportEventRequest::getReportingDestinations() const
	{
		return callMethod<jint>(
			"getReportingDestinations",
			"()I"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
