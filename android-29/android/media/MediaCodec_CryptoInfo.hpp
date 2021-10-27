#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaCodec_CryptoInfo_Pattern;
}

namespace android::media
{
	class MediaCodec_CryptoInfo : public __JniBaseClass
	{
	public:
		// Fields
		jbyteArray iv();
		jbyteArray key();
		jint mode();
		jintArray numBytesOfClearData();
		jintArray numBytesOfEncryptedData();
		jint numSubSamples();
		
		MediaCodec_CryptoInfo(QAndroidJniObject obj);
		// Constructors
		MediaCodec_CryptoInfo();
		
		// Methods
		void set(jint arg0, jintArray arg1, jintArray arg2, jbyteArray arg3, jbyteArray arg4, jint arg5);
		void setPattern(android::media::MediaCodec_CryptoInfo_Pattern arg0);
		jstring toString();
	};
} // namespace android::media

