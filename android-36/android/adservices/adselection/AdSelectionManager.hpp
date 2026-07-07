#pragma once

#include "./AdSelectionConfig.def.hpp"
#include "./AdSelectionFromOutcomesConfig.def.hpp"
#include "./GetAdSelectionDataRequest.def.hpp"
#include "./PersistAdSelectionResultRequest.def.hpp"
#include "./ReportEventRequest.def.hpp"
#include "./ReportImpressionRequest.def.hpp"
#include "./SetAppInstallAdvertisersRequest.def.hpp"
#include "./TestAdSelectionManager.def.hpp"
#include "./UpdateAdCounterHistogramRequest.def.hpp"
#include "../../content/Context.def.hpp"
#include "./AdSelectionManager.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::adservices::adselection::AdSelectionManager AdSelectionManager::get(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.adselection.AdSelectionManager",
			"get",
			"(Landroid/content/Context;)Landroid/adservices/adselection/AdSelectionManager;",
			arg0.object()
		);
	}
	inline void AdSelectionManager::getAdSelectionData(android::adservices::adselection::GetAdSelectionDataRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"getAdSelectionData",
			"(Landroid/adservices/adselection/GetAdSelectionDataRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::adservices::adselection::TestAdSelectionManager AdSelectionManager::getTestAdSelectionManager() const
	{
		return callObjectMethod(
			"getTestAdSelectionManager",
			"()Landroid/adservices/adselection/TestAdSelectionManager;"
		);
	}
	inline void AdSelectionManager::persistAdSelectionResult(android::adservices::adselection::PersistAdSelectionResultRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"persistAdSelectionResult",
			"(Landroid/adservices/adselection/PersistAdSelectionResultRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AdSelectionManager::reportEvent(android::adservices::adselection::ReportEventRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"reportEvent",
			"(Landroid/adservices/adselection/ReportEventRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AdSelectionManager::reportImpression(android::adservices::adselection::ReportImpressionRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"reportImpression",
			"(Landroid/adservices/adselection/ReportImpressionRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AdSelectionManager::selectAds(android::adservices::adselection::AdSelectionConfig arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"selectAds",
			"(Landroid/adservices/adselection/AdSelectionConfig;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AdSelectionManager::selectAds(android::adservices::adselection::AdSelectionFromOutcomesConfig arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"selectAds",
			"(Landroid/adservices/adselection/AdSelectionFromOutcomesConfig;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AdSelectionManager::setAppInstallAdvertisers(android::adservices::adselection::SetAppInstallAdvertisersRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"setAppInstallAdvertisers",
			"(Landroid/adservices/adselection/SetAppInstallAdvertisersRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AdSelectionManager::updateAdCounterHistogram(android::adservices::adselection::UpdateAdCounterHistogramRequest arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"updateAdCounterHistogram",
			"(Landroid/adservices/adselection/UpdateAdCounterHistogramRequest;Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
