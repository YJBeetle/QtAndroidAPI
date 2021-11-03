#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcF : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcF(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcF(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcF get(android::nfc::Tag arg0);
		void close();
		void connect();
		JByteArray getManufacturer();
		jint getMaxTransceiveLength();
		JByteArray getSystemCode();
		android::nfc::Tag getTag();
		jint getTimeout();
		jboolean isConnected();
		void setTimeout(jint arg0);
		JByteArray transceive(JByteArray arg0);
	};
} // namespace android::nfc::tech

