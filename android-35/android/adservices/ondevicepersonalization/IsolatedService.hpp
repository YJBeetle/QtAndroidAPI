#pragma once

#include "./EventUrlProvider.def.hpp"
#include "./FederatedComputeScheduler.def.hpp"
#include "./LogReader.def.hpp"
#include "./ModelManager.def.hpp"
#include "./RequestToken.def.hpp"
#include "./UserData.def.hpp"
#include "../../content/Intent.def.hpp"
#include "./IsolatedService.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline IsolatedService::IsolatedService()
		: android::app::Service(
			"android.adservices.ondevicepersonalization.IsolatedService",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::EventUrlProvider IsolatedService::getEventUrlProvider(android::adservices::ondevicepersonalization::RequestToken arg0) const
	{
		return callObjectMethod(
			"getEventUrlProvider",
			"(Landroid/adservices/ondevicepersonalization/RequestToken;)Landroid/adservices/ondevicepersonalization/EventUrlProvider;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::FederatedComputeScheduler IsolatedService::getFederatedComputeScheduler(android::adservices::ondevicepersonalization::RequestToken arg0) const
	{
		return callObjectMethod(
			"getFederatedComputeScheduler",
			"(Landroid/adservices/ondevicepersonalization/RequestToken;)Landroid/adservices/ondevicepersonalization/FederatedComputeScheduler;",
			arg0.object()
		);
	}
	inline JObject IsolatedService::getLocalData(android::adservices::ondevicepersonalization::RequestToken arg0) const
	{
		return callObjectMethod(
			"getLocalData",
			"(Landroid/adservices/ondevicepersonalization/RequestToken;)Landroid/adservices/ondevicepersonalization/MutableKeyValueStore;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::LogReader IsolatedService::getLogReader(android::adservices::ondevicepersonalization::RequestToken arg0) const
	{
		return callObjectMethod(
			"getLogReader",
			"(Landroid/adservices/ondevicepersonalization/RequestToken;)Landroid/adservices/ondevicepersonalization/LogReader;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::ModelManager IsolatedService::getModelManager(android::adservices::ondevicepersonalization::RequestToken arg0) const
	{
		return callObjectMethod(
			"getModelManager",
			"(Landroid/adservices/ondevicepersonalization/RequestToken;)Landroid/adservices/ondevicepersonalization/ModelManager;",
			arg0.object()
		);
	}
	inline JObject IsolatedService::getRemoteData(android::adservices::ondevicepersonalization::RequestToken arg0) const
	{
		return callObjectMethod(
			"getRemoteData",
			"(Landroid/adservices/ondevicepersonalization/RequestToken;)Landroid/adservices/ondevicepersonalization/KeyValueStore;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::UserData IsolatedService::getUserData(android::adservices::ondevicepersonalization::RequestToken arg0) const
	{
		return callObjectMethod(
			"getUserData",
			"(Landroid/adservices/ondevicepersonalization/RequestToken;)Landroid/adservices/ondevicepersonalization/UserData;",
			arg0.object()
		);
	}
	inline JObject IsolatedService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void IsolatedService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline JObject IsolatedService::onRequest(android::adservices::ondevicepersonalization::RequestToken arg0) const
	{
		return callObjectMethod(
			"onRequest",
			"(Landroid/adservices/ondevicepersonalization/RequestToken;)Landroid/adservices/ondevicepersonalization/IsolatedWorker;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
