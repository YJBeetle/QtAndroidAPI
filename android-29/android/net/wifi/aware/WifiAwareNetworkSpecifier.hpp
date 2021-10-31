#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../NetworkSpecifier.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::aware
{
	class WifiAwareNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiAwareNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		WifiAwareNetworkSpecifier(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

