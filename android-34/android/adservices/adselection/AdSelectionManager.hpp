#pragma once

#include "./AdSelectionConfig.def.hpp"
#include "./ReportImpressionRequest.def.hpp"
#include "./TestAdSelectionManager.def.hpp"
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
	inline android::adservices::adselection::TestAdSelectionManager AdSelectionManager::getTestAdSelectionManager() const
	{
		return callObjectMethod(
			"getTestAdSelectionManager",
			"()Landroid/adservices/adselection/TestAdSelectionManager;"
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
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
