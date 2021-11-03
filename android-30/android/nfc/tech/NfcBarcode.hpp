#pragma once

#include "../../../JObject.hpp"

namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class NfcBarcode : public JObject
	{
	public:
		// Fields
		static jint TYPE_KOVIO();
		static jint TYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit NfcBarcode(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcBarcode(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcBarcode get(android::nfc::Tag arg0);
		void close();
		void connect();
		jbyteArray getBarcode();
		android::nfc::Tag getTag();
		jint getType();
		jboolean isConnected();
	};
} // namespace android::nfc::tech

