#pragma once

#include "../../../JObject.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcB : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcB(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcB(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcB get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getApplicationData();
		jint getMaxTransceiveLength();
		jbyteArray getProtocolInfo();
		android::nfc::Tag getTag();
		jboolean isConnected();
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

