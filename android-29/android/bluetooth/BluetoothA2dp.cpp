#include "./BluetoothDevice.hpp"
#include "../content/Context.hpp"
#include "./BluetoothA2dp.hpp"

namespace android::bluetooth
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
	
	BluetoothA2dp::BluetoothA2dp(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void BluetoothA2dp::finalize()
	{
		__thiz.callMethod<void>(
			"finalize",
			"()V"
		);
	}
	QAndroidJniObject BluetoothA2dp::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothA2dp::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object()
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
	jboolean BluetoothA2dp::isA2dpPlaying(android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isA2dpPlaying",
			"(Landroid/bluetooth/BluetoothDevice;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::bluetooth

