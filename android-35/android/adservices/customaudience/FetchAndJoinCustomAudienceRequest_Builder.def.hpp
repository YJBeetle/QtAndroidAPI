#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdSelectionSignals;
}
namespace android::adservices::customaudience
{
	class FetchAndJoinCustomAudienceRequest;
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
	class FetchAndJoinCustomAudienceRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FetchAndJoinCustomAudienceRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FetchAndJoinCustomAudienceRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FetchAndJoinCustomAudienceRequest_Builder(android::net::Uri arg0);
		
		// Methods
		android::adservices::customaudience::FetchAndJoinCustomAudienceRequest build() const;
		android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder setActivationTime(java::time::Instant arg0) const;
		android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder setExpirationTime(java::time::Instant arg0) const;
		android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder setFetchUri(android::net::Uri arg0) const;
		android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder setName(JString arg0) const;
		android::adservices::customaudience::FetchAndJoinCustomAudienceRequest_Builder setUserBiddingSignals(android::adservices::common::AdSelectionSignals arg0) const;
	};
} // namespace android::adservices::customaudience

