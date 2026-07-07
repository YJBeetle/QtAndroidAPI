#pragma once

#include "./ReportEventRequest.def.hpp"
#include "../../view/InputEvent.def.hpp"
#include "../../../JString.hpp"
#include "./ReportEventRequest_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline ReportEventRequest_Builder::ReportEventRequest_Builder(jlong arg0, JString arg1, JString arg2, jint arg3)
		: JObject(
			"android.adservices.adselection.ReportEventRequest$Builder",
			"(JLjava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3
		) {}
	
	// Methods
	inline android::adservices::adselection::ReportEventRequest ReportEventRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/ReportEventRequest;"
		);
	}
	inline android::adservices::adselection::ReportEventRequest_Builder ReportEventRequest_Builder::setAdSelectionId(jlong arg0) const
	{
		return callObjectMethod(
			"setAdSelectionId",
			"(J)Landroid/adservices/adselection/ReportEventRequest$Builder;",
			arg0
		);
	}
	inline android::adservices::adselection::ReportEventRequest_Builder ReportEventRequest_Builder::setData(JString arg0) const
	{
		return callObjectMethod(
			"setData",
			"(Ljava/lang/String;)Landroid/adservices/adselection/ReportEventRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::adselection::ReportEventRequest_Builder ReportEventRequest_Builder::setInputEvent(android::view::InputEvent arg0) const
	{
		return callObjectMethod(
			"setInputEvent",
			"(Landroid/view/InputEvent;)Landroid/adservices/adselection/ReportEventRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::ReportEventRequest_Builder ReportEventRequest_Builder::setKey(JString arg0) const
	{
		return callObjectMethod(
			"setKey",
			"(Ljava/lang/String;)Landroid/adservices/adselection/ReportEventRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::adselection::ReportEventRequest_Builder ReportEventRequest_Builder::setReportingDestinations(jint arg0) const
	{
		return callObjectMethod(
			"setReportingDestinations",
			"(I)Landroid/adservices/adselection/ReportEventRequest$Builder;",
			arg0
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
