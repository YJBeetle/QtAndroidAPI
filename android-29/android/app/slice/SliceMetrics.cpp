#include "../../content/Context.hpp"
#include "../../net/Uri.hpp"
#include "./SliceMetrics.hpp"

namespace android::app::slice
{
	// Fields
	
	SliceMetrics::SliceMetrics(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SliceMetrics::SliceMetrics(android::content::Context arg0, android::net::Uri arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.slice.SliceMetrics",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void SliceMetrics::logHidden()
	{
		__thiz.callMethod<void>(
			"logHidden",
			"()V"
		);
	}
	void SliceMetrics::logTouch(jint arg0, android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"logTouch",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void SliceMetrics::logVisible()
	{
		__thiz.callMethod<void>(
			"logVisible",
			"()V"
		);
	}
} // namespace android::app::slice

