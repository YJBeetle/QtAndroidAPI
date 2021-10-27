#pragma once

#ifndef ANDROID_VIEW_FRAMESTATS
#define ANDROID_VIEW_FRAMESTATS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class FrameStats : public __JniBaseClass
	{
	public:
		// Fields
		static jlong UNDEFINED_TIME_NANO();
		
		// Constructors
		void __constructor();
		
		// Methods
		jlong getEndTimeNano();
		jint getFrameCount();
		jlong getFramePresentedTimeNano(jint arg0);
		jlong getRefreshPeriodNano();
		jlong getStartTimeNano();
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	jlong FrameStats::UNDEFINED_TIME_NANO()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.view.FrameStats",
			"UNDEFINED_TIME_NANO"
		);
	}
	
	// Constructors
	void FrameStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.FrameStats",
			"()V"
		);
	}
	
	// Methods
	jlong FrameStats::getEndTimeNano()
	{
		return __thiz.callMethod<jlong>(
			"getEndTimeNano",
			"()J"
		);
	}
	jint FrameStats::getFrameCount()
	{
		return __thiz.callMethod<jint>(
			"getFrameCount",
			"()I"
		);
	}
	jlong FrameStats::getFramePresentedTimeNano(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getFramePresentedTimeNano",
			"(I)J",
			arg0
		);
	}
	jlong FrameStats::getRefreshPeriodNano()
	{
		return __thiz.callMethod<jlong>(
			"getRefreshPeriodNano",
			"()J"
		);
	}
	jlong FrameStats::getStartTimeNano()
	{
		return __thiz.callMethod<jlong>(
			"getStartTimeNano",
			"()J"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class FrameStats : public __jni_impl::android::view::FrameStats
	{
	public:
		FrameStats(QAndroidJniObject obj) { __thiz = obj; }
		FrameStats()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_FRAMESTATS

