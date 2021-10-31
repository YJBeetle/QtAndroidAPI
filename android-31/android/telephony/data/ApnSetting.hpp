#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
namespace java::net
{
	class InetAddress;
}

namespace android::telephony::data
{
	class ApnSetting : public __JniBaseClass
	{
	public:
		// Fields
		static jint AUTH_TYPE_CHAP();
		static jint AUTH_TYPE_NONE();
		static jint AUTH_TYPE_PAP();
		static jint AUTH_TYPE_PAP_OR_CHAP();
		static __JniBaseClass CREATOR();
		static jint MVNO_TYPE_GID();
		static jint MVNO_TYPE_ICCID();
		static jint MVNO_TYPE_IMSI();
		static jint MVNO_TYPE_SPN();
		static jint PROTOCOL_IP();
		static jint PROTOCOL_IPV4V6();
		static jint PROTOCOL_IPV6();
		static jint PROTOCOL_NON_IP();
		static jint PROTOCOL_PPP();
		static jint PROTOCOL_UNSTRUCTURED();
		static jint TYPE_BIP();
		static jint TYPE_CBS();
		static jint TYPE_DEFAULT();
		static jint TYPE_DUN();
		static jint TYPE_EMERGENCY();
		static jint TYPE_FOTA();
		static jint TYPE_HIPRI();
		static jint TYPE_IA();
		static jint TYPE_IMS();
		static jint TYPE_MCX();
		static jint TYPE_MMS();
		static jint TYPE_SUPL();
		static jint TYPE_VSIM();
		static jint TYPE_XCAP();
		
		// QJniObject forward
		template<typename ...Ts> explicit ApnSetting(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ApnSetting(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getApnName();
		jint getApnTypeBitmask();
		jint getAuthType();
		jint getCarrierId();
		jstring getEntryName();
		jint getId();
		java::net::InetAddress getMmsProxyAddress();
		jstring getMmsProxyAddressAsString();
		jint getMmsProxyPort();
		android::net::Uri getMmsc();
		jint getMvnoType();
		jint getNetworkTypeBitmask();
		jstring getOperatorNumeric();
		jstring getPassword();
		jint getProtocol();
		java::net::InetAddress getProxyAddress();
		jstring getProxyAddressAsString();
		jint getProxyPort();
		jint getRoamingProtocol();
		jstring getUser();
		jint hashCode();
		jboolean isEnabled();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::data

