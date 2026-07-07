#pragma once

#include "./AppInstallFilters.def.hpp"
#include "./AppInstallFilters_Builder.def.hpp"

namespace android::adservices::common
{
	// Fields
	
	// Constructors
	inline AppInstallFilters_Builder::AppInstallFilters_Builder()
		: JObject(
			"android.adservices.common.AppInstallFilters$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::common::AppInstallFilters AppInstallFilters_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/common/AppInstallFilters;"
		);
	}
	inline android::adservices::common::AppInstallFilters_Builder AppInstallFilters_Builder::setPackageNames(JObject arg0) const
	{
		return callObjectMethod(
			"setPackageNames",
			"(Ljava/util/Set;)Landroid/adservices/common/AppInstallFilters$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
