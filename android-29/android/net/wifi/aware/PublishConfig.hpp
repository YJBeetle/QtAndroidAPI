#pragma once

#ifndef ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG
#define ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::aware
{
	class PublishConfig : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint PUBLISH_TYPE_SOLICITED();
		static jint PUBLISH_TYPE_UNSOLICITED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	QAndroidJniObject PublishConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.PublishConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PublishConfig::PUBLISH_TYPE_SOLICITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.PublishConfig",
			"PUBLISH_TYPE_SOLICITED");
	}
	jint PublishConfig::PUBLISH_TYPE_UNSOLICITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.PublishConfig",
			"PUBLISH_TYPE_UNSOLICITED");
	}
	
	// Constructors
	void PublishConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.PublishConfig",
			"(V)V");
	}
	
	// Methods
	jboolean PublishConfig::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject PublishConfig::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PublishConfig::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint PublishConfig::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PublishConfig::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class PublishConfig : public __jni_impl::android::net::wifi::aware::PublishConfig
	{
	public:
		PublishConfig(QAndroidJniObject obj) { __thiz = obj; }
		PublishConfig()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

#endif // ANDROID_NET_WIFI_AWARE_PUBLISHCONFIG

