#include "../../JByteArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./IpSecAlgorithm.hpp"

namespace android::net
{
	// Fields
	JString IpSecAlgorithm::AUTH_AES_CMAC()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_AES_CMAC",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::AUTH_AES_XCBC()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_AES_XCBC",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::AUTH_CRYPT_AES_GCM()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_CRYPT_AES_GCM",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::AUTH_CRYPT_CHACHA20_POLY1305()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_CRYPT_CHACHA20_POLY1305",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::AUTH_HMAC_MD5()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_MD5",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::AUTH_HMAC_SHA1()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA1",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::AUTH_HMAC_SHA256()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA256",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::AUTH_HMAC_SHA384()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA384",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::AUTH_HMAC_SHA512()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA512",
			"Ljava/lang/String;"
		);
	}
	JObject IpSecAlgorithm::CREATOR()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString IpSecAlgorithm::CRYPT_AES_CBC()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CRYPT_AES_CBC",
			"Ljava/lang/String;"
		);
	}
	JString IpSecAlgorithm::CRYPT_AES_CTR()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CRYPT_AES_CTR",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	IpSecAlgorithm::IpSecAlgorithm(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	IpSecAlgorithm::IpSecAlgorithm(JString arg0, JByteArray arg1)
		: JObject(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[B)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>()
		) {}
	IpSecAlgorithm::IpSecAlgorithm(JString arg0, JByteArray arg1, jint arg2)
		: JObject(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[BI)V",
			arg0.object<jstring>(),
			arg1.object<jbyteArray>(),
			arg2
		) {}
	
	// Methods
	JObject IpSecAlgorithm::getSupportedAlgorithms()
	{
		return callStaticObjectMethod(
			"android.net.IpSecAlgorithm",
			"getSupportedAlgorithms",
			"()Ljava/util/Set;"
		);
	}
	jint IpSecAlgorithm::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JByteArray IpSecAlgorithm::getKey() const
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		);
	}
	JString IpSecAlgorithm::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint IpSecAlgorithm::getTruncationLengthBits() const
	{
		return callMethod<jint>(
			"getTruncationLengthBits",
			"()I"
		);
	}
	JString IpSecAlgorithm::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void IpSecAlgorithm::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

