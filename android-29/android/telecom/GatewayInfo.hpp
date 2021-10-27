#pragma once

#ifndef ANDROID_TELECOM_GATEWAYINFO
#define ANDROID_TELECOM_GATEWAYINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telecom
{
	class GatewayInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2);
		void __constructor(const QString &arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2);
		
		// Methods
		jint describeContents();
		QAndroidJniObject getGatewayAddress();
		jstring getGatewayProviderPackageName();
		QAndroidJniObject getOriginalAddress();
		jboolean isEmpty();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject GatewayInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.GatewayInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void GatewayInfo::__constructor(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.GatewayInfo",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void GatewayInfo::__constructor(const QString &arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.GatewayInfo",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/net/Uri;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint GatewayInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject GatewayInfo::getGatewayAddress()
	{
		return __thiz.callObjectMethod(
			"getGatewayAddress",
			"()Landroid/net/Uri;"
		);
	}
	jstring GatewayInfo::getGatewayProviderPackageName()
	{
		return __thiz.callObjectMethod(
			"getGatewayProviderPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject GatewayInfo::getOriginalAddress()
	{
		return __thiz.callObjectMethod(
			"getOriginalAddress",
			"()Landroid/net/Uri;"
		);
	}
	jboolean GatewayInfo::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void GatewayInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class GatewayInfo : public __jni_impl::android::telecom::GatewayInfo
	{
	public:
		GatewayInfo(QAndroidJniObject obj) { __thiz = obj; }
		GatewayInfo(jstring arg0, __jni_impl::android::net::Uri arg1, __jni_impl::android::net::Uri arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_GATEWAYINFO

