#pragma once

#ifndef ANDROID_APP_SLICE_SLICEMETRICS
#define ANDROID_APP_SLICE_SLICEMETRICS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::app::slice
{
	class SliceMetrics : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1);
		
		// Methods
		void logVisible();
		void logHidden();
		void logTouch(jint arg0, __jni_impl::android::net::Uri arg1);
	};
} // namespace __jni_impl::android::app::slice

#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"

namespace __jni_impl::android::app::slice
{
	// Fields
	
	// Constructors
	void SliceMetrics::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceMetrics",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void SliceMetrics::logVisible()
	{
		__thiz.callMethod<void>(
			"logVisible",
			"()V"
		);
	}
	void SliceMetrics::logHidden()
	{
		__thiz.callMethod<void>(
			"logHidden",
			"()V"
		);
	}
	void SliceMetrics::logTouch(jint arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"logTouch",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app::slice

namespace android::app::slice
{
	class SliceMetrics : public __jni_impl::android::app::slice::SliceMetrics
	{
	public:
		SliceMetrics(QAndroidJniObject obj) { __thiz = obj; }
		SliceMetrics(__jni_impl::android::content::Context arg0, __jni_impl::android::net::Uri arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::app::slice

#endif // ANDROID_APP_SLICE_SLICEMETRICS

