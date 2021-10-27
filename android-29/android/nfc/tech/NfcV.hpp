#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcV : public __JniBaseClass
	{
	public:
		// Fields
		
		NfcV(QAndroidJniObject obj);
		// Constructors
		NfcV() = default;
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyte getDsfId();
		jint getMaxTransceiveLength();
		jbyte getResponseFlags();
		QAndroidJniObject getTag();
		jboolean isConnected();
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

