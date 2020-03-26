#pragma once

#ifndef ANDROID_BLUETOOTH_BLUETOOTHA2DP
#define ANDROID_BLUETOOTH_BLUETOOTHA2DP

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::bluetooth
{
	class BluetoothDevice;
}

namespace __jni_impl::android::bluetooth
{
	class BluetoothA2dp : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		static jstring ACTION_PLAYING_STATE_CHANGED();
		static jint STATE_NOT_PLAYING();
		static jint STATE_PLAYING();
		
		// Constructors
		void __constructor();
		
		// Methods
		void finalize();
		jint getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0);
		QAndroidJniObject getConnectedDevices();
		QAndroidJniObject getDevicesMatchingConnectionStates(jintArray arg0);
		jboolean isA2dpPlaying(__jni_impl::android::bluetooth::BluetoothDevice arg0);
	};
} // namespace __jni_impl::android::bluetooth

#include "../content/Context.hpp"
#include "BluetoothDevice.hpp"

namespace __jni_impl::android::bluetooth
{
	// Fields
	jstring BluetoothA2dp::ACTION_CONNECTION_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothA2dp",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothA2dp::ACTION_PLAYING_STATE_CHANGED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.bluetooth.BluetoothA2dp",
			"ACTION_PLAYING_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothA2dp::STATE_NOT_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothA2dp",
			"STATE_NOT_PLAYING"
		);
	}
	jint BluetoothA2dp::STATE_PLAYING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothA2dp",
			"STATE_PLAYING"
		);
	}
	
	// Constructors
	void BluetoothA2dp::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.bluetooth.BluetoothA2dp",
			"(V)V");
	}
	
	// Methods
	void BluetoothA2dp::finalize()
	{
		__thiz.callMethod<void>(
			"finalize",
			"()V"
		);
	}
	jint BluetoothA2dp::getConnectionState(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothA2dp::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject BluetoothA2dp::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	jboolean BluetoothA2dp::isA2dpPlaying(__jni_impl::android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isA2dpPlaying",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::bluetooth

namespace android::bluetooth
{
	class BluetoothA2dp : public __jni_impl::android::bluetooth::BluetoothA2dp
	{
	public:
		BluetoothA2dp(QAndroidJniObject obj) { __thiz = obj; }
		BluetoothA2dp()
		{
			__constructor();
		}
	};
} // namespace android::bluetooth

#endif // ANDROID_BLUETOOTH_BLUETOOTHA2DP

