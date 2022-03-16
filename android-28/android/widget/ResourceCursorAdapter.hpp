#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Resources_Theme.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./ResourceCursorAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;)V",
			arg0.object(),
			arg1,
			arg2.object()
		) {}
	inline ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, jboolean arg3)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;Z)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	inline ResourceCursorAdapter::ResourceCursorAdapter(android::content::Context arg0, jint arg1, JObject arg2, jint arg3)
		: android::widget::CursorAdapter(
			"android.widget.ResourceCursorAdapter",
			"(Landroid/content/Context;ILandroid/database/Cursor;I)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline android::view::View ResourceCursorAdapter::newDropDownView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"newDropDownView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::view::View ResourceCursorAdapter::newView(android::content::Context arg0, JObject arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"newView",
			"(Landroid/content/Context;Landroid/database/Cursor;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void ResourceCursorAdapter::setDropDownViewResource(jint arg0) const
	{
		callMethod<void>(
			"setDropDownViewResource",
			"(I)V",
			arg0
		);
	}
	inline void ResourceCursorAdapter::setDropDownViewTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"setDropDownViewTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void ResourceCursorAdapter::setViewResource(jint arg0) const
	{
		callMethod<void>(
			"setViewResource",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "./BaseAdapter.hpp"
#include "./CursorAdapter.hpp"

