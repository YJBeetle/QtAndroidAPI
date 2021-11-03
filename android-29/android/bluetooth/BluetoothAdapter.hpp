#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JArray;
namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::bluetooth
{
	class BluetoothServerSocket;
}
namespace android::bluetooth::le
{
	class BluetoothLeAdvertiser;
}
namespace android::bluetooth::le
{
	class BluetoothLeScanner;
}
namespace android::content
{
	class Context;
}
class JString;
namespace java::util
{
	class UUID;
}

namespace android::bluetooth
{
	class BluetoothAdapter : public JObject
	{
	public:
		// Fields
		static JString ACTION_CONNECTION_STATE_CHANGED();
		static JString ACTION_DISCOVERY_FINISHED();
		static JString ACTION_DISCOVERY_STARTED();
		static JString ACTION_LOCAL_NAME_CHANGED();
		static JString ACTION_REQUEST_DISCOVERABLE();
		static JString ACTION_REQUEST_ENABLE();
		static JString ACTION_SCAN_MODE_CHANGED();
		static JString ACTION_STATE_CHANGED();
		static jint ERROR();
		static JString EXTRA_CONNECTION_STATE();
		static JString EXTRA_DISCOVERABLE_DURATION();
		static JString EXTRA_LOCAL_NAME();
		static JString EXTRA_PREVIOUS_CONNECTION_STATE();
		static JString EXTRA_PREVIOUS_SCAN_MODE();
		static JString EXTRA_PREVIOUS_STATE();
		static JString EXTRA_SCAN_MODE();
		static JString EXTRA_STATE();
		static jint SCAN_MODE_CONNECTABLE();
		static jint SCAN_MODE_CONNECTABLE_DISCOVERABLE();
		static jint SCAN_MODE_NONE();
		static jint STATE_CONNECTED();
		static jint STATE_CONNECTING();
		static jint STATE_DISCONNECTED();
		static jint STATE_DISCONNECTING();
		static jint STATE_OFF();
		static jint STATE_ON();
		static jint STATE_TURNING_OFF();
		static jint STATE_TURNING_ON();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothAdapter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean checkBluetoothAddress(JString arg0);
		static android::bluetooth::BluetoothAdapter getDefaultAdapter();
		jboolean cancelDiscovery();
		void closeProfileProxy(jint arg0, JObject arg1);
		jboolean disable();
		jboolean enable();
		JString getAddress();
		android::bluetooth::le::BluetoothLeAdvertiser getBluetoothLeAdvertiser();
		android::bluetooth::le::BluetoothLeScanner getBluetoothLeScanner();
		JObject getBondedDevices();
		jint getLeMaximumAdvertisingDataLength();
		JString getName();
		jint getProfileConnectionState(jint arg0);
		jboolean getProfileProxy(android::content::Context arg0, JObject arg1, jint arg2);
		android::bluetooth::BluetoothDevice getRemoteDevice(JByteArray arg0);
		android::bluetooth::BluetoothDevice getRemoteDevice(JString arg0);
		jint getScanMode();
		jint getState();
		jboolean isDiscovering();
		jboolean isEnabled();
		jboolean isLe2MPhySupported();
		jboolean isLeCodedPhySupported();
		jboolean isLeExtendedAdvertisingSupported();
		jboolean isLePeriodicAdvertisingSupported();
		jboolean isMultipleAdvertisementSupported();
		jboolean isOffloadedFilteringSupported();
		jboolean isOffloadedScanBatchingSupported();
		android::bluetooth::BluetoothServerSocket listenUsingInsecureL2capChannel();
		android::bluetooth::BluetoothServerSocket listenUsingInsecureRfcommWithServiceRecord(JString arg0, java::util::UUID arg1);
		android::bluetooth::BluetoothServerSocket listenUsingL2capChannel();
		android::bluetooth::BluetoothServerSocket listenUsingRfcommWithServiceRecord(JString arg0, java::util::UUID arg1);
		jboolean setName(JString arg0);
		jboolean startDiscovery();
		jboolean startLeScan(JObject arg0);
		jboolean startLeScan(JArray arg0, JObject arg1);
		void stopLeScan(JObject arg0);
	};
} // namespace android::bluetooth

