#pragma once

#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./ActionBar_Tab.def.hpp"

namespace android::app
{
	// Fields
	inline jint ActionBar_Tab::INVALID_POSITION()
	{
		return getStaticField<jint>(
			"android.app.ActionBar$Tab",
			"INVALID_POSITION"
		);
	}
	
	// Constructors
	inline ActionBar_Tab::ActionBar_Tab()
		: JObject(
			"android.app.ActionBar$Tab",
			"()V"
		) {}
	
	// Methods
	inline JString ActionBar_Tab::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::view::View ActionBar_Tab::getCustomView() const
	{
		return callObjectMethod(
			"getCustomView",
			"()Landroid/view/View;"
		);
	}
	inline android::graphics::drawable::Drawable ActionBar_Tab::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint ActionBar_Tab::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	inline JObject ActionBar_Tab::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/Object;"
		);
	}
	inline JString ActionBar_Tab::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void ActionBar_Tab::select() const
	{
		callMethod<void>(
			"select",
			"()V"
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setContentDescription(jint arg0) const
	{
		return callObjectMethod(
			"setContentDescription",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setContentDescription(JString arg0) const
	{
		return callObjectMethod(
			"setContentDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			arg0.object<jstring>()
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setCustomView(android::view::View arg0) const
	{
		return callObjectMethod(
			"setCustomView",
			"(Landroid/view/View;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setCustomView(jint arg0) const
	{
		return callObjectMethod(
			"setCustomView",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setIcon(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setIcon(jint arg0) const
	{
		return callObjectMethod(
			"setIcon",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setTabListener(JObject arg0) const
	{
		return callObjectMethod(
			"setTabListener",
			"(Landroid/app/ActionBar$TabListener;)Landroid/app/ActionBar$Tab;",
			arg0.object()
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setTag(JObject arg0) const
	{
		return callObjectMethod(
			"setTag",
			"(Ljava/lang/Object;)Landroid/app/ActionBar$Tab;",
			arg0.object<jobject>()
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setText(jint arg0) const
	{
		return callObjectMethod(
			"setText",
			"(I)Landroid/app/ActionBar$Tab;",
			arg0
		);
	}
	inline android::app::ActionBar_Tab ActionBar_Tab::setText(JString arg0) const
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/CharSequence;)Landroid/app/ActionBar$Tab;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers

