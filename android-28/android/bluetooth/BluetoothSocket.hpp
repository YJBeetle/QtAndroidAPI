#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::bluetooth
{
	class BluetoothDevice;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}

namespace android::bluetooth
{
	class BluetoothSocket : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_L2CAP();
		static jint TYPE_RFCOMM();
		static jint TYPE_SCO();
		
		// QJniObject forward
		template<typename ...Ts> explicit BluetoothSocket(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothSocket(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void connect();
		jint getConnectionType();
		java::io::InputStream getInputStream();
		jint getMaxReceivePacketSize();
		jint getMaxTransmitPacketSize();
		java::io::OutputStream getOutputStream();
		android::bluetooth::BluetoothDevice getRemoteDevice();
		jboolean isConnected();
	};
} // namespace android::bluetooth

