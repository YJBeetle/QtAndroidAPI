#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothSocket;
}
class JString;

namespace android::bluetooth
{
	class BluetoothServerSocket : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothServerSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothServerSocket(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::bluetooth::BluetoothSocket accept() const;
		android::bluetooth::BluetoothSocket accept(jint arg0) const;
		void close() const;
		JString toString() const;
	};
} // namespace android::bluetooth

