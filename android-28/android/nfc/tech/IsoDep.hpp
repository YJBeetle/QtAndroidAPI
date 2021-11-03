#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::nfc
{
	class Tag;
}

namespace android::nfc::tech
{
	class IsoDep : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IsoDep(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IsoDep(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::nfc::tech::IsoDep get(android::nfc::Tag arg0);
		void close();
		void connect();
		JByteArray getHiLayerResponse();
		JByteArray getHistoricalBytes();
		jint getMaxTransceiveLength();
		android::nfc::Tag getTag();
		jint getTimeout();
		jboolean isConnected();
		jboolean isExtendedLengthApduSupported();
		void setTimeout(jint arg0);
		JByteArray transceive(JByteArray arg0);
	};
} // namespace android::nfc::tech

