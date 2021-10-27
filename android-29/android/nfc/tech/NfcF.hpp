#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcF : public __JniBaseClass
	{
	public:
		// Fields
		
		NfcF(QAndroidJniObject obj);
		// Constructors
		NfcF() = default;
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getManufacturer();
		jint getMaxTransceiveLength();
		jbyteArray getSystemCode();
		QAndroidJniObject getTag();
		jint getTimeout();
		jboolean isConnected();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

