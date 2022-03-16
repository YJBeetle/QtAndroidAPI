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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NfcV(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NfcV(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::nfc::tech::NfcV get(android::nfc::Tag arg0);
		void close() const;
		void connect() const;
		jbyte getDsfId() const;
		jint getMaxTransceiveLength() const;
		jbyte getResponseFlags() const;
		android::nfc::Tag getTag() const;
		jboolean isConnected() const;
		JByteArray transceive(JByteArray arg0) const;
	};
} // namespace android::nfc::tech

