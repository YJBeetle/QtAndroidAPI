#pragma once

#include "../../../JObject.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcA : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcA(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcA(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcA get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getAtqa();
		jint getMaxTransceiveLength();
		jshort getSak();
		android::nfc::Tag getTag();
		jint getTimeout();
		jboolean isConnected();
		void setTimeout(jint arg0);
		jbyteArray transceive(jbyteArray arg0);
	};
} // namespace android::nfc::tech

