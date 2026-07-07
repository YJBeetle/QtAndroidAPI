#pragma once

#include "../../../JObject.hpp"

namespace android::adservices::common
{
	class AdSelectionSignals;
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
	class PartialCustomAudience : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PartialCustomAudience(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PartialCustomAudience(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		java::time::Instant getActivationTime() const;
		java::time::Instant getExpirationTime() const;
		JString getName() const;
		android::adservices::common::AdSelectionSignals getUserBiddingSignals() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::customaudience

