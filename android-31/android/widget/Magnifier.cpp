#include "../graphics/Point.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./Magnifier.hpp"

namespace android::widget
{
	// Fields
	jint Magnifier::SOURCE_BOUND_MAX_IN_SURFACE()
	{
		return getStaticField<jint>(
			"android.widget.Magnifier",
			"SOURCE_BOUND_MAX_IN_SURFACE"
		);
	}
	jint Magnifier::SOURCE_BOUND_MAX_VISIBLE()
	{
		return getStaticField<jint>(
			"android.widget.Magnifier",
			"SOURCE_BOUND_MAX_VISIBLE"
		);
	}
	
	// QAndroidJniObject forward
	Magnifier::Magnifier(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Magnifier::Magnifier(android::view::View arg0)
		: __JniBaseClass(
			"android.widget.Magnifier",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	void Magnifier::dismiss()
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jfloat Magnifier::getCornerRadius()
	{
		return callMethod<jfloat>(
			"getCornerRadius",
			"()F"
		);
	}
	jint Magnifier::getDefaultHorizontalSourceToMagnifierOffset()
	{
		return callMethod<jint>(
			"getDefaultHorizontalSourceToMagnifierOffset",
			"()I"
		);
	}
	jint Magnifier::getDefaultVerticalSourceToMagnifierOffset()
	{
		return callMethod<jint>(
			"getDefaultVerticalSourceToMagnifierOffset",
			"()I"
		);
	}
	jfloat Magnifier::getElevation()
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint Magnifier::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	android::graphics::drawable::Drawable Magnifier::getOverlay()
	{
		return callObjectMethod(
			"getOverlay",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::Point Magnifier::getPosition()
	{
		return callObjectMethod(
			"getPosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Magnifier::getSourceHeight()
	{
		return callMethod<jint>(
			"getSourceHeight",
			"()I"
		);
	}
	android::graphics::Point Magnifier::getSourcePosition()
	{
		return callObjectMethod(
			"getSourcePosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Magnifier::getSourceWidth()
	{
		return callMethod<jint>(
			"getSourceWidth",
			"()I"
		);
	}
	jint Magnifier::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jfloat Magnifier::getZoom()
	{
		return callMethod<jfloat>(
			"getZoom",
			"()F"
		);
	}
	jboolean Magnifier::isClippingEnabled()
	{
		return callMethod<jboolean>(
			"isClippingEnabled",
			"()Z"
		);
	}
	void Magnifier::setZoom(jfloat arg0)
	{
		callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	void Magnifier::show(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"show",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Magnifier::show(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
			"show",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Magnifier::update()
	{
		callMethod<void>(
			"update",
			"()V"
		);
	}
} // namespace android::widget

