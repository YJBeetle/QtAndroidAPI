#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./IpSecAlgorithm.def.hpp"

namespace android::net
{
	// Fields
	inline JString IpSecAlgorithm::AUTH_AES_CMAC()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_AES_CMAC",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::AUTH_AES_XCBC()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_AES_XCBC",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::AUTH_CRYPT_AES_GCM()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_CRYPT_AES_GCM",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::AUTH_CRYPT_CHACHA20_POLY1305()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_CRYPT_CHACHA20_POLY1305",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::AUTH_HMAC_MD5()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_MD5",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::AUTH_HMAC_SHA1()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA1",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::AUTH_HMAC_SHA256()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA256",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::AUTH_HMAC_SHA384()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA384",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::AUTH_HMAC_SHA512()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA512",
			"Ljava/lang/String;"
		);
	}
	inline JObject IpSecAlgorithm::CREATOR()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString IpSecAlgorithm::CRYPT_AES_CBC()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CRYPT_AES_CBC",
			"Ljava/lang/String;"
		);
	}
	inline JString IpSecAlgorithm::CRYPT_AES_CTR()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CRYPT_AES_CTR",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline IpSecAlgorithm::IpSecAlgorithm(JString arg0, JByteArray arg1)
		: JObject(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		) {}
	inline IpSecAlgorithm::IpSecAlgorithm(JString arg0, JByteArray arg1, jint arg2)
		: JObject(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[BI)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2
		) {}
	
	// Methods
	inline JObject IpSecAlgorithm::getSupportedAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.IpSecAlgorithm",
			"getSupportedAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	inline jint IpSecAlgorithm::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JByteArray IpSecAlgorithm::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		);
	}
	inline JString IpSecAlgorithm::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint IpSecAlgorithm::getTruncationLengthBits() const
	{
		return callMethod<jint>(
			"getTruncationLengthBits",
			"()I"
		);
	}
	inline JString IpSecAlgorithm::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void IpSecAlgorithm::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

// Base class headers

