#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcV : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcV(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcV(QJniObject obj);
		
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
		JByteArray transceive(JByteArray arg0);
	};
} // namespace android::nfc::tech

