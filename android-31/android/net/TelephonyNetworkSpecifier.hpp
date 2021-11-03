#pragma once

#include "./NetworkSpecifier.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net
{
	class TelephonyNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TelephonyNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		TelephonyNetworkSpecifier(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getSubscriptionId();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

