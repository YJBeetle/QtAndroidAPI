#pragma once

#include "../../../JObject.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class MifareUltralight : public JObject
	{
	public:
		// Fields
		static jint _PAGE_SIZE();
		static jint TYPE_ULTRALIGHT();
		static jint TYPE_ULTRALIGHT_C();
		static jint TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit MifareUltralight(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MifareUltralight(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::MifareUltralight get(android::nfc::Tag arg0);
		void close();
		void connect();
		jint getMaxTransceiveLength();
		android::nfc::Tag getTag();
		jint getTimeout();
		jint getType();
		jboolean isConnected();
		jbyteArray readPages(jint arg0);
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
		void writePage(jint arg0, jbyteArray arg1);
	};
} // namespace android::nfc::tech

