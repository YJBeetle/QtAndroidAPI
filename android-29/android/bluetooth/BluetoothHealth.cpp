#include "../../JIntArray.hpp"
#include "./BluetoothDevice.hpp"
#include "./BluetoothHealthAppConfiguration.hpp"
#include "./BluetoothHealthCallback.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../JString.hpp"
#include "./BluetoothHealth.hpp"

namespace android::bluetooth
{
	// Fields
	jint BluetoothHealth::APP_CONFIG_REGISTRATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_REGISTRATION_FAILURE"
		);
	}
	jint BluetoothHealth::APP_CONFIG_REGISTRATION_SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_REGISTRATION_SUCCESS"
		);
	}
	jint BluetoothHealth::APP_CONFIG_UNREGISTRATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_UNREGISTRATION_FAILURE"
		);
	}
	jint BluetoothHealth::APP_CONFIG_UNREGISTRATION_SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_UNREGISTRATION_SUCCESS"
		);
	}
	jint BluetoothHealth::CHANNEL_TYPE_RELIABLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"CHANNEL_TYPE_RELIABLE"
		);
	}
	jint BluetoothHealth::CHANNEL_TYPE_STREAMING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"CHANNEL_TYPE_STREAMING"
		);
	}
	jint BluetoothHealth::SINK_ROLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"SINK_ROLE"
		);
	}
	jint BluetoothHealth::SOURCE_ROLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"SOURCE_ROLE"
		);
	}
	jint BluetoothHealth::STATE_CHANNEL_CONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_CONNECTED"
		);
	}
	jint BluetoothHealth::STATE_CHANNEL_CONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_CONNECTING"
		);
	}
	jint BluetoothHealth::STATE_CHANNEL_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_DISCONNECTED"
		);
	}
	jint BluetoothHealth::STATE_CHANNEL_DISCONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_DISCONNECTING"
		);
	}
	
	// Constructors
	
	// Methods
	jboolean BluetoothHealth::connectChannelToSource(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1) const
	{
		return callMethod<jboolean>(
			"connectChannelToSource",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean BluetoothHealth::disconnectChannel(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"disconnectChannel",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	JObject BluetoothHealth::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	jint BluetoothHealth::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	JObject BluetoothHealth::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	android::os::ParcelFileDescriptor BluetoothHealth::getMainChannelFd(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1) const
	{
		return callObjectMethod(
			"getMainChannelFd",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean BluetoothHealth::registerSinkAppConfiguration(JString arg0, jint arg1, android::bluetooth::BluetoothHealthCallback arg2) const
	{
		return callMethod<jboolean>(
			"registerSinkAppConfiguration",
			"(Ljava/lang/String;ILandroid/bluetooth/BluetoothHealthCallback;)Z",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	jboolean BluetoothHealth::unregisterAppConfiguration(android::bluetooth::BluetoothHealthAppConfiguration arg0) const
	{
		return callMethod<jboolean>(
			"unregisterAppConfiguration",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;)Z",
			arg0.object()
		);
	}
} // namespace android::bluetooth

