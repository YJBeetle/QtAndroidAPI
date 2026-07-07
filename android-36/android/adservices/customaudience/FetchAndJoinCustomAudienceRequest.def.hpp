#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdSelectionSignals;
}
namespace android::net
{
	class Uri;
}
class JObject;
class JString;
namespace java::time
{
	class Instant;
}

namespace android::adservices::customaudience
{
	class FetchAndJoinCustomAudienceRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FetchAndJoinCustomAudienceRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FetchAndJoinCustomAudienceRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Instant getActivationTime() const;
		java::time::Instant getExpirationTime() const;
		android::net::Uri getFetchUri() const;
		JString getName() const;
		android::adservices::common::AdSelectionSignals getUserBiddingSignals() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::adservices::customaudience

