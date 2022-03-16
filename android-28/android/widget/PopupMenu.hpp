#pragma once

#include "../content/Context.def.hpp"
#include "../view/MenuInflater.def.hpp"
#include "../view/View.def.hpp"
#include "./PopupMenu.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1)
		: JObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2)
		: JObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline PopupMenu::PopupMenu(android::content::Context arg0, android::view::View arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.widget.PopupMenu",
			"(Landroid/content/Context;Landroid/view/View;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	inline void PopupMenu::dismiss() const
	{
		callMethod<void>(
			"dismiss",
			"()V"
		);
	}
	inline JObject PopupMenu::getDragToOpenListener() const
	{
		return callObjectMethod(
			"getDragToOpenListener",
			"()Landroid/view/View$OnTouchListener;"
		);
	}
	inline jint PopupMenu::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	inline JObject PopupMenu::getMenu() const
	{
		return callObjectMethod(
			"getMenu",
			"()Landroid/view/Menu;"
		);
	}
	inline android::view::MenuInflater PopupMenu::getMenuInflater() const
	{
		return callObjectMethod(
			"getMenuInflater",
			"()Landroid/view/MenuInflater;"
		);
	}
	inline void PopupMenu::inflate(jint arg0) const
	{
		callMethod<void>(
			"inflate",
			"(I)V",
			arg0
		);
	}
	inline void PopupMenu::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void PopupMenu::setOnDismissListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDismissListener",
			"(Landroid/widget/PopupMenu$OnDismissListener;)V",
			arg0.object()
		);
	}
	inline void PopupMenu::setOnMenuItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnMenuItemClickListener",
			"(Landroid/widget/PopupMenu$OnMenuItemClickListener;)V",
			arg0.object()
		);
	}
	inline void PopupMenu::show() const
	{
		callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers

