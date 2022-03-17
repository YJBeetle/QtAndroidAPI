#pragma once

#include "../view/View.def.hpp"
#include "./Magnifier.def.hpp"

namespace android::widget
{
	// Fields
	
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
	inline jint Magnifier::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
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
	inline void Magnifier::show(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"show",
			"(FF)V",
			arg0,
			arg1
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

