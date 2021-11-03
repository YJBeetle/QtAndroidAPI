#include "./BluetoothDevice.hpp"
#include "./BluetoothServerSocket.hpp"
#include "./le/BluetoothLeAdvertiser.hpp"
#include "./le/BluetoothLeScanner.hpp"
#include "../content/Context.hpp"
#include "../../java/util/UUID.hpp"
#include "./BluetoothAdapter.hpp"

namespace android::bluetooth
{
	// Fields
	jstring BluetoothAdapter::ACTION_CONNECTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_CONNECTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_DISCOVERY_FINISHED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_DISCOVERY_FINISHED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_DISCOVERY_STARTED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_DISCOVERY_STARTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_LOCAL_NAME_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_LOCAL_NAME_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_REQUEST_DISCOVERABLE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_REQUEST_DISCOVERABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_REQUEST_ENABLE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_REQUEST_ENABLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_SCAN_MODE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_SCAN_MODE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::ACTION_STATE_CHANGED()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"ACTION_STATE_CHANGED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothAdapter::ERROR()
	{
		return getStaticField<jint>(
			"android.bluetooth.BluetoothAdapter",
			"ERROR"
		);
	}
	jstring BluetoothAdapter::EXTRA_CONNECTION_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_CONNECTION_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_DISCOVERABLE_DURATION()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_DISCOVERABLE_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_LOCAL_NAME()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_LOCAL_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_PREVIOUS_CONNECTION_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_CONNECTION_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_PREVIOUS_SCAN_MODE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_SCAN_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_PREVIOUS_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_PREVIOUS_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_SCAN_MODE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_SCAN_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring BluetoothAdapter::EXTRA_STATE()
	{
		return getStaticObjectField(
			"android.bluetooth.BluetoothAdapter",
			"EXTRA_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
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
	
	// QJniObject forward
	BluetoothAdapter::BluetoothAdapter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean BluetoothAdapter::checkBluetoothAddress(jstring arg0)
	{
		return callStaticMethod<jboolean>(
			"android.bluetooth.BluetoothAdapter",
			"checkBluetoothAddress",
			"(Ljava/lang/String;)Z",
			arg0
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
	jboolean BluetoothAdapter::cancelDiscovery()
	{
		return callMethod<jboolean>(
			"cancelDiscovery",
			"()Z"
		);
	}
	void BluetoothAdapter::closeProfileProxy(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"closeProfileProxy",
			"(ILandroid/bluetooth/BluetoothProfile;)V",
			arg0,
			arg1.object()
		);
	}
	jboolean BluetoothAdapter::disable()
	{
		return callMethod<jboolean>(
			"disable",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::enable()
	{
		return callMethod<jboolean>(
			"enable",
			"()Z"
		);
	}
	jstring BluetoothAdapter::getAddress()
	{
		return callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::bluetooth::le::BluetoothLeAdvertiser BluetoothAdapter::getBluetoothLeAdvertiser()
	{
		return callObjectMethod(
			"getBluetoothLeAdvertiser",
			"()Landroid/bluetooth/le/BluetoothLeAdvertiser;"
		);
	}
	android::bluetooth::le::BluetoothLeScanner BluetoothAdapter::getBluetoothLeScanner()
	{
		return callObjectMethod(
			"getBluetoothLeScanner",
			"()Landroid/bluetooth/le/BluetoothLeScanner;"
		);
	}
	JObject BluetoothAdapter::getBondedDevices()
	{
		return callObjectMethod(
			"getBondedDevices",
			"()Ljava/util/Set;"
		);
	}
	jint BluetoothAdapter::getLeMaximumAdvertisingDataLength()
	{
		return callMethod<jint>(
			"getLeMaximumAdvertisingDataLength",
			"()I"
		);
	}
	jstring BluetoothAdapter::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BluetoothAdapter::getProfileConnectionState(jint arg0)
	{
		return callMethod<jint>(
			"getProfileConnectionState",
			"(I)I",
			arg0
		);
	}
	jboolean BluetoothAdapter::getProfileProxy(android::content::Context arg0, JObject arg1, jint arg2)
	{
		return callMethod<jboolean>(
			"getProfileProxy",
			"(Landroid/content/Context;Landroid/bluetooth/BluetoothProfile$ServiceListener;I)Z",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	android::bluetooth::BluetoothDevice BluetoothAdapter::getRemoteDevice(jbyteArray arg0)
	{
		return callObjectMethod(
			"getRemoteDevice",
			"([B)Landroid/bluetooth/BluetoothDevice;",
			arg0
		);
	}
	android::bluetooth::BluetoothDevice BluetoothAdapter::getRemoteDevice(jstring arg0)
	{
		return callObjectMethod(
			"getRemoteDevice",
			"(Ljava/lang/String;)Landroid/bluetooth/BluetoothDevice;",
			arg0
		);
	}
	jint BluetoothAdapter::getScanMode()
	{
		return callMethod<jint>(
			"getScanMode",
			"()I"
		);
	}
	jint BluetoothAdapter::getState()
	{
		return callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jboolean BluetoothAdapter::isDiscovering()
	{
		return callMethod<jboolean>(
			"isDiscovering",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLe2MPhySupported()
	{
		return callMethod<jboolean>(
			"isLe2MPhySupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLeCodedPhySupported()
	{
		return callMethod<jboolean>(
			"isLeCodedPhySupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLeExtendedAdvertisingSupported()
	{
		return callMethod<jboolean>(
			"isLeExtendedAdvertisingSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isLePeriodicAdvertisingSupported()
	{
		return callMethod<jboolean>(
			"isLePeriodicAdvertisingSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isMultipleAdvertisementSupported()
	{
		return callMethod<jboolean>(
			"isMultipleAdvertisementSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isOffloadedFilteringSupported()
	{
		return callMethod<jboolean>(
			"isOffloadedFilteringSupported",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::isOffloadedScanBatchingSupported()
	{
		return callMethod<jboolean>(
			"isOffloadedScanBatchingSupported",
			"()Z"
		);
	}
	android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingInsecureL2capChannel()
	{
		return callObjectMethod(
			"listenUsingInsecureL2capChannel",
			"()Landroid/bluetooth/BluetoothServerSocket;"
		);
	}
	android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingInsecureRfcommWithServiceRecord(jstring arg0, java::util::UUID arg1)
	{
		return callObjectMethod(
			"listenUsingInsecureRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			arg0,
			arg1.object()
		);
	}
	android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingL2capChannel()
	{
		return callObjectMethod(
			"listenUsingL2capChannel",
			"()Landroid/bluetooth/BluetoothServerSocket;"
		);
	}
	android::bluetooth::BluetoothServerSocket BluetoothAdapter::listenUsingRfcommWithServiceRecord(jstring arg0, java::util::UUID arg1)
	{
		return callObjectMethod(
			"listenUsingRfcommWithServiceRecord",
			"(Ljava/lang/String;Ljava/util/UUID;)Landroid/bluetooth/BluetoothServerSocket;",
			arg0,
			arg1.object()
		);
	}
	jboolean BluetoothAdapter::setName(jstring arg0)
	{
		return callMethod<jboolean>(
			"setName",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean BluetoothAdapter::startDiscovery()
	{
		return callMethod<jboolean>(
			"startDiscovery",
			"()Z"
		);
	}
	jboolean BluetoothAdapter::startLeScan(JObject arg0)
	{
		return callMethod<jboolean>(
			"startLeScan",
			"(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z",
			arg0.object()
		);
	}
	jboolean BluetoothAdapter::startLeScan(jarray arg0, JObject arg1)
	{
		return callMethod<jboolean>(
			"startLeScan",
			"([Ljava/util/UUID;Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)Z",
			arg0,
			arg1.object()
		);
	}
	void BluetoothAdapter::stopLeScan(JObject arg0)
	{
		callMethod<void>(
			"stopLeScan",
			"(Landroid/bluetooth/BluetoothAdapter$LeScanCallback;)V",
			arg0.object()
		);
	}
} // namespace android::bluetooth

