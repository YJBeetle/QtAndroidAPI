#pragma once

#include "../../JObject.hpp"

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
	class BluetoothSocket : public JObject
	{
	public:
		// Fields
		static jint TYPE_L2CAP();
		static jint TYPE_RFCOMM();
		static jint TYPE_SCO();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BluetoothSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BluetoothSocket(QAndroidJniObject obj);
		
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

