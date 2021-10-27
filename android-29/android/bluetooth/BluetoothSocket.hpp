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
		
		BluetoothSocket(QAndroidJniObject obj);
		// Constructors
		BluetoothSocket() = default;
		
		// Methods
		void close();
		void connect();
		jint getConnectionType();
		QAndroidJniObject getInputStream();
		jint getMaxReceivePacketSize();
		jint getMaxTransmitPacketSize();
		QAndroidJniObject getOutputStream();
		QAndroidJniObject getRemoteDevice();
		jboolean isConnected();
	};
} // namespace android::bluetooth

