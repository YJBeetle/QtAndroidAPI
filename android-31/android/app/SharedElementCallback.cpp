#include "../content/Context.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/RectF.hpp"
#include "../view/View.hpp"
#include "./SharedElementCallback.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	SharedElementCallback::SharedElementCallback()
		: JObject(
			"android.app.SharedElementCallback",
			"()V"
		) {}
	
	// Methods
	JObject SharedElementCallback::onCaptureSharedElementSnapshot(android::view::View arg0, android::graphics::Matrix arg1, android::graphics::RectF arg2) const
	{
		return callObjectMethod(
			"onCaptureSharedElementSnapshot",
			"(Landroid/view/View;Landroid/graphics/Matrix;Landroid/graphics/RectF;)Landroid/os/Parcelable;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::view::View SharedElementCallback::onCreateSnapshotView(android::content::Context arg0, JObject arg1) const
	{
		return callObjectMethod(
			"onCreateSnapshotView",
			"(Landroid/content/Context;Landroid/os/Parcelable;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	void SharedElementCallback::onMapSharedElements(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"onMapSharedElements",
			"(Ljava/util/List;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void SharedElementCallback::onRejectSharedElements(JObject arg0) const
	{
		callMethod<void>(
			"onRejectSharedElements",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	void SharedElementCallback::onSharedElementEnd(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"onSharedElementEnd",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void SharedElementCallback::onSharedElementStart(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"onSharedElementStart",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void SharedElementCallback::onSharedElementsArrived(JObject arg0, JObject arg1, JObject arg2) const
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

