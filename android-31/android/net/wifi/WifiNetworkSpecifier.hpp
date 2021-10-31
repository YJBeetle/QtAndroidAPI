#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../NetworkSpecifier.hpp"

namespace android::net
{
	class NetworkSpecifier;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi
{
	class WifiNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSpecifier(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean canBeSatisfiedBy(android::net::NetworkSpecifier arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getBand();
		jint hashCode();
		android::net::NetworkSpecifier redact();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

