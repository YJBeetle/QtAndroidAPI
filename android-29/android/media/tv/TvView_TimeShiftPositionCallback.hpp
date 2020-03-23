#pragma once

#ifndef ANDROID_MEDIA_TV_TVVIEW_TIMESHIFTPOSITIONCALLBACK
#define ANDROID_MEDIA_TV_TVVIEW_TIMESHIFTPOSITIONCALLBACK

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::tv
{
	class TvView_TimeShiftPositionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onTimeShiftStartPositionChanged(jstring arg0, jlong arg1);
		void onTimeShiftCurrentPositionChanged(jstring arg0, jlong arg1);
	};
} // namespace __jni_impl::android::media::tv


namespace __jni_impl::android::media::tv
{
	// Fields
	
	// Constructors
	void TvView_TimeShiftPositionCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView$TimeShiftPositionCallback",
			"()V");
	}
	
	// Methods
	void TvView_TimeShiftPositionCallback::onTimeShiftStartPositionChanged(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"onTimeShiftStartPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1);
	}
	void TvView_TimeShiftPositionCallback::onTimeShiftCurrentPositionChanged(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"onTimeShiftCurrentPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::media::tv

namespace android::media::tv
{
	class TvView_TimeShiftPositionCallback : public __jni_impl::android::media::tv::TvView_TimeShiftPositionCallback
	{
	public:
		TvView_TimeShiftPositionCallback(QAndroidJniObject obj) { __thiz = obj; }
		TvView_TimeShiftPositionCallback()
		{
			__constructor();
		}
	};
} // namespace android::media::tv

#endif // ANDROID_MEDIA_TV_TVVIEW_TIMESHIFTPOSITIONCALLBACK

