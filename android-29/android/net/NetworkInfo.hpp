#pragma once

#ifndef ANDROID_NET_NETWORKINFO
#define ANDROID_NET_NETWORKINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class NetworkInfo_State;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::net
{
	class NetworkInfo_DetailedState;
}

namespace __jni_impl::android::net
{
	class NetworkInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jstring getTypeName();
		QAndroidJniObject getState();
		jint getType();
		jboolean isAvailable();
		jboolean isConnected();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getSubtype();
		jboolean isFailover();
		jstring getSubtypeName();
		jboolean isConnectedOrConnecting();
		jboolean isRoaming();
		QAndroidJniObject getDetailedState();
		jstring getExtraInfo();
		jstring getReason();
	};
} // namespace __jni_impl::android::net

#include "NetworkInfo_State.hpp"
#include "../os/Parcel.hpp"
#include "NetworkInfo_DetailedState.hpp"

namespace __jni_impl::android::net
{
	// Fields
	QAndroidJniObject NetworkInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.NetworkInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void NetworkInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.NetworkInfo",
			"(V)V");
	}
	
	// Methods
	jstring NetworkInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NetworkInfo::getTypeName()
	{
		return __thiz.callObjectMethod(
			"getTypeName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject NetworkInfo::getState()
	{
		return __thiz.callObjectMethod(
			"getState",
			"()Landroid/net/NetworkInfo$State;"
		);
	}
	jint NetworkInfo::getType()
	{
		return __thiz.callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jboolean NetworkInfo::isAvailable()
	{
		return __thiz.callMethod<jboolean>(
			"isAvailable",
			"()Z"
		);
	}
	jboolean NetworkInfo::isConnected()
	{
		return __thiz.callMethod<jboolean>(
			"isConnected",
			"()Z"
		);
	}
	jint NetworkInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void NetworkInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint NetworkInfo::getSubtype()
	{
		return __thiz.callMethod<jint>(
			"getSubtype",
			"()I"
		);
	}
	jboolean NetworkInfo::isFailover()
	{
		return __thiz.callMethod<jboolean>(
			"isFailover",
			"()Z"
		);
	}
	jstring NetworkInfo::getSubtypeName()
	{
		return __thiz.callObjectMethod(
			"getSubtypeName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean NetworkInfo::isConnectedOrConnecting()
	{
		return __thiz.callMethod<jboolean>(
			"isConnectedOrConnecting",
			"()Z"
		);
	}
	jboolean NetworkInfo::isRoaming()
	{
		return __thiz.callMethod<jboolean>(
			"isRoaming",
			"()Z"
		);
	}
	QAndroidJniObject NetworkInfo::getDetailedState()
	{
		return __thiz.callObjectMethod(
			"getDetailedState",
			"()Landroid/net/NetworkInfo$DetailedState;"
		);
	}
	jstring NetworkInfo::getExtraInfo()
	{
		return __thiz.callObjectMethod(
			"getExtraInfo",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NetworkInfo::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class NetworkInfo : public __jni_impl::android::net::NetworkInfo
	{
	public:
		NetworkInfo(QAndroidJniObject obj) { __thiz = obj; }
		NetworkInfo()
		{
			__constructor();
		}
	};
} // namespace android::net

#endif // ANDROID_NET_NETWORKINFO

