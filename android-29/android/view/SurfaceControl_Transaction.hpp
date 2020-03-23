#pragma once

#ifndef ANDROID_VIEW_SURFACECONTROL_TRANSACTION
#define ANDROID_VIEW_SURFACECONTROL_TRANSACTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class SurfaceControl;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::view
{
	class SurfaceControl_Transaction : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void apply();
		QAndroidJniObject merge(__jni_impl::android::view::SurfaceControl_Transaction arg0);
		void close();
		QAndroidJniObject setAlpha(__jni_impl::android::view::SurfaceControl arg0, jfloat arg1);
		QAndroidJniObject reparent(__jni_impl::android::view::SurfaceControl arg0, __jni_impl::android::view::SurfaceControl arg1);
		QAndroidJniObject setLayer(__jni_impl::android::view::SurfaceControl arg0, jint arg1);
		QAndroidJniObject setGeometry(__jni_impl::android::view::SurfaceControl arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, jint arg3);
		QAndroidJniObject setVisibility(__jni_impl::android::view::SurfaceControl arg0, jboolean arg1);
		QAndroidJniObject setBufferSize(__jni_impl::android::view::SurfaceControl arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::android::view

#include "SurfaceControl.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void SurfaceControl_Transaction::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceControl$Transaction",
			"()V");
	}
	
	// Methods
	void SurfaceControl_Transaction::apply()
	{
		__thiz.callMethod<void>(
			"apply",
			"()V");
	}
	QAndroidJniObject SurfaceControl_Transaction::merge(__jni_impl::android::view::SurfaceControl_Transaction arg0)
	{
		return __thiz.callObjectMethod(
			"merge",
			"(Landroid/view/SurfaceControl$Transaction;)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object());
	}
	void SurfaceControl_Transaction::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	QAndroidJniObject SurfaceControl_Transaction::setAlpha(__jni_impl::android::view::SurfaceControl arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setAlpha",
			"(Landroid/view/SurfaceControl;F)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SurfaceControl_Transaction::reparent(__jni_impl::android::view::SurfaceControl arg0, __jni_impl::android::view::SurfaceControl arg1)
	{
		return __thiz.callObjectMethod(
			"reparent",
			"(Landroid/view/SurfaceControl;Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject SurfaceControl_Transaction::setLayer(__jni_impl::android::view::SurfaceControl arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setLayer",
			"(Landroid/view/SurfaceControl;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SurfaceControl_Transaction::setGeometry(__jni_impl::android::view::SurfaceControl arg0, __jni_impl::android::graphics::Rect arg1, __jni_impl::android::graphics::Rect arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setGeometry",
			"(Landroid/view/SurfaceControl;Landroid/graphics/Rect;Landroid/graphics/Rect;I)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject SurfaceControl_Transaction::setVisibility(__jni_impl::android::view::SurfaceControl arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"setVisibility",
			"(Landroid/view/SurfaceControl;Z)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SurfaceControl_Transaction::setBufferSize(__jni_impl::android::view::SurfaceControl arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"setBufferSize",
			"(Landroid/view/SurfaceControl;II)Landroid/view/SurfaceControl$Transaction;",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class SurfaceControl_Transaction : public __jni_impl::android::view::SurfaceControl_Transaction
	{
	public:
		SurfaceControl_Transaction(QAndroidJniObject obj) { __thiz = obj; }
		SurfaceControl_Transaction()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SURFACECONTROL_TRANSACTION

