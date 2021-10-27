#include "./BluetoothDevice.hpp"
#include "./BluetoothHealthAppConfiguration.hpp"
#include "./BluetoothHealthCallback.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "./BluetoothHealth.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothHealth::APP_CONFIG_REGISTRATION_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_REGISTRATION_FAILURE"
		);
	}
	jint BluetoothHealth::APP_CONFIG_REGISTRATION_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_REGISTRATION_SUCCESS"
		);
	}
	jint BluetoothHealth::APP_CONFIG_UNREGISTRATION_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_UNREGISTRATION_FAILURE"
		);
	}
	jint BluetoothHealth::APP_CONFIG_UNREGISTRATION_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_UNREGISTRATION_SUCCESS"
		);
	}
	jint BluetoothHealth::CHANNEL_TYPE_RELIABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"CHANNEL_TYPE_RELIABLE"
		);
	}
	jint BluetoothHealth::CHANNEL_TYPE_STREAMING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"CHANNEL_TYPE_STREAMING"
		);
	}
	jint BluetoothHealth::SINK_ROLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"SINK_ROLE"
		);
	}
	jint BluetoothHealth::SOURCE_ROLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"SOURCE_ROLE"
		);
	}
	jint BluetoothHealth::STATE_CHANNEL_CONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_CONNECTED"
		);
	}
	jint BluetoothHealth::STATE_CHANNEL_CONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_CONNECTING"
		);
	}
	jint BluetoothHealth::STATE_CHANNEL_DISCONNECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_DISCONNECTED"
		);
	}
	jint BluetoothHealth::STATE_CHANNEL_DISCONNECTING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_DISCONNECTING"
		);
	}
	
	BluetoothHealth::BluetoothHealth(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean BluetoothHealth::connectChannelToSource(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1)
	{
		return __thiz.callMethod<jboolean>(
			"connectChannelToSource",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean BluetoothHealth::disconnectChannel(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1, jint arg2)
	{
		return __thiz.callMethod<jboolean>(
			"disconnectChannel",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;I)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject BluetoothHealth::getConnectedDevices()
	{
		return __thiz.callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothHealth::getConnectionState(android::bluetooth::BluetoothDevice arg0)
	{
		return __thiz.callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BluetoothHealth::getDevicesMatchingConnectionStates(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0
		);
	}
	QAndroidJniObject BluetoothHealth::getMainChannelFd(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1)
	{
		return __thiz.callObjectMethod(
			"getMainChannelFd",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean BluetoothHealth::registerSinkAppConfiguration(jstring arg0, jint arg1, android::bluetooth::BluetoothHealthCallback arg2)
	{
		return __thiz.callMethod<jboolean>(
			"registerSinkAppConfiguration",
			"(Ljava/lang/String;ILandroid/bluetooth/BluetoothHealthCallback;)Z",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean BluetoothHealth::registerSinkAppConfiguration(const QString &arg0, jint arg1, android::bluetooth::BluetoothHealthCallback arg2)
	{
		return __thiz.callMethod<jboolean>(
			"registerSinkAppConfiguration",
			"(Ljava/lang/String;ILandroid/bluetooth/BluetoothHealthCallback;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean BluetoothHealth::unregisterAppConfiguration(android::bluetooth::BluetoothHealthAppConfiguration arg0)
	{
		return __thiz.callMethod<jboolean>(
			"unregisterAppConfiguration",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace android::bluetooth

