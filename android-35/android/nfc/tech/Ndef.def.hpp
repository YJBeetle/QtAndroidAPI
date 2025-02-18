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
		
		// QJniObject forward
		template<typename ...Ts> explicit Ndef(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Ndef(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::nfc::tech::Ndef get(android::nfc::Tag arg0);
		jboolean canMakeReadOnly() const;
		void close() const;
		void connect() const;
		android::nfc::NdefMessage getCachedNdefMessage() const;
		jint getMaxSize() const;
		android::nfc::NdefMessage getNdefMessage() const;
		android::nfc::Tag getTag() const;
		JString getType() const;
		jboolean isConnected() const;
		jboolean isWritable() const;
		jboolean makeReadOnly() const;
		void writeNdefMessage(android::nfc::NdefMessage arg0) const;
	};
} // namespace android::nfc::tech

