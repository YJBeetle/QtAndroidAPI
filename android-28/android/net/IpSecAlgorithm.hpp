#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class IpSecAlgorithm : public JObject
	{
	public:
		// Fields
		static jstring AUTH_CRYPT_AES_GCM();
		static jstring AUTH_HMAC_MD5();
		static jstring AUTH_HMAC_SHA1();
		static jstring AUTH_HMAC_SHA256();
		static jstring AUTH_HMAC_SHA384();
		static jstring AUTH_HMAC_SHA512();
		static JObject CREATOR();
		static jstring CRYPT_AES_CBC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecAlgorithm(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecAlgorithm(QAndroidJniObject obj);
		
		// Constructors
		IpSecAlgorithm(jstring arg0, jbyteArray arg1);
		IpSecAlgorithm(jstring arg0, jbyteArray arg1, jint arg2);
		
		// Methods
		jint describeContents();
		jbyteArray getKey();
		jstring getName();
		jint getTruncationLengthBits();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

