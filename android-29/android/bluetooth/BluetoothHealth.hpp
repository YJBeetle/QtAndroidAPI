#pragma once

#include "../../JIntArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "./BluetoothHealthAppConfiguration.def.hpp"
#include "./BluetoothHealthCallback.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../JString.hpp"
#include "./BluetoothHealth.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline jint BluetoothHealth::APP_CONFIG_REGISTRATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_REGISTRATION_FAILURE"
		);
	}
	inline jint BluetoothHealth::APP_CONFIG_REGISTRATION_SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_REGISTRATION_SUCCESS"
		);
	}
	inline jint BluetoothHealth::APP_CONFIG_UNREGISTRATION_FAILURE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_UNREGISTRATION_FAILURE"
		);
	}
	inline jint BluetoothHealth::APP_CONFIG_UNREGISTRATION_SUCCESS()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"APP_CONFIG_UNREGISTRATION_SUCCESS"
		);
	}
	inline jint BluetoothHealth::CHANNEL_TYPE_RELIABLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"CHANNEL_TYPE_RELIABLE"
		);
	}
	inline jint BluetoothHealth::CHANNEL_TYPE_STREAMING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"CHANNEL_TYPE_STREAMING"
		);
	}
	inline jint BluetoothHealth::SINK_ROLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"SINK_ROLE"
		);
	}
	inline jint BluetoothHealth::SOURCE_ROLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"SOURCE_ROLE"
		);
	}
	inline jint BluetoothHealth::STATE_CHANNEL_CONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_CONNECTED"
		);
	}
	inline jint BluetoothHealth::STATE_CHANNEL_CONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_CONNECTING"
		);
	}
	inline jint BluetoothHealth::STATE_CHANNEL_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_DISCONNECTED"
		);
	}
	inline jint BluetoothHealth::STATE_CHANNEL_DISCONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothHealth",
			"STATE_CHANNEL_DISCONNECTING"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean BluetoothHealth::connectChannelToSource(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1) const
	{
		return callMethod<jboolean>(
			"connectChannelToSource",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean BluetoothHealth::disconnectChannel(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"disconnectChannel",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline JObject BluetoothHealth::getConnectedDevices() const
	{
		return callObjectMethod(
			"getConnectedDevices",
			"()Ljava/util/List;"
		);
	}
	inline jint BluetoothHealth::getConnectionState(android::bluetooth::BluetoothDevice arg0) const
	{
		return callMethod<jint>(
			"getConnectionState",
			"(Landroid/bluetooth/BluetoothDevice;)I",
			arg0.object()
		);
	}
	inline JObject BluetoothHealth::getDevicesMatchingConnectionStates(JIntArray arg0) const
	{
		return callObjectMethod(
			"getDevicesMatchingConnectionStates",
			"([I)Ljava/util/List;",
			arg0.object<jintArray>()
		);
	}
	inline android::os::ParcelFileDescriptor BluetoothHealth::getMainChannelFd(android::bluetooth::BluetoothDevice arg0, android::bluetooth::BluetoothHealthAppConfiguration arg1) const
	{
		return callObjectMethod(
			"getMainChannelFd",
			"(Landroid/bluetooth/BluetoothDevice;Landroid/bluetooth/BluetoothHealthAppConfiguration;)Landroid/os/ParcelFileDescriptor;",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean BluetoothHealth::registerSinkAppConfiguration(JString arg0, jint arg1, android::bluetooth::BluetoothHealthCallback arg2) const
	{
		return callMethod<jboolean>(
			"registerSinkAppConfiguration",
			"(Ljava/lang/String;ILandroid/bluetooth/BluetoothHealthCallback;)Z",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline jboolean BluetoothHealth::unregisterAppConfiguration(android::bluetooth::BluetoothHealthAppConfiguration arg0) const
	{
		return callMethod<jboolean>(
			"unregisterAppConfiguration",
			"(Landroid/bluetooth/BluetoothHealthAppConfiguration;)Z",
			arg0.object()
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
