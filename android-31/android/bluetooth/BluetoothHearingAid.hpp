#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}

namespace android::bluetooth
{
	class BluetoothHearingAid : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CONNECTION_STATE_CHANGED();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHearingAid(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHearingAid(QJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getConnectedDevices();
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0);
		__JniBaseClass getDevicesMatchingConnectionStates(jintArray arg0);
	};
} // namespace android::bluetooth

