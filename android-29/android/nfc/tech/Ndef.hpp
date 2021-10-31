#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class NdefMessage;
}
namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class Ndef : public __JniBaseClass
	{
	public:
		// Fields
		static jstring MIFARE_CLASSIC();
		static jstring NFC_FORUM_TYPE_1();
		static jstring NFC_FORUM_TYPE_2();
		static jstring NFC_FORUM_TYPE_3();
		static jstring NFC_FORUM_TYPE_4();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Ndef(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Ndef(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		jboolean canMakeReadOnly();
		void close();
		void connect();
		QAndroidJniObject getCachedNdefMessage();
		jint getMaxSize();
		QAndroidJniObject getNdefMessage();
		QAndroidJniObject getTag();
		jstring getType();
		jboolean isConnected();
		jboolean isWritable();
		jboolean makeReadOnly();
		void writeNdefMessage(android::nfc::NdefMessage arg0);
	};
} // namespace android::nfc::tech

