#include "../graphics/Rect.hpp"
#include "./SurfaceControl.hpp"
#include "./SurfaceControl_Transaction.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	SurfaceControl_Transaction::SurfaceControl_Transaction(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SurfaceControl_Transaction::SurfaceControl_Transaction()
		: JObject(
			"android.view.SurfaceControl$Transaction",
			"()V"
		) {}
	
	// Methods
	void SurfaceControl_Transaction::apply()
	{
		callMethod<void>(
			"apply",
			"()V"
		);
	}
	void SurfaceControl_Transaction::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::view::SurfaceControl_Transaction SurfaceControl_Transaction::merge(android::view::SurfaceControl_Transaction arg0)
	{
		return callObjectMethod(
			"merge",
			"(Landroid/view/SurfaceControl$Transaction;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object()
		);
	}
	android::view::SurfaceControl_Transaction SurfaceControl_Transaction::reparent(android::view::SurfaceControl arg0, android::view::SurfaceControl arg1)
	{
		return callObjectMethod(
			"reparent",
			"(Landroid/view/SurfaceControl;Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object()
		);
	}
	android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setAlpha(android::view::SurfaceControl arg0, jfloat arg1)
	{
		return callObjectMethod(
			"setAlpha",
			"(Landroid/view/SurfaceControl;F)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
	android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setBufferSize(android::view::SurfaceControl arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"setBufferSize",
			"(Landroid/view/SurfaceControl;II)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setGeometry(android::view::SurfaceControl arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3)
	{
		return callObjectMethod(
			"setGeometry",
			"(Landroid/view/SurfaceControl;Landroid/graphics/Rect;Landroid/graphics/Rect;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setLayer(android::view::SurfaceControl arg0, jint arg1)
	{
		return callObjectMethod(
			"setLayer",
			"(Landroid/view/SurfaceControl;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
	android::view::SurfaceControl_Transaction SurfaceControl_Transaction::setVisibility(android::view::SurfaceControl arg0, jboolean arg1)
	{
		return callObjectMethod(
			"setVisibility",
			"(Landroid/view/SurfaceControl;Z)Landroid/view/SurfaceControl$Transaction;",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

