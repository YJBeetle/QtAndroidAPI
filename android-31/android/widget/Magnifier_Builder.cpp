#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./Magnifier.hpp"
#include "./Magnifier_Builder.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Magnifier_Builder::Magnifier_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Magnifier_Builder::Magnifier_Builder(android::view::View arg0)
		: JObject(
			"android.widget.Magnifier$Builder",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	android::widget::Magnifier Magnifier_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/widget/Magnifier;"
		);
	}
	android::widget::Magnifier_Builder Magnifier_Builder::setClippingEnabled(jboolean arg0)
	{
		return callObjectMethod(
			"setClippingEnabled",
			"(Z)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	android::widget::Magnifier_Builder Magnifier_Builder::setCornerRadius(jfloat arg0)
	{
		return callObjectMethod(
			"setCornerRadius",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	android::widget::Magnifier_Builder Magnifier_Builder::setDefaultSourceToMagnifierOffset(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setDefaultSourceToMagnifierOffset",
			"(II)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1
		);
	}
	android::widget::Magnifier_Builder Magnifier_Builder::setElevation(jfloat arg0)
	{
		return callObjectMethod(
			"setElevation",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	android::widget::Magnifier_Builder Magnifier_Builder::setInitialZoom(jfloat arg0)
	{
		return callObjectMethod(
			"setInitialZoom",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	android::widget::Magnifier_Builder Magnifier_Builder::setOverlay(android::graphics::drawable::Drawable arg0)
	{
		return callObjectMethod(
			"setOverlay",
			"(Landroid/graphics/drawable/Drawable;)Landroid/widget/Magnifier$Builder;",
			arg0.object()
		);
	}
	android::widget::Magnifier_Builder Magnifier_Builder::setSize(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setSize",
			"(II)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1
		);
	}
	android::widget::Magnifier_Builder Magnifier_Builder::setSourceBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callObjectMethod(
			"setSourceBounds",
			"(IIII)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::widget

