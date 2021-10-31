#include "../content/Context.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/RectF.hpp"
#include "../view/View.hpp"
#include "./SharedElementCallback.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	SharedElementCallback::SharedElementCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SharedElementCallback::SharedElementCallback()
		: __JniBaseClass(
			"android.app.SharedElementCallback",
			"()V"
		) {}
	
	// Methods
	__JniBaseClass SharedElementCallback::onCaptureSharedElementSnapshot(android::view::View arg0, android::graphics::Matrix arg1, android::graphics::RectF arg2)
	{
		return callObjectMethod(
			"onCaptureSharedElementSnapshot",
			"(Landroid/view/View;Landroid/graphics/Matrix;Landroid/graphics/RectF;)Landroid/os/Parcelable;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::view::View SharedElementCallback::onCreateSnapshotView(android::content::Context arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"onCreateSnapshotView",
			"(Landroid/content/Context;Landroid/os/Parcelable;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	void SharedElementCallback::onMapSharedElements(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"onMapSharedElements",
			"(Ljava/util/List;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SharedElementCallback::onRejectSharedElements(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRejectSharedElements",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void SharedElementCallback::onSharedElementEnd(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"onSharedElementEnd",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void SharedElementCallback::onSharedElementStart(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"onSharedElementStart",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void SharedElementCallback::onSharedElementsArrived(__JniBaseClass arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"onSharedElementsArrived",
			"(Ljava/util/List;Ljava/util/List;Landroid/app/SharedElementCallback$OnSharedElementsReadyListener;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::app

