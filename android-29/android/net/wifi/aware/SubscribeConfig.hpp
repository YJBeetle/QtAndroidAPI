#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::net::wifi::aware
{
	class SubscribeConfig : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SUBSCRIBE_TYPE_ACTIVE();
		static jint SUBSCRIBE_TYPE_PASSIVE();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::net::wifi::aware

#include "../../../os/Parcel.hpp"

namespace __jni_impl::android::net::wifi::aware
{
	// Fields
	QAndroidJniObject SubscribeConfig::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.wifi.aware.SubscribeConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint SubscribeConfig::SUBSCRIBE_TYPE_ACTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.SubscribeConfig",
			"SUBSCRIBE_TYPE_ACTIVE"
		);
	}
	jint SubscribeConfig::SUBSCRIBE_TYPE_PASSIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.wifi.aware.SubscribeConfig",
			"SUBSCRIBE_TYPE_PASSIVE"
		);
	}
	
	// Constructors
	void SubscribeConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.aware.SubscribeConfig",
			"(V)V");
	}
	
	// Methods
	jint SubscribeConfig::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SubscribeConfig::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint SubscribeConfig::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SubscribeConfig::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SubscribeConfig::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::net::wifi::aware

namespace android::net::wifi::aware
{
	class SubscribeConfig : public __jni_impl::android::net::wifi::aware::SubscribeConfig
	{
	public:
		SubscribeConfig(QAndroidJniObject obj) { __thiz = obj; }
		SubscribeConfig()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi::aware

