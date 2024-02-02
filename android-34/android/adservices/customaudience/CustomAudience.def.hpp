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
	class TrustedBiddingData;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;
namespace java::time
{
	class Instant;
}

namespace android::adservices::customaudience
{
	class CustomAudience : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CustomAudience(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CustomAudience(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		java::time::Instant getActivationTime() const;
		JObject getAds() const;
		android::net::Uri getBiddingLogicUri() const;
		android::adservices::common::AdTechIdentifier getBuyer() const;
		android::net::Uri getDailyUpdateUri() const;
		java::time::Instant getExpirationTime() const;
		JString getName() const;
		android::adservices::customaudience::TrustedBiddingData getTrustedBiddingData() const;
		android::adservices::common::AdSelectionSignals getUserBiddingSignals() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::customaudience

