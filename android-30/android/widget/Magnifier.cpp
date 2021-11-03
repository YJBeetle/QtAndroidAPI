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
	
	// QJniObject forward
	Magnifier::Magnifier(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Magnifier::Magnifier(android::view::View arg0)
		: JObject(
			"android.widget.Magnifier",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	void Magnifier::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	jfloat Magnifier::getCornerRadius() const
	{
		return callMethod<jfloat>(
			"getCornerRadius",
			"()F"
		);
	}
	jint Magnifier::getDefaultHorizontalSourceToMagnifierOffset() const
	{
		return callMethod<jint>(
			"getDefaultHorizontalSourceToMagnifierOffset",
			"()I"
		);
	}
	jint Magnifier::getDefaultVerticalSourceToMagnifierOffset() const
	{
		return callMethod<jint>(
			"getDefaultVerticalSourceToMagnifierOffset",
			"()I"
		);
	}
	jfloat Magnifier::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	jint Magnifier::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	android::graphics::drawable::Drawable Magnifier::getOverlay() const
	{
		return callObjectMethod(
			"getOverlay",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::Point Magnifier::getPosition() const
	{
		return callObjectMethod(
			"getPosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Magnifier::getSourceHeight() const
	{
		return callMethod<jint>(
			"getSourceHeight",
			"()I"
		);
	}
	android::graphics::Point Magnifier::getSourcePosition() const
	{
		return callObjectMethod(
			"getSourcePosition",
			"()Landroid/graphics/Point;"
		);
	}
	jint Magnifier::getSourceWidth() const
	{
		return callMethod<jint>(
			"getSourceWidth",
			"()I"
		);
	}
	jint Magnifier::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jfloat Magnifier::getZoom() const
	{
		return callMethod<jfloat>(
			"getZoom",
			"()F"
		);
	}
	jboolean Magnifier::isClippingEnabled() const
	{
		return callMethod<jboolean>(
			"isClippingEnabled",
			"()Z"
		);
	}
	void Magnifier::setZoom(jfloat arg0) const
	{
		callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	void Magnifier::show(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"show",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Magnifier::show(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	void Magnifier::update() const
	{
		callMethod<void>(
			"update",
			"()V"
		);
	}
} // namespace android::widget

