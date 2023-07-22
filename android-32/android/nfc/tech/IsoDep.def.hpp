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
		
		// QJniObject forward
		template<typename ...Ts> explicit IsoDep(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IsoDep(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::nfc::tech::IsoDep get(android::nfc::Tag arg0);
		void close() const;
		void connect() const;
		JByteArray getHiLayerResponse() const;
		JByteArray getHistoricalBytes() const;
		jint getMaxTransceiveLength() const;
		android::nfc::Tag getTag() const;
		jint getTimeout() const;
		jboolean isConnected() const;
		jboolean isExtendedLengthApduSupported() const;
		void setTimeout(jint arg0) const;
		JByteArray transceive(JByteArray arg0) const;
	};
} // namespace android::nfc::tech

