#pragma once

#ifndef ANDROID_MEDIA_SUBTITLEDATA
#define ANDROID_MEDIA_SUBTITLEDATA

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class SubtitleData : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3);
		
		// Methods
		jint getTrackIndex();
		jlong getStartTimeUs();
		jlong getDurationUs();
		jbyteArray getData();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void SubtitleData::__constructor(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3)
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
	jint SubtitleData::getTrackIndex()
	{
		return __thiz.callMethod<jint>(
			"getTrackIndex",
			"()I"
		);
	}
	jlong SubtitleData::getStartTimeUs()
	{
		return __thiz.callMethod<jlong>(
			"getStartTimeUs",
			"()J"
		);
	}
	jlong SubtitleData::getDurationUs()
	{
		return __thiz.callMethod<jlong>(
			"getDurationUs",
			"()J"
		);
	}
	jbyteArray SubtitleData::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class SubtitleData : public __jni_impl::android::media::SubtitleData
	{
	public:
		SubtitleData(QAndroidJniObject obj) { __thiz = obj; }
		SubtitleData(jint arg0, jlong arg1, jlong arg2, jbyteArray arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_SUBTITLEDATA

