#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCodec_CryptoInfo_Pattern;
}

namespace android::media
{
	class MediaCodec_CryptoInfo : public JObject
	{
	public:
		// Fields
		jbyteArray iv();
		jbyteArray key();
		jint mode();
		jintArray numBytesOfClearData();
		jintArray numBytesOfEncryptedData();
		jint numSubSamples();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_CryptoInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_CryptoInfo(QAndroidJniObject obj);
		
		// Constructors
		MediaCodec_CryptoInfo();
		
		// Methods
		android::media::MediaCodec_CryptoInfo_Pattern getPattern();
		void set(jint arg0, jintArray arg1, jintArray arg2, jbyteArray arg3, jbyteArray arg4, jint arg5);
		void setPattern(android::media::MediaCodec_CryptoInfo_Pattern arg0);
		jstring toString();
	};
} // namespace android::media

