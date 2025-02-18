#pragma once

#include "./AdFilters.def.hpp"
#include "./AppInstallFilters.def.hpp"
#include "./FrequencyCapFilters.def.hpp"
#include "./AdFilters_Builder.def.hpp"

namespace android::adservices::common
{
	// Fields
	
	// Constructors
	inline AdFilters_Builder::AdFilters_Builder()
		: JObject(
			"android.adservices.common.AdFilters$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::common::AdFilters AdFilters_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/common/AdFilters;"
		);
	}
	inline android::adservices::common::AdFilters_Builder AdFilters_Builder::setAppInstallFilters(android::adservices::common::AppInstallFilters arg0) const
	{
		return callObjectMethod(
			"setAppInstallFilters",
			"(Landroid/adservices/common/AppInstallFilters;)Landroid/adservices/common/AdFilters$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::common::AdFilters_Builder AdFilters_Builder::setFrequencyCapFilters(android::adservices::common::FrequencyCapFilters arg0) const
	{
		return callObjectMethod(
			"setFrequencyCapFilters",
			"(Landroid/adservices/common/FrequencyCapFilters;)Landroid/adservices/common/AdFilters$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
