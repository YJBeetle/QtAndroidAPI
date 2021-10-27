#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./Magnifier.hpp"
#include "./Magnifier_Builder.hpp"

namespace android::widget
{
	// Fields
	
	Magnifier_Builder::Magnifier_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Magnifier_Builder::Magnifier_Builder(android::view::View &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Magnifier$Builder",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Magnifier_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/widget/Magnifier;"
		);
	}
	QAndroidJniObject Magnifier_Builder::setClippingEnabled(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setClippingEnabled",
			"(Z)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject Magnifier_Builder::setCornerRadius(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setCornerRadius",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject Magnifier_Builder::setDefaultSourceToMagnifierOffset(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setDefaultSourceToMagnifierOffset",
			"(II)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Magnifier_Builder::setElevation(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setElevation",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject Magnifier_Builder::setInitialZoom(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"setInitialZoom",
			"(F)Landroid/widget/Magnifier$Builder;",
			arg0
		);
	}
	QAndroidJniObject Magnifier_Builder::setOverlay(android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callObjectMethod(
			"setOverlay",
			"(Landroid/graphics/drawable/Drawable;)Landroid/widget/Magnifier$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Magnifier_Builder::setSize(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"setSize",
			"(II)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Magnifier_Builder::setSourceBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"setSourceBounds",
			"(IIII)Landroid/widget/Magnifier$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::widget

