#pragma once

#ifndef ANDROID_VIEW_SURFACECONTROL_BUILDER
#define ANDROID_VIEW_SURFACECONTROL_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class SurfaceControl;
}

namespace __jni_impl::android::view
{
	class SurfaceControl_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setBufferSize(jint arg0, jint arg1);
		QAndroidJniObject setFormat(jint arg0);
		QAndroidJniObject setName(jstring arg0);
		QAndroidJniObject setName(const QString &arg0);
		QAndroidJniObject setOpaque(jboolean arg0);
		QAndroidJniObject setParent(__jni_impl::android::view::SurfaceControl arg0);
	};
} // namespace __jni_impl::android::view

#include "SurfaceControl.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void SurfaceControl_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.SurfaceControl$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SurfaceControl_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/SurfaceControl;"
		);
	}
	QAndroidJniObject SurfaceControl_Builder::setBufferSize(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setBufferSize",
			"(II)Landroid/view/SurfaceControl$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SurfaceControl_Builder::setFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFormat",
			"(I)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	QAndroidJniObject SurfaceControl_Builder::setName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	QAndroidJniObject SurfaceControl_Builder::setName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/view/SurfaceControl$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SurfaceControl_Builder::setOpaque(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setOpaque",
			"(Z)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	QAndroidJniObject SurfaceControl_Builder::setParent(__jni_impl::android::view::SurfaceControl arg0)
	{
		return __thiz.callObjectMethod(
			"setParent",
			"(Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class SurfaceControl_Builder : public __jni_impl::android::view::SurfaceControl_Builder
	{
	public:
		SurfaceControl_Builder(QAndroidJniObject obj) { __thiz = obj; }
		SurfaceControl_Builder()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_SURFACECONTROL_BUILDER

