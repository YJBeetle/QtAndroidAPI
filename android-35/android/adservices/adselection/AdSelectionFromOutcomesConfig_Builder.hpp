#pragma once

#include "./AdSelectionFromOutcomesConfig.def.hpp"
#include "../common/AdSelectionSignals.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./AdSelectionFromOutcomesConfig_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline AdSelectionFromOutcomesConfig_Builder::AdSelectionFromOutcomesConfig_Builder()
		: JObject(
			"android.adservices.adselection.AdSelectionFromOutcomesConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::adselection::AdSelectionFromOutcomesConfig AdSelectionFromOutcomesConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/AdSelectionFromOutcomesConfig;"
		);
	}
	inline android::adservices::adselection::AdSelectionFromOutcomesConfig_Builder AdSelectionFromOutcomesConfig_Builder::setAdSelectionIds(JObject arg0) const
	{
		return callObjectMethod(
			"setAdSelectionIds",
			"(Ljava/util/List;)Landroid/adservices/adselection/AdSelectionFromOutcomesConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionFromOutcomesConfig_Builder AdSelectionFromOutcomesConfig_Builder::setSelectionLogicUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setSelectionLogicUri",
			"(Landroid/net/Uri;)Landroid/adservices/adselection/AdSelectionFromOutcomesConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionFromOutcomesConfig_Builder AdSelectionFromOutcomesConfig_Builder::setSelectionSignals(android::adservices::common::AdSelectionSignals arg0) const
	{
		return callObjectMethod(
			"setSelectionSignals",
			"(Landroid/adservices/common/AdSelectionSignals;)Landroid/adservices/adselection/AdSelectionFromOutcomesConfig$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::AdSelectionFromOutcomesConfig_Builder AdSelectionFromOutcomesConfig_Builder::setSeller(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setSeller",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/adselection/AdSelectionFromOutcomesConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
