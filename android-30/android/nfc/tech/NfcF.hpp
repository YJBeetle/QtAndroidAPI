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
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcF(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NfcF(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcF get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getManufacturer();
		jint getMaxTransceiveLength();
		jbyteArray getSystemCode();
		android::nfc::Tag getTag();
		jint getTimeout();
		jboolean isConnected();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

