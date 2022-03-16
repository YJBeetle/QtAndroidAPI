#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./ResourceCursorTreeAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::CursorTreeAdapter(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	inline ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4)
		: android::widget::CursorTreeAdapter(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;III)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	inline ResourceCursorTreeAdapter::ResourceCursorTreeAdapter(android::content::Context arg0, JObject arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: android::widget::CursorTreeAdapter(
			"android.widget.ResourceCursorTreeAdapter",
			"(Landroid/content/Context;Landroid/database/Cursor;IIII)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	inline android::view::View ResourceCursorTreeAdapter::newChildView(android::content::Context arg0, JObject arg1, jboolean arg2, android::view::ViewGroup arg3) const
	{
		return callObjectMethod(
			"newChildView",
			"(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline android::view::View ResourceCursorTreeAdapter::newGroupView(android::content::Context arg0, JObject arg1, jboolean arg2, android::view::ViewGroup arg3) const
	{
		return callObjectMethod(
			"newGroupView",
			"(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "./BaseExpandableListAdapter.hpp"
#include "./CursorTreeAdapter.hpp"

