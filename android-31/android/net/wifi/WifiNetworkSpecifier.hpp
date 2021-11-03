#pragma once

#include "../NetworkSpecifier.hpp"

namespace android::net
{
	class NetworkSpecifier;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi
{
	class WifiNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSpecifier(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean canBeSatisfiedBy(android::net::NetworkSpecifier arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getBand();
		jint hashCode();
		android::net::NetworkSpecifier redact();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

