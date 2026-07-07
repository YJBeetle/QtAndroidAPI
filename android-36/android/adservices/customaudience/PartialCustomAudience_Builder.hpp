#pragma once

#include "../common/AdSelectionSignals.def.hpp"
#include "./PartialCustomAudience.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./PartialCustomAudience_Builder.def.hpp"

namespace android::adservices::customaudience
{
	// Fields
	
	// Constructors
	inline PartialCustomAudience_Builder::PartialCustomAudience_Builder(JString arg0)
		: JObject(
			"android.adservices.customaudience.PartialCustomAudience$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::adservices::customaudience::PartialCustomAudience PartialCustomAudience_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/customaudience/PartialCustomAudience;"
		);
	}
	inline android::adservices::customaudience::PartialCustomAudience_Builder PartialCustomAudience_Builder::setActivationTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setActivationTime",
			"(Ljava/time/Instant;)Landroid/adservices/customaudience/PartialCustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::PartialCustomAudience_Builder PartialCustomAudience_Builder::setExpirationTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setExpirationTime",
			"(Ljava/time/Instant;)Landroid/adservices/customaudience/PartialCustomAudience$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::customaudience::PartialCustomAudience_Builder PartialCustomAudience_Builder::setUserBiddingSignals(android::adservices::common::AdSelectionSignals arg0) const
	{
		return callObjectMethod(
			"setUserBiddingSignals",
			"(Landroid/adservices/common/AdSelectionSignals;)Landroid/adservices/customaudience/PartialCustomAudience$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::customaudience

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::customaudience;
#endif
