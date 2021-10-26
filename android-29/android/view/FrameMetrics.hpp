#pragma once

#ifndef ANDROID_VIEW_FRAMEMETRICS
#define ANDROID_VIEW_FRAMEMETRICS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class FrameMetrics : public __JniBaseClass
	{
	public:
		// Fields
		static jint ANIMATION_DURATION();
		static jint COMMAND_ISSUE_DURATION();
		static jint DRAW_DURATION();
		static jint FIRST_DRAW_FRAME();
		static jint INPUT_HANDLING_DURATION();
		static jint INTENDED_VSYNC_TIMESTAMP();
		static jint LAYOUT_MEASURE_DURATION();
		static jint SWAP_BUFFERS_DURATION();
		static jint SYNC_DURATION();
		static jint TOTAL_DURATION();
		static jint UNKNOWN_DELAY_DURATION();
		static jint VSYNC_TIMESTAMP();
		
		// Constructors
		void __constructor(__jni_impl::android::view::FrameMetrics arg0);
		
		// Methods
		jlong getMetric(jint arg0);
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	jint FrameMetrics::ANIMATION_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"ANIMATION_DURATION"
		);
	}
	jint FrameMetrics::COMMAND_ISSUE_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"COMMAND_ISSUE_DURATION"
		);
	}
	jint FrameMetrics::DRAW_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"DRAW_DURATION"
		);
	}
	jint FrameMetrics::FIRST_DRAW_FRAME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"FIRST_DRAW_FRAME"
		);
	}
	jint FrameMetrics::INPUT_HANDLING_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"INPUT_HANDLING_DURATION"
		);
	}
	jint FrameMetrics::INTENDED_VSYNC_TIMESTAMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"INTENDED_VSYNC_TIMESTAMP"
		);
	}
	jint FrameMetrics::LAYOUT_MEASURE_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"LAYOUT_MEASURE_DURATION"
		);
	}
	jint FrameMetrics::SWAP_BUFFERS_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"SWAP_BUFFERS_DURATION"
		);
	}
	jint FrameMetrics::SYNC_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"SYNC_DURATION"
		);
	}
	jint FrameMetrics::TOTAL_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"TOTAL_DURATION"
		);
	}
	jint FrameMetrics::UNKNOWN_DELAY_DURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"UNKNOWN_DELAY_DURATION"
		);
	}
	jint FrameMetrics::VSYNC_TIMESTAMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.FrameMetrics",
			"VSYNC_TIMESTAMP"
		);
	}
	
	// Constructors
	void FrameMetrics::__constructor(__jni_impl::android::view::FrameMetrics arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.FrameMetrics",
			"(Landroid/view/FrameMetrics;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jlong FrameMetrics::getMetric(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getMetric",
			"(I)J",
			arg0
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class FrameMetrics : public __jni_impl::android::view::FrameMetrics
	{
	public:
		FrameMetrics(QAndroidJniObject obj) { __thiz = obj; }
		FrameMetrics(__jni_impl::android::view::FrameMetrics arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_FRAMEMETRICS

