#include "../graphics/Rect.hpp"
#include "./SurfaceControl.hpp"
#include "./SurfaceControl_Transaction.hpp"

namespace android::view
{
	// Fields
	
	SurfaceControl_Transaction::SurfaceControl_Transaction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SurfaceControl_Transaction::SurfaceControl_Transaction()
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceControl$Transaction",
			"()V"
		);
	}
	
	// Methods
	void SurfaceControl_Transaction::apply()
	{
		__thiz.callMethod<void>(
			"apply",
			"()V"
		);
	}
	void SurfaceControl_Transaction::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject SurfaceControl_Transaction::merge(android::view::SurfaceControl_Transaction arg0)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Landroid/view/SurfaceControl$Transaction;)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SurfaceControl_Transaction::reparent(android::view::SurfaceControl arg0, android::view::SurfaceControl arg1)
	{
		return __thiz.callObjectMethod(
			"reparent",
			"(Landroid/view/SurfaceControl;Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SurfaceControl_Transaction::setAlpha(android::view::SurfaceControl arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setAlpha",
			"(Landroid/view/SurfaceControl;F)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SurfaceControl_Transaction::setBufferSize(android::view::SurfaceControl arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"setBufferSize",
			"(Landroid/view/SurfaceControl;II)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject SurfaceControl_Transaction::setGeometry(android::view::SurfaceControl arg0, android::graphics::Rect arg1, android::graphics::Rect arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setGeometry",
			"(Landroid/view/SurfaceControl;Landroid/graphics/Rect;Landroid/graphics/Rect;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject SurfaceControl_Transaction::setLayer(android::view::SurfaceControl arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setLayer",
			"(Landroid/view/SurfaceControl;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SurfaceControl_Transaction::setVisibility(android::view::SurfaceControl arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"setVisibility",
			"(Landroid/view/SurfaceControl;Z)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

