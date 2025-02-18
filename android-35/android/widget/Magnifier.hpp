#pragma once

#include "../graphics/Point.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/View.def.hpp"
#include "./Magnifier.def.hpp"

namespace android::widget
{
	// Fields
	inline jint Magnifier::SOURCE_BOUND_MAX_IN_SURFACE()
	{
		return getStaticField<jint>(
			"android.widget.Magnifier",
			"SOURCE_BOUND_MAX_IN_SURFACE"
		);
	}
	inline jint Magnifier::SOURCE_BOUND_MAX_VISIBLE()
	{
		return getStaticField<jint>(
			"android.widget.Magnifier",
			"SOURCE_BOUND_MAX_VISIBLE"
		);
	}
	
	// Constructors
	inline Magnifier::Magnifier(android::view::View arg0)
		: JObject(
			"android.widget.Magnifier",
			"(Landroid/view/View;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Magnifier::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	inline jfloat Magnifier::getCornerRadius() const
	{
		return callMethod<jfloat>(
			"getCornerRadius",
			"()F"
		);
	}
	inline jint Magnifier::getDefaultHorizontalSourceToMagnifierOffset() const
	{
		return callMethod<jint>(
			"getDefaultHorizontalSourceToMagnifierOffset",
			"()I"
		);
	}
	inline jint Magnifier::getDefaultVerticalSourceToMagnifierOffset() const
	{
		return callMethod<jint>(
			"getDefaultVerticalSourceToMagnifierOffset",
			"()I"
		);
	}
	inline jfloat Magnifier::getElevation() const
	{
		return callMethod<jfloat>(
			"getElevation",
			"()F"
		);
	}
	inline jint Magnifier::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable Magnifier::getOverlay() const
	{
		return callObjectMethod(
			"getOverlay",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::Point Magnifier::getPosition() const
	{
		return callObjectMethod(
			"getPosition",
			"()Landroid/graphics/Point;"
		);
	}
	inline jint Magnifier::getSourceHeight() const
	{
		return callMethod<jint>(
			"getSourceHeight",
			"()I"
		);
	}
	inline android::graphics::Point Magnifier::getSourcePosition() const
	{
		return callObjectMethod(
			"getSourcePosition",
			"()Landroid/graphics/Point;"
		);
	}
	inline jint Magnifier::getSourceWidth() const
	{
		return callMethod<jint>(
			"getSourceWidth",
			"()I"
		);
	}
	inline jint Magnifier::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jfloat Magnifier::getZoom() const
	{
		return callMethod<jfloat>(
			"getZoom",
			"()F"
		);
	}
	inline jboolean Magnifier::isClippingEnabled() const
	{
		return callMethod<jboolean>(
			"isClippingEnabled",
			"()Z"
		);
	}
	inline void Magnifier::setZoom(jfloat arg0) const
	{
		callMethod<void>(
			"setZoom",
			"(F)V",
			arg0
		);
	}
	inline void Magnifier::show(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"show",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Magnifier::show(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void Magnifier::update() const
	{
		callMethod<void>(
			"update",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
