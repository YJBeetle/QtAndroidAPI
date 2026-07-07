#pragma once

#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./QuickContactBadge.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline QuickContactBadge::QuickContactBadge(android::content::Context arg0)
		: android::widget::ImageView(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline QuickContactBadge::QuickContactBadge(android::content::Context arg0, JObject arg1)
		: android::widget::ImageView(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline QuickContactBadge::QuickContactBadge(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ImageView(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline QuickContactBadge::QuickContactBadge(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ImageView(
			"android.widget.QuickContactBadge",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void QuickContactBadge::assignContactFromEmail(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void QuickContactBadge::assignContactFromEmail(JString arg0, jboolean arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"assignContactFromEmail",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline void QuickContactBadge::assignContactFromPhone(JString arg0, jboolean arg1) const
	{
		callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void QuickContactBadge::assignContactFromPhone(JString arg0, jboolean arg1, android::os::Bundle arg2) const
	{
		callMethod<void>(
			"assignContactFromPhone",
			"(Ljava/lang/String;ZLandroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline void QuickContactBadge::assignContactUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"assignContactUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void QuickContactBadge::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline JString QuickContactBadge::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void QuickContactBadge::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void QuickContactBadge::setExcludeMimes(JArray arg0) const
	{
		callMethod<void>(
			"setExcludeMimes",
			"([Ljava/lang/String;)V",
			arg0.object<jarray>()
		);
	}
	inline void QuickContactBadge::setImageToDefault() const
	{
		callMethod<void>(
			"setImageToDefault",
			"()V"
		);
	}
	inline void QuickContactBadge::setMode(jint arg0) const
	{
		callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
	inline void QuickContactBadge::setOverlay(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setOverlay",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void QuickContactBadge::setPrioritizedMimeType(JString arg0) const
	{
		callMethod<void>(
			"setPrioritizedMimeType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./ImageView.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
