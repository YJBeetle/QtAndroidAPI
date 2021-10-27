#include "./SubtitleData.hpp"

namespace android::media
{
	// Fields
	
	SubtitleData::SubtitleData(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SubtitleData::SubtitleData(jint &arg0, jlong &arg1, jlong &arg2, jbyteArray &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.media.SubtitleData",
			"(IJJ[B)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jbyteArray SubtitleData::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jlong SubtitleData::getDurationUs()
	{
		return __thiz.callMethod<jlong>(
			"getDurationUs",
			"()J"
		);
	}
	jlong SubtitleData::getStartTimeUs()
	{
		return __thiz.callMethod<jlong>(
			"getStartTimeUs",
			"()J"
		);
	}
	jint SubtitleData::getTrackIndex()
	{
		return __thiz.callMethod<jint>(
			"getTrackIndex",
			"()I"
		);
	}
} // namespace android::media

