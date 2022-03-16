#include "./SurfaceControl.hpp"
#include "../../JString.hpp"
#include "./SurfaceControl_Builder.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	SurfaceControl_Builder::SurfaceControl_Builder()
		: JObject(
			"android.view.SurfaceControl$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::SurfaceControl SurfaceControl_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/SurfaceControl;"
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setBufferSize(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setBufferSize",
			"(II)Landroid/view/SurfaceControl$Builder;",
			arg0,
			arg1
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setFormat(jint arg0) const
	{
		return callObjectMethod(
			"setFormat",
			"(I)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setName(JString arg0) const
	{
		return callObjectMethod(
			"setName",
			"(Ljava/lang/String;)Landroid/view/SurfaceControl$Builder;",
			arg0.object<jstring>()
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setOpaque(jboolean arg0) const
	{
		return callObjectMethod(
			"setOpaque",
			"(Z)Landroid/view/SurfaceControl$Builder;",
			arg0
		);
	}
	android::view::SurfaceControl_Builder SurfaceControl_Builder::setParent(android::view::SurfaceControl arg0) const
	{
		return callObjectMethod(
			"setParent",
			"(Landroid/view/SurfaceControl;)Landroid/view/SurfaceControl$Builder;",
			arg0.object()
		);
	}
} // namespace android::view

