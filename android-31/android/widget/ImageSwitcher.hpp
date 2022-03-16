#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./ImageSwitcher.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ImageSwitcher::ImageSwitcher(android::content::Context arg0)
		: android::widget::ViewSwitcher(
			"android.widget.ImageSwitcher",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ImageSwitcher::ImageSwitcher(android::content::Context arg0, JObject arg1)
		: android::widget::ViewSwitcher(
			"android.widget.ImageSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline JString ImageSwitcher::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void ImageSwitcher::setImageDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setImageDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ImageSwitcher::setImageResource(jint arg0) const
	{
		callMethod<void>(
			"setImageResource",
			"(I)V",
			arg0
		);
	}
	inline void ImageSwitcher::setImageURI(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setImageURI",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"
#include "./ViewAnimator.hpp"
#include "./ViewSwitcher.hpp"

