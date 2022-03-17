#pragma once

#include "../../content/Intent.def.hpp"
#include "../../os/CancellationSignal.def.hpp"
#include "./FillCallback.def.hpp"
#include "./FillEventHistory.def.hpp"
#include "./FillRequest.def.hpp"
#include "./SaveCallback.def.hpp"
#include "./SaveRequest.def.hpp"
#include "../../../JString.hpp"
#include "./AutofillService.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JString AutofillService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.autofill.AutofillService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString AutofillService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.autofill.AutofillService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline AutofillService::AutofillService()
		: android::app::Service(
			"android.service.autofill.AutofillService",
			"()V"
		) {}
	
	// Methods
	inline android::service::autofill::FillEventHistory AutofillService::getFillEventHistory() const
	{
		return callObjectMethod(
			"getFillEventHistory",
			"()Landroid/service/autofill/FillEventHistory;"
		);
	}
	inline JObject AutofillService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void AutofillService::onConnected() const
	{
		callMethod<void>(
			"onConnected",
			"()V"
		);
	}
	inline void AutofillService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline void AutofillService::onDisconnected() const
	{
		callMethod<void>(
			"onDisconnected",
			"()V"
		);
	}
	inline void AutofillService::onFillRequest(android::service::autofill::FillRequest arg0, android::os::CancellationSignal arg1, android::service::autofill::FillCallback arg2) const
	{
		callMethod<void>(
			"onFillRequest",
			"(Landroid/service/autofill/FillRequest;Landroid/os/CancellationSignal;Landroid/service/autofill/FillCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AutofillService::onSaveRequest(android::service::autofill::SaveRequest arg0, android::service::autofill::SaveCallback arg1) const
	{
		callMethod<void>(
			"onSaveRequest",
			"(Landroid/service/autofill/SaveRequest;Landroid/service/autofill/SaveCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AutofillService::onSavedDatasetsInfoRequest(JObject arg0) const
	{
		callMethod<void>(
			"onSavedDatasetsInfoRequest",
			"(Landroid/service/autofill/SavedDatasetsInfoCallback;)V",
			arg0.object()
		);
	}
} // namespace android::service::autofill

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
