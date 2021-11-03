#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::bluetooth
{
	class BluetoothDevice;
}

namespace android::bluetooth
{
	class BluetoothHidDevice_Callback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHidDevice_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHidDevice_Callback(QJniObject obj);
		
		// Constructors
		BluetoothHidDevice_Callback();
		
		// Methods
		void onAppStatusChanged(android::bluetooth::BluetoothDevice arg0, jboolean arg1) const;
		void onConnectionStateChanged(android::bluetooth::BluetoothDevice arg0, jint arg1) const;
		void onGetReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, jint arg3) const;
		void onInterruptData(android::bluetooth::BluetoothDevice arg0, jbyte arg1, JByteArray arg2) const;
		void onSetProtocol(android::bluetooth::BluetoothDevice arg0, jbyte arg1) const;
		void onSetReport(android::bluetooth::BluetoothDevice arg0, jbyte arg1, jbyte arg2, JByteArray arg3) const;
		void onVirtualCableUnplug(android::bluetooth::BluetoothDevice arg0) const;
	};
} // namespace android::bluetooth

