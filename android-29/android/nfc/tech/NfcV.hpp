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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcV(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcV(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcV get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyte getDsfId();
		jint getMaxTransceiveLength();
		jbyte getResponseFlags();
		android::nfc::Tag getTag();
		jboolean isConnected();
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

