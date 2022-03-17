#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./BluetoothDevice.def.hpp"
#include "./BluetoothServerSocket.def.hpp"
#include "./le/BluetoothLeAdvertiser.def.hpp"
#include "./le/BluetoothLeScanner.def.hpp"
#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./BluetoothAdapter.def.hpp"

namespace android::bluetooth
{
	// Fields
	inline JString BluetoothAdapter::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::ACTION_DISCOVERY_FINISHED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_DISCOVERY_FINISHED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::ACTION_DISCOVERY_STARTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_DISCOVERY_STARTED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::ACTION_LOCAL_NAME_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_LOCAL_NAME_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::ACTION_REQUEST_DISCOVERABLE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_REQUEST_DISCOVERABLE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::ACTION_REQUEST_ENABLE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_REQUEST_ENABLE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::ACTION_SCAN_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_SCAN_MODE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::ACTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	inline jint BluetoothAdapter::ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"ERROR"
		);
	}
	inline JString BluetoothAdapter::EXTRA_CONNECTION_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_CONNECTION_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::EXTRA_DISCOVERABLE_DURATION()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_DISCOVERABLE_DURATION",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::EXTRA_LOCAL_NAME()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_LOCAL_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::EXTRA_PREVIOUS_CONNECTION_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_CONNECTION_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::EXTRA_PREVIOUS_SCAN_MODE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_SCAN_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::EXTRA_PREVIOUS_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_STATE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::EXTRA_SCAN_MODE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_SCAN_MODE",
			"Ljava/lang/String;"
		);
	}
	inline JString BluetoothAdapter::EXTRA_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		);
	}
	inline jint BluetoothAdapter::SCAN_MODE_CONNECTABLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_CONNECTABLE"
		);
	}
	inline jint BluetoothAdapter::SCAN_MODE_CONNECTABLE_DISCOVERABLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_CONNECTABLE_DISCOVERABLE"
		);
	}
	inline jint BluetoothAdapter::SCAN_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_NONE"
		);
	}
	inline jint BluetoothAdapter::STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_CONNECTED"
		);
	}
	inline jint BluetoothAdapter::STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_CONNECTING"
		);
	}
	inline jint BluetoothAdapter::STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_DISCONNECTED"
		);
	}
	inline jint BluetoothAdapter::STATE_DISCONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_DISCONNECTING"
		);
	}
	inline jint BluetoothAdapter::STATE_OFF()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_OFF"
		);
	}
	inline jint BluetoothAdapter::STATE_ON()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_ON"
		);
	}
	inline jint BluetoothAdapter::STATE_TURNING_OFF()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_TURNING_OFF"
		);
	}
	inline jint BluetoothAdapter::STATE_TURNING_ON()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_TURNING_ON"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean BluetoothAdapter::checkBluetoothAddress(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.bluetooth.BluetoothAdapter",
			"checkBluetoothAddress",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline android::bluetooth::BluetoothAdapter BluetoothAdapter::getDefaultAdapter()
	{
		return callStaticObjectMethod(
			"android.bluetooth.BluetoothAdapter",
			"getDefaultAdapter",
			"()Landroid/bluetooth/BluetoothAdapter;"
		);
	}
	inline jboolean BluetoothAdapter::cancelDiscovery() const
	{
		return callMethod<jboolean>(
			"cancelDiscovery",
			"()Z"
		);
	}
	inline void BluetoothAdapter::closeProfileProxy(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"closeProfileProxy",
			"(ILandroid/bluetooth/BluetoothProfile;)V",
			arg0,
			arg1.object()
		);
	}
	inline jboolean BluetoothAdapter::disable() const
	{
		return callMethod<jboolean>(
			"disable",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::enable() const
	{
		return callMethod<jboolean>(
			"enable",
			"()Z"
		);
	}
	inline JString BluetoothAdapter::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	inline android::bluetooth::le::BluetoothLeAdvertiser BluetoothAdapter::getBluetoothLeAdvertiser() const
	{
		return callObjectMethod(
			"getBluetoothLeAdvertiser",
			"()Landroid/bluetooth/le/BluetoothLeAdvertiser;"
		);
	}
	inline android::bluetooth::le::BluetoothLeScanner BluetoothAdapter::getBluetoothLeScanner() const
	{
		return callObjectMethod(
			"getBluetoothLeScanner",
			"()Landroid/bluetooth/le/BluetoothLeScanner;"
		);
	}
	inline JObject BluetoothAdapter::getBondedDevices() const
	{
		return callObjectMethod(
			"getBondedDevices",
			"()Ljava/util/Set;"
		);
	}
	inline jint BluetoothAdapter::getLeMaximumAdvertisingDataLength() const
	{
		return callMethod<jint>(
			"getLeMaximumAdvertisingDataLength",
			"()I"
		);
	}
	inline JString BluetoothAdapter::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint BluetoothAdapter::getProfileConnectionState(jint arg0) const
	{
		return callMethod<jint>(
			"getProfileConnectionState",
			"(I)I",
			arg0
		);
	}
	inline jboolean BluetoothAdapter::getProfileProxy(android::content::Context arg0, JObject arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"getProfileProxy",
			"(Landroid/content/Context;Landroid/bluetooth/BluetoothProfile$ServiceListener;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline android::bluetooth::BluetoothDevice BluetoothAdapter::getRemoteDevice(JByteArray arg0) const
	{
		return callObjectMethod(
			"getRemoteDevice",
			"([B)Landroid/bluetooth/BluetoothDevice;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::bluetooth::BluetoothDevice BluetoothAdapter::getRemoteDevice(JString arg0) const
	{
		return callObjectMethod(
			"getRemoteDevice",
			"(Ljava/lang/String;)Landroid/bluetooth/BluetoothDevice;",
			arg0.object<jstring>()
		);
	}
	inline jint BluetoothAdapter::getScanMode() const
	{
		return callMethod<jint>(
			"getScanMode",
			"()I"
		);
	}
	inline jint BluetoothAdapter::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	inline jboolean BluetoothAdapter::isDiscovering() const
	{
		return callMethod<jboolean>(
			"isDiscovering",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::isLe2MPhySupported() const
	{
		return callMethod<jboolean>(
			"isLe2MPhySupported",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::isLeCodedPhySupported() const
	{
		return callMethod<jboolean>(
			"isLeCodedPhySupported",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::isLeExtendedAdvertisingSupported() const
	{
		return callMethod<jboolean>(
			"isLeExtendedAdvertisingSupported",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::isLePeriodicAdvertisingSupported() const
	{
		return callMethod<jboolean>(
			"isLePeriodicAdvertisingSupported",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::isMultipleAdvertisementSupported() const
	{
		return callMethod<jboolean>(
			"isMultipleAdvertisementSupported",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::isOffloadedFilteringSupported() const
	{
		return callMethod<jboolean>(
			"isOffloadedFilteringSupported",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::isOffloadedScanBatchingSupported() const
	{
		return callMethod<jboolean>(
			"isOffloadedScanBatchingSupported",
			"()Z"
		);
	}
	inline android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingInsecureRfcommWithServiceRecord(JString arg0, java::util::UUID arg1) const
	{
		return callObjectMethod(
			"listenUsingInsecureRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingRfcommWithServiceRecord(JString arg0, java::util::UUID arg1) const
	{
		return callObjectMethod(
			"listenUsingRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline jboolean BluetoothAdapter::setName(JString arg0) const
	{
		return callMethod<jboolean>(
			"setName",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean BluetoothAdapter::startDiscovery() const
	{
		return callMethod<jboolean>(
			"startDiscovery",
			"()Z"
		);
	}
	inline jboolean BluetoothAdapter::startLeScan(JObject arg0) const
	{
		return callMethod<jboolean>(
			"startLeScan",
			"(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z",
			arg0.object()
		);
	}
	inline jboolean BluetoothAdapter::startLeScan(JArray arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"startLeScan",
			"([Ljava/util/UUID;Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void BluetoothAdapter::stopLeScan(JObject arg0) const
	{
		callMethod<void>(
			"stopLeScan",
			"(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::bluetooth;
#endif
