#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCodec_CryptoInfo_Pattern : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCodec_CryptoInfo_Pattern(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaCodec_CryptoInfo_Pattern(QAndroidJniObject obj);
		
		// Constructors
		MediaCodec_CryptoInfo_Pattern(jint arg0, jint arg1);
		
		// Methods
		jint getEncryptBlocks();
		jint getSkipBlocks();
		void set(jint arg0, jint arg1);
	};
} // namespace android::media

