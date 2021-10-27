#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class MediaCodec_BufferInfo : public __JniBaseClass
	{
	public:
		// Fields
		jint flags();
		jint offset();
		jlong presentationTimeUs();
		jint size();
		
		MediaCodec_BufferInfo(QAndroidJniObject obj);
		// Constructors
		MediaCodec_BufferInfo();
		
		// Methods
		void set(jint arg0, jint arg1, jlong arg2, jint arg3);
	};
} // namespace android::media

