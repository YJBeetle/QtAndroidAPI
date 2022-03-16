#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./BluetoothDevice.hpp"
#include "./BluetoothServerSocket.hpp"
#include "./le/BluetoothLeAdvertiser.hpp"
#include "./le/BluetoothLeScanner.hpp"
#include "../content/Context.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothAdapter.hpp"

namespace android::bluetooth
{
	// Fields
	JString BluetoothAdapter::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::ACTION_DISCOVERY_FINISHED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_DISCOVERY_FINISHED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::ACTION_DISCOVERY_STARTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_DISCOVERY_STARTED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::ACTION_LOCAL_NAME_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_LOCAL_NAME_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::ACTION_REQUEST_DISCOVERABLE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_REQUEST_DISCOVERABLE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::ACTION_REQUEST_ENABLE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_REQUEST_ENABLE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::ACTION_SCAN_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_SCAN_MODE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::ACTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_STATE_CHANGED",
			"Ljava/lang/String;"
		);
	}
	jint BluetoothAdapter::ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"ERROR"
		);
	}
	JString BluetoothAdapter::EXTRA_CONNECTION_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_CONNECTION_STATE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::EXTRA_DISCOVERABLE_DURATION()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_DISCOVERABLE_DURATION",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::EXTRA_LOCAL_NAME()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_LOCAL_NAME",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::EXTRA_PREVIOUS_CONNECTION_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_CONNECTION_STATE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::EXTRA_PREVIOUS_SCAN_MODE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_SCAN_MODE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::EXTRA_PREVIOUS_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_STATE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::EXTRA_SCAN_MODE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_SCAN_MODE",
			"Ljava/lang/String;"
		);
	}
	JString BluetoothAdapter::EXTRA_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		);
	}
	jint BluetoothAdapter::SCAN_MODE_CONNECTABLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_CONNECTABLE"
		);
	}
	jint BluetoothAdapter::SCAN_MODE_CONNECTABLE_DISCOVERABLE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_CONNECTABLE_DISCOVERABLE"
		);
	}
	jint BluetoothAdapter::SCAN_MODE_NONE()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"SCAN_MODE_NONE"
		);
	}
	jint BluetoothAdapter::STATE_CONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_CONNECTED"
		);
	}
	jint BluetoothAdapter::STATE_CONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_CONNECTING"
		);
	}
	jint BluetoothAdapter::STATE_DISCONNECTED()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_DISCONNECTED"
		);
	}
	jint BluetoothAdapter::STATE_DISCONNECTING()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_DISCONNECTING"
		);
	}
	jint BluetoothAdapter::STATE_OFF()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_OFF"
		);
	}
	jint BluetoothAdapter::STATE_ON()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_ON"
		);
	}
	jint BluetoothAdapter::STATE_TURNING_OFF()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_TURNING_OFF"
		);
	}
	jint BluetoothAdapter::STATE_TURNING_ON()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"STATE_TURNING_ON"
		);
	}
	
	// Constructors
	
	// Methods
	jboolean BluetoothAdapter::checkBluetoothAddress(JString arg0)
	{
		return callStaticMethod<jboolean>(
			"android.bluetooth.BluetoothAdapter",
			"checkBluetoothAddress",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	android::bluetooth::BluetoothAdapter BluetoothAdapter::getDefaultAdapter()
	{
		return callStaticObjectMethod(
			"android.bluetooth.BluetoothAdapter",
			"getDefaultAdapter",
			"()Landroid/bluetooth/BluetoothAdapter;"
		);
	}
	jboolean BluetoothAdapter::cancelDiscovery() const
	{
		return callMethod<jboolean>(
			"cancelDiscovery",
			"()Z"
		);
	}
	void BluetoothAdapter::closeProfileProxy(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"closeProfileProxy",
			"(ILandroid/bluetooth/BluetoothProfile;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean BluetoothAdapter::disable() const
	{
		return callMethod<jboolean>(
			"disable",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::enable() const
	{
		return callMethod<jboolean>(
			"enable",
			"()Z"
		);
	}
	JString BluetoothAdapter::getAddress() const
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		);
	}
	android::bluetooth::le::BluetoothLeAdvertiser BluetoothAdapter::getBluetoothLeAdvertiser() const
	{
		return callObjectMethod(
			"getBluetoothLeAdvertiser",
			"()Landroid/bluetooth/le/BluetoothLeAdvertiser;"
		);
	}
	android::bluetooth::le::BluetoothLeScanner BluetoothAdapter::getBluetoothLeScanner() const
	{
		return callObjectMethod(
			"getBluetoothLeScanner",
			"()Landroid/bluetooth/le/BluetoothLeScanner;"
		);
	}
	JObject BluetoothAdapter::getBondedDevices() const
	{
		return callObjectMethod(
			"getBondedDevices",
			"()Ljava/util/Set;"
		);
	}
	jint BluetoothAdapter::getLeMaximumAdvertisingDataLength() const
	{
		return callMethod<jint>(
			"getLeMaximumAdvertisingDataLength",
			"()I"
		);
	}
	JString BluetoothAdapter::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint BluetoothAdapter::getProfileConnectionState(jint arg0) const
	{
		return callMethod<jint>(
			"getProfileConnectionState",
			"(I)I",
			arg0
		);
	}
	jboolean BluetoothAdapter::getProfileProxy(android::content::Context arg0, JObject arg1, jint arg2) const
	{
		return callMethod<jboolean>(
			"getProfileProxy",
			"(Landroid/content/Context;Landroid/bluetooth/BluetoothProfile$ServiceListener;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::bluetooth::BluetoothDevice BluetoothAdapter::getRemoteDevice(JByteArray arg0) const
	{
		return callObjectMethod(
			"getRemoteDevice",
			"([B)Landroid/bluetooth/BluetoothDevice;",
			arg0.object<jbyteArray>()
		);
	}
	android::bluetooth::BluetoothDevice BluetoothAdapter::getRemoteDevice(JString arg0) const
	{
		return callObjectMethod(
			"getRemoteDevice",
			"(Ljava/lang/String;)Landroid/bluetooth/BluetoothDevice;",
			arg0.object<jstring>()
		);
	}
	jint BluetoothAdapter::getScanMode() const
	{
		return callMethod<jint>(
			"getScanMode",
			"()I"
		);
	}
	jint BluetoothAdapter::getState() const
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jboolean BluetoothAdapter::isDiscovering() const
	{
		return callMethod<jboolean>(
			"isDiscovering",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLe2MPhySupported() const
	{
		return callMethod<jboolean>(
			"isLe2MPhySupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLeCodedPhySupported() const
	{
		return callMethod<jboolean>(
			"isLeCodedPhySupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLeExtendedAdvertisingSupported() const
	{
		return callMethod<jboolean>(
			"isLeExtendedAdvertisingSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLePeriodicAdvertisingSupported() const
	{
		return callMethod<jboolean>(
			"isLePeriodicAdvertisingSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isMultipleAdvertisementSupported() const
	{
		return callMethod<jboolean>(
			"isMultipleAdvertisementSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isOffloadedFilteringSupported() const
	{
		return callMethod<jboolean>(
			"isOffloadedFilteringSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isOffloadedScanBatchingSupported() const
	{
		return callMethod<jboolean>(
			"isOffloadedScanBatchingSupported",
			"()Z"
		);
	}
	android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingInsecureL2capChannel() const
	{
		return callObjectMethod(
			"listenUsingInsecureL2capChannel",
			"()Landroid/bluetooth/BluetoothServerSocket;"
		);
	}
	android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingInsecureRfcommWithServiceRecord(JString arg0, java::util::UUID arg1) const
	{
		return callObjectMethod(
			"listenUsingInsecureRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingL2capChannel() const
	{
		return callObjectMethod(
			"listenUsingL2capChannel",
			"()Landroid/bluetooth/BluetoothServerSocket;"
		);
	}
	android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingRfcommWithServiceRecord(JString arg0, java::util::UUID arg1) const
	{
		return callObjectMethod(
			"listenUsingRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	jboolean BluetoothAdapter::setName(JString arg0) const
	{
		return callMethod<jboolean>(
			"setName",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean BluetoothAdapter::startDiscovery() const
	{
		return callMethod<jboolean>(
			"startDiscovery",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::startLeScan(JObject arg0) const
	{
		return callMethod<jboolean>(
			"startLeScan",
			"(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothAdapter::startLeScan(JArray arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"startLeScan",
			"([Ljava/util/UUID;Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	void BluetoothAdapter::stopLeScan(JObject arg0) const
	{
		callMethod<void>(
			"stopLeScan",
			"(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth

