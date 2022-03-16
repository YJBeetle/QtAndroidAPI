#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace android::content
{
	class Context;
}
class JString;

namespace android::bluetooth
{
	class BluetoothHearingAid : public JObject
	{
	public:
		// Fields
		static JString ACTION_CONNECTION_STATE_CHANGED();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothHearingAid(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothHearingAid(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getConnectedDevices() const;
		jint getConnectionState(android::bluetooth::BluetoothDevice arg0) const;
		JObject getDevicesMatchingConnectionStates(JIntArray arg0) const;
	};
} // namespace android::bluetooth

