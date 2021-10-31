#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCodec_CryptoInfo_Pattern : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaCodec_CryptoInfo_Pattern(QAndroidJniObject obj);
		// Constructors
		MediaCodec_CryptoInfo_Pattern(jint arg0, jint arg1);
		MediaCodec_CryptoInfo_Pattern() = default;
		
		// Methods
		jint getEncryptBlocks();
		jint getSkipBlocks();
		void set(jint arg0, jint arg1);
	};
} // namespace android::media

