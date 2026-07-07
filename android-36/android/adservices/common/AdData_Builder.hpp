#pragma once

#include "./AdData.def.hpp"
#include "./AdFilters.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JString.hpp"
#include "./AdData_Builder.def.hpp"

namespace android::adservices::common
{
	// Fields
	
	// Constructors
	inline AdData_Builder::AdData_Builder()
		: JObject(
			"android.adservices.common.AdData$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::common::AdData AdData_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/common/AdData;"
		);
	}
	inline android::adservices::common::AdData_Builder AdData_Builder::setAdCounterKeys(JObject arg0) const
	{
		return callObjectMethod(
			"setAdCounterKeys",
			"(Ljava/util/Set;)Landroid/adservices/common/AdData$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::common::AdData_Builder AdData_Builder::setAdFilters(android::adservices::common::AdFilters arg0) const
	{
		return callObjectMethod(
			"setAdFilters",
			"(Landroid/adservices/common/AdFilters;)Landroid/adservices/common/AdData$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::common::AdData_Builder AdData_Builder::setAdRenderId(JString arg0) const
	{
		return callObjectMethod(
			"setAdRenderId",
			"(Ljava/lang/String;)Landroid/adservices/common/AdData$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::common::AdData_Builder AdData_Builder::setMetadata(JString arg0) const
	{
		return callObjectMethod(
			"setMetadata",
			"(Ljava/lang/String;)Landroid/adservices/common/AdData$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::common::AdData_Builder AdData_Builder::setRenderUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setRenderUri",
			"(Landroid/net/Uri;)Landroid/adservices/common/AdData$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::common

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::common;
#endif
