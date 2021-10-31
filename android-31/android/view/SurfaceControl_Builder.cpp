#include "./SurfaceControl.hpp"
#include "./SurfaceControl_Builder.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	SurfaceControl_Builder::SurfaceControl_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	SurfaceControl_Builder::SurfaceControl_Builder()
		: __JniBaseClass(
			"android.view.SurfaceControl$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::SurfaceControl SurfaceControl_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/SurfaceControl;"
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setBufferSize(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setBufferSize",
			"(II)Landroid/view/SurfaceControl$Builder;",
			arg0,
			arg1
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setFormat(jint arg0)
	{
		return callObjectMethod(
			"setFormat",
			"(I)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setName(jstring arg0)
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setOpaque(jboolean arg0)
	{
		return callObjectMethod(
			"setOpaque",
			"(Z)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setParent(android::view::SurfaceControl arg0)
	{
		return callObjectMethod(
			"setParent",
			"(Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Builder;",
			arg0.object()
		);
	}
} // namespace android::view

