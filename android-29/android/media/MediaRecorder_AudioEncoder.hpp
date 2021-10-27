#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRecorder;
}

namespace android::media
{
	class MediaRecorder_AudioEncoder : public __JniBaseClass
	{
	public:
		// Fields
		static jint AAC();
		static jint AAC_ELD();
		static jint AMR_NB();
		static jint AMR_WB();
		static jint DEFAULT();
		static jint HE_AAC();
		static jint OPUS();
		static jint VORBIS();
		
		MediaRecorder_AudioEncoder(QAndroidJniObject obj);
		// Constructors
		MediaRecorder_AudioEncoder() = default;
		
		// Methods
	};
} // namespace android::media

