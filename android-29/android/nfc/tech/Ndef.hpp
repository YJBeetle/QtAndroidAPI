#pragma once

#include "../../../JObject.hpp"

namespace android::nfc
{
	class NdefMessage;
}
namespace android::nfc
{
	class Tag;
}
class JString;

namespace android::nfc::tech
{
	class Ndef : public JObject
	{
	public:
		// Fields
		static JString MIFARE_CLASSIC();
		static JString NFC_FORUM_TYPE_1();
		static JString NFC_FORUM_TYPE_2();
		static JString NFC_FORUM_TYPE_3();
		static JString NFC_FORUM_TYPE_4();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Ndef(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Ndef(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::Ndef get(android::nfc::Tag arg0);
		jboolean canMakeReadOnly();
		void close();
		void connect();
		android::nfc::NdefMessage getCachedNdefMessage();
		jint getMaxSize();
		android::nfc::NdefMessage getNdefMessage();
		android::nfc::Tag getTag();
		JString getType();
		jboolean isConnected();
		jboolean isWritable();
		jboolean makeReadOnly();
		void writeNdefMessage(android::nfc::NdefMessage arg0);
	};
} // namespace android::nfc::tech

