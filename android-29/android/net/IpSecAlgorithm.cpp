#include "../os/Parcel.hpp"
#include "./IpSecAlgorithm.hpp"

namespace android::net
{
	// Fields
	jstring IpSecAlgorithm::AUTH_CRYPT_AES_GCM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_CRYPT_AES_GCM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_MD5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_MD5",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_SHA1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA1",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_SHA256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA256",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_SHA384()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA384",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring IpSecAlgorithm::AUTH_HMAC_SHA512()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA512",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject IpSecAlgorithm::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring IpSecAlgorithm::CRYPT_AES_CBC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CRYPT_AES_CBC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	IpSecAlgorithm::IpSecAlgorithm(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IpSecAlgorithm::IpSecAlgorithm(jstring arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	IpSecAlgorithm::IpSecAlgorithm(jstring arg0, jbyteArray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[BI)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint IpSecAlgorithm::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jbyteArray IpSecAlgorithm::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()[B"
		).object<jbyteArray>();
	}
	jstring IpSecAlgorithm::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IpSecAlgorithm::getTruncationLengthBits()
	{
		return __thiz.callMethod<jint>(
			"getTruncationLengthBits",
			"()I"
		);
	}
	jstring IpSecAlgorithm::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void IpSecAlgorithm::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::net

