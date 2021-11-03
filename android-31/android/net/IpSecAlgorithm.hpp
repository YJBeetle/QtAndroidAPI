#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::net
{
	class IpSecAlgorithm : public JObject
	{
	public:
		// Fields
		static JString AUTH_AES_CMAC();
		static JString AUTH_AES_XCBC();
		static JString AUTH_CRYPT_AES_GCM();
		static JString AUTH_CRYPT_CHACHA20_POLY1305();
		static JString AUTH_HMAC_MD5();
		static JString AUTH_HMAC_SHA1();
		static JString AUTH_HMAC_SHA256();
		static JString AUTH_HMAC_SHA384();
		static JString AUTH_HMAC_SHA512();
		static JObject CREATOR();
		static JString CRYPT_AES_CBC();
		static JString CRYPT_AES_CTR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecAlgorithm(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecAlgorithm(QAndroidJniObject obj);
		
		// Constructors
		IpSecAlgorithm(JString arg0, JByteArray arg1);
		IpSecAlgorithm(JString arg0, JByteArray arg1, jint arg2);
		
		// Methods
		static JObject getSupportedAlgorithms();
		jint describeContents() const;
		JByteArray getKey() const;
		JString getName() const;
		jint getTruncationLengthBits() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

