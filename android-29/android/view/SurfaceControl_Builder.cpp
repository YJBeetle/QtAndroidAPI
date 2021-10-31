#include "./SurfaceControl.hpp"
#include "./SurfaceControl_Builder.hpp"

namespace android::view
{
	// Fields
	
	SurfaceControl_Builder::SurfaceControl_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SurfaceControl_Builder::SurfaceControl_Builder()
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
	QAndroidJniObject SurfaceControl_Builder::setOpaque(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setOpaque",
			"(Z)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	QAndroidJniObject SurfaceControl_Builder::setParent(android::view::SurfaceControl arg0)
	{
		return __thiz.callObjectMethod(
			"setParent",
			"(Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view

