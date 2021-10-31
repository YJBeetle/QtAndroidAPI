#include "../os/Parcel.hpp"
#include "./IpSecAlgorithm.hpp"

namespace android::net
{
	// Fields
	jstring IpSecAlgorithm::AUTH_CRYPT_AES_GCM()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_CRYPT_AES_GCM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_MD5()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_MD5",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_SHA1()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_SHA256()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA256",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_SHA384()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA384",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_SHA512()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA512",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass IpSecAlgorithm::CREATOR()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring IpSecAlgorithm::CRYPT_AES_CBC()
	{
		return getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CRYPT_AES_CBC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	IpSecAlgorithm::IpSecAlgorithm(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	IpSecAlgorithm::IpSecAlgorithm(jstring arg0, jbyteArray arg1)
		: __JniBaseClass(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		) {}
	IpSecAlgorithm::IpSecAlgorithm(jstring arg0, jbyteArray arg1, jint arg2)
		: __JniBaseClass(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[BI)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint IpSecAlgorithm::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jbyteArray IpSecAlgorithm::getKey()
	{
		return callObjectMethod(
			"getKey",
			"()[B"
		).object<jbyteArray>();
	}
	jstring IpSecAlgorithm::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IpSecAlgorithm::getTruncationLengthBits()
	{
		return callMethod<jint>(
			"getTruncationLengthBits",
			"()I"
		);
	}
	jstring IpSecAlgorithm::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void IpSecAlgorithm::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net

