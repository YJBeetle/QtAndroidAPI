#pragma once

#include "../../../JObject.hpp"

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
namespace java::net
{
	class InetAddress;
}

namespace android::telephony::data
{
	class ApnSetting : public JObject
	{
	public:
		// Fields
		static jint AUTH_TYPE_CHAP();
		static jint AUTH_TYPE_NONE();
		static jint AUTH_TYPE_PAP();
		static jint AUTH_TYPE_PAP_OR_CHAP();
		static JObject CREATOR();
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ApnSetting(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ApnSetting(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		JString getApnName();
		jint getApnTypeBitmask();
		jint getAuthType();
		jint getCarrierId();
		JString getEntryName();
		jint getId();
		java::net::InetAddress getMmsProxyAddress();
		JString getMmsProxyAddressAsString();
		jint getMmsProxyPort();
		android::net::Uri getMmsc();
		jint getMvnoType();
		jint getNetworkTypeBitmask();
		JString getOperatorNumeric();
		JString getPassword();
		jint getProtocol();
		java::net::InetAddress getProxyAddress();
		JString getProxyAddressAsString();
		jint getProxyPort();
		jint getRoamingProtocol();
		JString getUser();
		jint hashCode();
		jboolean isEnabled();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::data

