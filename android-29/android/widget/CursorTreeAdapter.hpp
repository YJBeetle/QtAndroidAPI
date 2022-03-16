#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Filter.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CursorTreeAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline CursorTreeAdapter::CursorTreeAdapter(JObject arg0, android::content::Context arg1)
		: android::widget::BaseExpandableListAdapter(
			"android.widget.CursorTreeAdapter",
			"(Landroid/database/Cursor;Landroid/content/Context;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CursorTreeAdapter::CursorTreeAdapter(JObject arg0, android::content::Context arg1, jboolean arg2)
		: android::widget::BaseExpandableListAdapter(
			"android.widget.CursorTreeAdapter",
			"(Landroid/database/Cursor;Landroid/content/Context;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline void CursorTreeAdapter::changeCursor(JObject arg0) const
	{
		callMethod<void>(
			"changeCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	inline JString CursorTreeAdapter::convertToString(JObject arg0) const
	{
		return callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline JObject CursorTreeAdapter::getChild(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getChild",
			"(II)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	inline jlong CursorTreeAdapter::getChildId(jint arg0, jint arg1) const
	{
		return callMethod<jlong>(
			"getChildId",
			"(II)J",
			arg0,
			arg1
		);
	}
	inline android::view::View CursorTreeAdapter::getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4) const
	{
		return callObjectMethod(
			"getChildView",
			"(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object()
		);
	}
	inline jint CursorTreeAdapter::getChildrenCount(jint arg0) const
	{
		return callMethod<jint>(
			"getChildrenCount",
			"(I)I",
			arg0
		);
	}
	inline JObject CursorTreeAdapter::getCursor() const
	{
		return callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	inline android::widget::Filter CursorTreeAdapter::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	inline JObject CursorTreeAdapter::getFilterQueryProvider() const
	{
		return callObjectMethod(
			"getFilterQueryProvider",
			"()Landroid/widget/FilterQueryProvider;"
		);
	}
	inline JObject CursorTreeAdapter::getGroup(jint arg0) const
	{
		return callObjectMethod(
			"getGroup",
			"(I)Landroid/database/Cursor;",
			arg0
		);
	}
	inline jint CursorTreeAdapter::getGroupCount() const
	{
		return callMethod<jint>(
			"getGroupCount",
			"()I"
		);
	}
	inline jlong CursorTreeAdapter::getGroupId(jint arg0) const
	{
		return callMethod<jlong>(
			"getGroupId",
			"(I)J",
			arg0
		);
	}
	inline android::view::View CursorTreeAdapter::getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3) const
	{
		return callObjectMethod(
			"getGroupView",
			"(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean CursorTreeAdapter::hasStableIds() const
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	inline jboolean CursorTreeAdapter::isChildSelectable(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isChildSelectable",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void CursorTreeAdapter::notifyDataSetChanged() const
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	inline void CursorTreeAdapter::notifyDataSetChanged(jboolean arg0) const
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"(Z)V",
			arg0
		);
	}
	inline void CursorTreeAdapter::notifyDataSetInvalidated() const
	{
		callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	inline void CursorTreeAdapter::onGroupCollapsed(jint arg0) const
	{
		callMethod<void>(
			"onGroupCollapsed",
			"(I)V",
			arg0
		);
	}
	inline JObject CursorTreeAdapter::runQueryOnBackgroundThread(JString arg0) const
	{
		return callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			arg0.object<jstring>()
		);
	}
	inline void CursorTreeAdapter::setChildrenCursor(jint arg0, JObject arg1) const
	{
		callMethod<void>(
			"setChildrenCursor",
			"(ILandroid/database/Cursor;)V",
			arg0,
			arg1.object()
		);
	}
	inline void CursorTreeAdapter::setFilterQueryProvider(JObject arg0) const
	{
		callMethod<void>(
			"setFilterQueryProvider",
			"(Landroid/widget/FilterQueryProvider;)V",
			arg0.object()
		);
	}
	inline void CursorTreeAdapter::setGroupCursor(JObject arg0) const
	{
		callMethod<void>(
			"setGroupCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "./BaseExpandableListAdapter.hpp"

