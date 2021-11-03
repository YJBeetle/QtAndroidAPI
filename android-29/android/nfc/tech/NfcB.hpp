#pragma once

#include "../../../JObject.hpp"

class JByteArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcB(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcB(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcB get(android::nfc::Tag arg0);
		void close();
		void connect();
		JByteArray getApplicationData();
		jint getMaxTransceiveLength();
		JByteArray getProtocolInfo();
		android::nfc::Tag getTag();
		jboolean isConnected();
		JByteArray transceive(JByteArray arg0);
	};
} // namespace android::nfc::tech

