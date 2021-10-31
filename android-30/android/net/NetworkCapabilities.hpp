#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class NetworkSpecifier;
}
namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class NetworkCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint NET_CAPABILITY_CAPTIVE_PORTAL();
		static jint NET_CAPABILITY_CBS();
		static jint NET_CAPABILITY_DUN();
		static jint NET_CAPABILITY_EIMS();
		static jint NET_CAPABILITY_FOREGROUND();
		static jint NET_CAPABILITY_FOTA();
		static jint NET_CAPABILITY_IA();
		static jint NET_CAPABILITY_IMS();
		static jint NET_CAPABILITY_INTERNET();
		static jint NET_CAPABILITY_MCX();
		static jint NET_CAPABILITY_MMS();
		static jint NET_CAPABILITY_NOT_CONGESTED();
		static jint NET_CAPABILITY_NOT_METERED();
		static jint NET_CAPABILITY_NOT_RESTRICTED();
		static jint NET_CAPABILITY_NOT_ROAMING();
		static jint NET_CAPABILITY_NOT_SUSPENDED();
		static jint NET_CAPABILITY_NOT_VPN();
		static jint NET_CAPABILITY_RCS();
		static jint NET_CAPABILITY_SUPL();
		static jint NET_CAPABILITY_TEMPORARILY_NOT_METERED();
		static jint NET_CAPABILITY_TRUSTED();
		static jint NET_CAPABILITY_VALIDATED();
		static jint NET_CAPABILITY_WIFI_P2P();
		static jint NET_CAPABILITY_XCAP();
		static jint SIGNAL_STRENGTH_UNSPECIFIED();
		static jint TRANSPORT_BLUETOOTH();
		static jint TRANSPORT_CELLULAR();
		static jint TRANSPORT_ETHERNET();
		static jint TRANSPORT_LOWPAN();
		static jint TRANSPORT_VPN();
		static jint TRANSPORT_WIFI();
		static jint TRANSPORT_WIFI_AWARE();
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NetworkCapabilities(QJniObject obj);
		
		// Constructors
		NetworkCapabilities();
		NetworkCapabilities(android::net::NetworkCapabilities &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getLinkDownstreamBandwidthKbps();
		jint getLinkUpstreamBandwidthKbps();
		android::net::NetworkSpecifier getNetworkSpecifier();
		jint getOwnerUid();
		jint getSignalStrength();
		__JniBaseClass getTransportInfo();
		jboolean hasCapability(jint arg0);
		jboolean hasTransport(jint arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

