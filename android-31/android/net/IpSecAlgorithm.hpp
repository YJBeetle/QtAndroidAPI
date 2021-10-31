#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class IpSecAlgorithm : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTH_AES_CMAC();
		static jstring AUTH_AES_XCBC();
		static jstring AUTH_CRYPT_AES_GCM();
		static jstring AUTH_CRYPT_CHACHA20_POLY1305();
		static jstring AUTH_HMAC_MD5();
		static jstring AUTH_HMAC_SHA1();
		static jstring AUTH_HMAC_SHA256();
		static jstring AUTH_HMAC_SHA384();
		static jstring AUTH_HMAC_SHA512();
		static __JniBaseClass CREATOR();
		static jstring CRYPT_AES_CBC();
		static jstring CRYPT_AES_CTR();
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecAlgorithm(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IpSecAlgorithm(QJniObject obj);
		
		// Constructors
		IpSecAlgorithm(jstring arg0, jbyteArray arg1);
		IpSecAlgorithm(jstring arg0, jbyteArray arg1, jint arg2);
		
		// Methods
		static __JniBaseClass getSupportedAlgorithms();
		jint describeContents();
		jbyteArray getKey();
		jstring getName();
		jint getTruncationLengthBits();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

