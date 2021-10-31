#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothSocket;
}

namespace android::bluetooth
{
	class BluetoothServerSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothServerSocket(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothServerSocket(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::bluetooth::BluetoothSocket accept();
		android::bluetooth::BluetoothSocket accept(jint arg0);
		void close();
		jint getPsm();
		jstring toString();
	};
} // namespace android::bluetooth

