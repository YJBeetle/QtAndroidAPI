#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./NetworkEvent.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::app::admin
{
	class ConnectEvent : public __jni_impl::android::app::admin::NetworkEvent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getInetAddress();
		jint getPort();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app::admin

#include "../../os/Parcel.hpp"
#include "../../../java/net/InetAddress.hpp"

namespace __jni_impl::android::app::admin
{
	// Fields
	QAndroidJniObject ConnectEvent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.admin.ConnectEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ConnectEvent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.admin.ConnectEvent",
			"(V)V");
	}
	
	// Methods
	jint ConnectEvent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConnectEvent::getInetAddress()
	{
		return __thiz.callObjectMethod(
			"getInetAddress",
			"()Ljava/net/InetAddress;"
		);
	}
	jint ConnectEvent::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring ConnectEvent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConnectEvent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app::admin

namespace android::app::admin
{
	class ConnectEvent : public __jni_impl::android::app::admin::ConnectEvent
	{
	public:
		ConnectEvent(QAndroidJniObject obj) { __thiz = obj; }
		ConnectEvent()
		{
			__constructor();
		}
	};
} // namespace android::app::admin

