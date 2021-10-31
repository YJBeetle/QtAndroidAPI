#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class MifareUltralight : public __JniBaseClass
	{
	public:
		// Fields
		static jint _PAGE_SIZE();
		static jint TYPE_ULTRALIGHT();
		static jint TYPE_ULTRALIGHT_C();
		static jint TYPE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MifareUltralight(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MifareUltralight(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject get(android::nfc::Tag arg0);
		void close();
		void connect();
		jint getMaxTransceiveLength();
		QAndroidJniObject getTag();
		jint getTimeout();
		jint getType();
		jboolean isConnected();
		jbyteArray readPages(jint arg0);
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
		void writePage(jint arg0, jbyteArray arg1);
	};
} // namespace android::nfc::tech

