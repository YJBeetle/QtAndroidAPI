#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdSelectionSignals;
}
namespace android::adservices::common
{
	class AdTechIdentifier;
}
namespace android::adservices::customaudience
{
	class CustomAudience;
}
namespace android::adservices::customaudience
{
	class TrustedBiddingData;
}
namespace android::net
{
	class Uri;
}
class JString;
namespace java::time
{
	class Instant;
}

namespace android::adservices::customaudience
{
	class CustomAudience_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CustomAudience_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CustomAudience_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CustomAudience_Builder();
		
		// Methods
		android::adservices::customaudience::CustomAudience build() const;
		android::adservices::customaudience::CustomAudience_Builder setActivationTime(java::time::Instant arg0) const;
		android::adservices::customaudience::CustomAudience_Builder setAds(JObject arg0) const;
		android::adservices::customaudience::CustomAudience_Builder setBiddingLogicUri(android::net::Uri arg0) const;
		android::adservices::customaudience::CustomAudience_Builder setBuyer(android::adservices::common::AdTechIdentifier arg0) const;
		android::adservices::customaudience::CustomAudience_Builder setDailyUpdateUri(android::net::Uri arg0) const;
		android::adservices::customaudience::CustomAudience_Builder setExpirationTime(java::time::Instant arg0) const;
		android::adservices::customaudience::CustomAudience_Builder setName(JString arg0) const;
		android::adservices::customaudience::CustomAudience_Builder setTrustedBiddingData(android::adservices::customaudience::TrustedBiddingData arg0) const;
		android::adservices::customaudience::CustomAudience_Builder setUserBiddingSignals(android::adservices::common::AdSelectionSignals arg0) const;
	};
} // namespace android::adservices::customaudience

