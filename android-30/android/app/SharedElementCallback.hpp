#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Matrix.def.hpp"
#include "../graphics/RectF.def.hpp"
#include "../view/View.def.hpp"
#include "./SharedElementCallback.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline SharedElementCallback::SharedElementCallback()
		: JObject(
			"android.app.SharedElementCallback",
			"()V"
		) {}
	
	// Methods
	inline JObject SharedElementCallback::onCaptureSharedElementSnapshot(android::view::View arg0, android::graphics::Matrix arg1, android::graphics::RectF arg2) const
	{
		return callObjectMethod(
			"onCaptureSharedElementSnapshot",
			"(Landroid/view/View;Landroid/graphics/Matrix;Landroid/graphics/RectF;)Landroid/os/Parcelable;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::view::View SharedElementCallback::onCreateSnapshotView(android::content::Context arg0, JObject arg1) const
	{
		return callObjectMethod(
			"onCreateSnapshotView",
			"(Landroid/content/Context;Landroid/os/Parcelable;)Landroid/view/View;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SharedElementCallback::onMapSharedElements(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"onMapSharedElements",
			"(Ljava/util/List;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void SharedElementCallback::onRejectSharedElements(JObject arg0) const
	{
		callMethod<void>(
			"onRejectSharedElements",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void SharedElementCallback::onSharedElementEnd(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"onSharedElementEnd",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void SharedElementCallback::onSharedElementStart(JObject arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"onSharedElementStart",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void SharedElementCallback::onSharedElementsArrived(JObject arg0, JObject arg1, JObject arg2) const
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

// Base class headers

