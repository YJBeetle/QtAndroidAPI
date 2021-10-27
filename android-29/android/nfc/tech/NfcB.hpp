#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcB : public __JniBaseClass
	{
	public:
		// Fields
		
		NfcB(QAndroidJniObject obj);
		// Constructors
		NfcB() = default;
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getApplicationData();
		jint getMaxTransceiveLength();
		jbyteArray getProtocolInfo();
		QAndroidJniObject getTag();
		jboolean isConnected();
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

