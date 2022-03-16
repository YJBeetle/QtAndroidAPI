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
		NfcB(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcB get(android::nfc::Tag arg0);
		void close() const;
		void connect() const;
		JByteArray getApplicationData() const;
		jint getMaxTransceiveLength() const;
		JByteArray getProtocolInfo() const;
		android::nfc::Tag getTag() const;
		jboolean isConnected() const;
		JByteArray transceive(JByteArray arg0) const;
	};
} // namespace android::nfc::tech

