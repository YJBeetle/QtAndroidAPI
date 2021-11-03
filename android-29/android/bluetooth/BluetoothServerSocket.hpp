#pragma once

#include "../../JObject.hpp"

namespace android::bluetooth
{
	class BluetoothSocket;
}

namespace android::bluetooth
{
	class BluetoothServerSocket : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothServerSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothServerSocket(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::bluetooth::BluetoothSocket accept();
		android::bluetooth::BluetoothSocket accept(jint arg0);
		void close();
		jint getPsm();
		jstring toString();
	};
} // namespace android::bluetooth

