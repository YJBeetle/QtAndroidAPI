#pragma once

#ifndef ANDROID_TELECOM_CALLAUDIOSTATE
#define ANDROID_TELECOM_CALLAUDIOSTATE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telecom
{
	class CallAudioState : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint ROUTE_BLUETOOTH();
		static jint ROUTE_EARPIECE();
		static jint ROUTE_SPEAKER();
		static jint ROUTE_WIRED_HEADSET();
		static jint ROUTE_WIRED_OR_EARPIECE();
		
		// Constructors
		void __constructor(jboolean arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jboolean isMuted();
		jint getRoute();
		jint getSupportedRouteMask();
		QAndroidJniObject getActiveBluetoothDevice();
		QAndroidJniObject getSupportedBluetoothDevices();
		static QAndroidJniObject audioRouteToString(jint arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "../bluetooth/BluetoothDevice.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	QAndroidJniObject CallAudioState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.CallAudioState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint CallAudioState::ROUTE_BLUETOOTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_BLUETOOTH");
	}
	jint CallAudioState::ROUTE_EARPIECE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_EARPIECE");
	}
	jint CallAudioState::ROUTE_SPEAKER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_SPEAKER");
	}
	jint CallAudioState::ROUTE_WIRED_HEADSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_WIRED_HEADSET");
	}
	jint CallAudioState::ROUTE_WIRED_OR_EARPIECE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.CallAudioState",
			"ROUTE_WIRED_OR_EARPIECE");
	}
	
	// Constructors
	void CallAudioState::__constructor(jboolean arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.CallAudioState",
			"(ZII)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jboolean CallAudioState::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CallAudioState::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jboolean CallAudioState::isMuted()
	{
		return __thiz.callMethod<jboolean>(
			"isMuted",
			"()Z");
	}
	jint CallAudioState::getRoute()
	{
		return __thiz.callMethod<jint>(
			"getRoute",
			"()I");
	}
	jint CallAudioState::getSupportedRouteMask()
	{
		return __thiz.callMethod<jint>(
			"getSupportedRouteMask",
			"()I");
	}
	QAndroidJniObject CallAudioState::getActiveBluetoothDevice()
	{
		return __thiz.callObjectMethod(
			"getActiveBluetoothDevice",
			"()Landroid/bluetooth/BluetoothDevice;");
	}
	QAndroidJniObject CallAudioState::getSupportedBluetoothDevices()
	{
		return __thiz.callObjectMethod(
			"getSupportedBluetoothDevices",
			"()Ljava/util/Collection;");
	}
	QAndroidJniObject CallAudioState::audioRouteToString(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.telecom.CallAudioState",
			"audioRouteToString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jint CallAudioState::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CallAudioState::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class CallAudioState : public __jni_impl::android::telecom::CallAudioState
	{
	public:
		CallAudioState(QAndroidJniObject obj) { __thiz = obj; }
		CallAudioState(jboolean arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_CALLAUDIOSTATE

