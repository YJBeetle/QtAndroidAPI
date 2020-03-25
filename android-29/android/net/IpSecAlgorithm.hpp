#pragma once

#ifndef ANDROID_NET_IPSECALGORITHM
#define ANDROID_NET_IPSECALGORITHM

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net
{
	class IpSecAlgorithm : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject AUTH_CRYPT_AES_GCM();
		static QAndroidJniObject AUTH_HMAC_MD5();
		static QAndroidJniObject AUTH_HMAC_SHA1();
		static QAndroidJniObject AUTH_HMAC_SHA256();
		static QAndroidJniObject AUTH_HMAC_SHA384();
		static QAndroidJniObject AUTH_HMAC_SHA512();
		static QAndroidJniObject CREATOR();
		static QAndroidJniObject CRYPT_AES_CBC();
		
		// Constructors
		void __constructor(jstring arg0, jbyteArray arg1);
		void __constructor(jstring arg0, jbyteArray arg1, jint arg2);
		
		// Methods
		QAndroidJniObject getName();
		QAndroidJniObject toString();
		QAndroidJniObject getKey();
		jint getTruncationLengthBits();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net

#include "../os/Parcel.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject IpSecAlgorithm::AUTH_CRYPT_AES_GCM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_CRYPT_AES_GCM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject IpSecAlgorithm::AUTH_HMAC_MD5()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_MD5",
			"Ljava/lang/String;");
	}
	QAndroidJniObject IpSecAlgorithm::AUTH_HMAC_SHA1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA1",
			"Ljava/lang/String;");
	}
	QAndroidJniObject IpSecAlgorithm::AUTH_HMAC_SHA256()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA256",
			"Ljava/lang/String;");
	}
	QAndroidJniObject IpSecAlgorithm::AUTH_HMAC_SHA384()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA384",
			"Ljava/lang/String;");
	}
	QAndroidJniObject IpSecAlgorithm::AUTH_HMAC_SHA512()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"AUTH_HMAC_SHA512",
			"Ljava/lang/String;");
	}
	QAndroidJniObject IpSecAlgorithm::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject IpSecAlgorithm::CRYPT_AES_CBC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.IpSecAlgorithm",
			"CRYPT_AES_CBC",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void IpSecAlgorithm::__constructor(jstring arg0, jbyteArray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1);
	}
	void IpSecAlgorithm::__constructor(jstring arg0, jbyteArray arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.net.IpSecAlgorithm",
			"(Ljava/lang/String;[BI)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	QAndroidJniObject IpSecAlgorithm::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject IpSecAlgorithm::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject IpSecAlgorithm::getKey()
	{
		return __thiz.callObjectMethod(
			"getKey",
			"()[B");
	}
	jint IpSecAlgorithm::getTruncationLengthBits()
	{
		return __thiz.callMethod<jint>(
			"getTruncationLengthBits",
			"()I");
	}
	jint IpSecAlgorithm::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void IpSecAlgorithm::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class IpSecAlgorithm : public __jni_impl::android::net::IpSecAlgorithm
	{
	public:
		IpSecAlgorithm(QAndroidJniObject obj) { __thiz = obj; }
		IpSecAlgorithm(jstring arg0, jbyteArray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IpSecAlgorithm(jstring arg0, jbyteArray arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::net

#endif // ANDROID_NET_IPSECALGORITHM

