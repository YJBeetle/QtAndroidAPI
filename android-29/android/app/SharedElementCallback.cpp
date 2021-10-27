#include "../content/Context.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/RectF.hpp"
#include "../view/View.hpp"
#include "./SharedElementCallback.hpp"

namespace android::app
{
	// Fields
	
	SharedElementCallback::SharedElementCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SharedElementCallback::SharedElementCallback()
	{
		__thiz = QAndroidJniObject(
			"android.app.SharedElementCallback",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SharedElementCallback::onCaptureSharedElementSnapshot(android::view::View arg0, android::graphics::Matrix arg1, android::graphics::RectF arg2)
	{
		return __thiz.callObjectMethod(
			"onCaptureSharedElementSnapshot",
			"(Landroid/view/View;Landroid/graphics/Matrix;Landroid/graphics/RectF;)Landroid/os/Parcelable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SharedElementCallback::onCreateSnapshotView(android::content::Context arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateSnapshotView",
			"(Landroid/content/Context;Landroid/os/Parcelable;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SharedElementCallback::onMapSharedElements(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onMapSharedElements",
			"(Ljava/util/List;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SharedElementCallback::onRejectSharedElements(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRejectSharedElements",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void SharedElementCallback::onSharedElementEnd(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onSharedElementEnd",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SharedElementCallback::onSharedElementStart(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onSharedElementStart",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SharedElementCallback::onSharedElementsArrived(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onSharedElementsArrived",
			"(Ljava/util/List;Ljava/util/List;Landroid/app/SharedElementCallback$OnSharedElementsReadyListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace android::app

