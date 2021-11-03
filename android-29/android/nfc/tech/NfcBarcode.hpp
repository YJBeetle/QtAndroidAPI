#pragma once

#include "../../../JObject.hpp"

class JByteArray;
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
		void close() const;
		void connect() const;
		JByteArray getBarcode() const;
		android::nfc::Tag getTag() const;
		jint getType() const;
		jboolean isConnected() const;
	};
} // namespace android::nfc::tech

