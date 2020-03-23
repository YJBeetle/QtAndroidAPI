#pragma once

#ifndef ANDROID_APP_ADMIN_DNSEVENT
#define ANDROID_APP_ADMIN_DNSEVENT

#include "NetworkEvent.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app::admin
{
	class DnsEvent : public __jni_impl::android::app::admin::NetworkEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getInetAddresses();
		QAndroidJniObject getHostname();
		jint getTotalResolvedAddressCount();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::admin

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	QAndroidJniObject DnsEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.DnsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void DnsEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.DnsEvent",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DnsEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject DnsEvent::getInetAddresses()
	{
		return __thiz.callObjectMethod(
			"getInetAddresses",
			"()Ljava/util/List;");
	}
	QAndroidJniObject DnsEvent::getHostname()
	{
		return __thiz.callObjectMethod(
			"getHostname",
			"()Ljava/lang/String;");
	}
	jint DnsEvent::getTotalResolvedAddressCount()
	{
		return __thiz.callMethod<jint>(
			"getTotalResolvedAddressCount",
			"()I");
	}
	jint DnsEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void DnsEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class DnsEvent : public __jni_impl::android::app::admin::DnsEvent
	{
	public:
		DnsEvent(QAndroidJniObject obj) { __thiz = obj; }
		DnsEvent()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

#endif // ANDROID_APP_ADMIN_DNSEVENT

