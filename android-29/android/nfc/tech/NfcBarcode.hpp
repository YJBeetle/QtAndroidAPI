#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcBarcode : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_KOVIO();
		static jint TYPE_UNKNOWN();
		
		NfcBarcode(QAndroidJniObject obj);
		// Constructors
		NfcBarcode() = default;
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getBarcode();
		QAndroidJniObject getTag();
		jint getType();
		jboolean isConnected();
	};
} // namespace android::nfc::tech

