#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class SubtitleData : public __JniBaseClass
	{
	public:
		// Fields
		
		SubtitleData(QAndroidJniObject obj);
		// Constructors
		SubtitleData(jint &arg0, jlong &arg1, jlong &arg2, jbyteArray &arg3);
		SubtitleData() = default;
		
		// Methods
		jbyteArray getData();
		jlong getDurationUs();
		jlong getStartTimeUs();
		jint getTrackIndex();
	};
} // namespace android::media

