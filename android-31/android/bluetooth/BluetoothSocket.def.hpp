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
		BluetoothSocket(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void connect() const;
		jint getConnectionType() const;
		java::io::InputStream getInputStream() const;
		jint getMaxReceivePacketSize() const;
		jint getMaxTransmitPacketSize() const;
		java::io::OutputStream getOutputStream() const;
		android::bluetooth::BluetoothDevice getRemoteDevice() const;
		jboolean isConnected() const;
	};
} // namespace android::bluetooth

