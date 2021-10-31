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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaRecorder_AudioEncoder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_AudioEncoder(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media
