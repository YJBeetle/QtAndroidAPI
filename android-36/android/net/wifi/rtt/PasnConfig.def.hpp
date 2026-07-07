#pragma once

#include "../../../../JObject.hpp"

class JByteArray;
namespace android::net::wifi
{
	class WifiSsid;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi::rtt
{
	class PasnConfig : public JObject
	{
	public:
		// Fields
		static jint AKM_FILS_EAP_SHA256();
		static jint AKM_FILS_EAP_SHA384();
		static jint AKM_FT_EAP_SHA256();
		static jint AKM_FT_EAP_SHA384();
		static jint AKM_FT_PSK_SHA256();
		static jint AKM_FT_PSK_SHA384();
		static jint AKM_NONE();
		static jint AKM_PASN();
		static jint AKM_SAE();
		static jint CIPHER_CCMP_128();
		static jint CIPHER_CCMP_256();
		static jint CIPHER_GCMP_128();
		static jint CIPHER_GCMP_256();
		static jint CIPHER_NONE();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PasnConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PasnConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getBaseAkms() const;
		jint getCiphers() const;
		JByteArray getPasnComebackCookie() const;
		JString getPassword() const;
		android::net::wifi::WifiSsid getWifiSsid() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi::rtt

