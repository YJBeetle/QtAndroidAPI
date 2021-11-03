#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./Filter.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CursorTreeAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	CursorTreeAdapter::CursorTreeAdapter(QAndroidJniObject obj) : android::widget::BaseExpandableListAdapter(obj) {}
	
	// Constructors
	CursorTreeAdapter::CursorTreeAdapter(JObject arg0, android::content::Context arg1)
		: android::widget::BaseExpandableListAdapter(
			"android.widget.CursorTreeAdapter",
			"(Landroid/database/Cursor;Landroid/content/Context;)V",
			arg0.object(),
			arg1.object()
		) {}
	CursorTreeAdapter::CursorTreeAdapter(JObject arg0, android::content::Context arg1, jboolean arg2)
		: android::widget::BaseExpandableListAdapter(
			"android.widget.CursorTreeAdapter",
			"(Landroid/database/Cursor;Landroid/content/Context;Z)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	void CursorTreeAdapter::changeCursor(JObject arg0)
	{
		callMethod<void>(
			"changeCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
	JString CursorTreeAdapter::convertToString(JObject arg0)
	{
		return callObjectMethod(
			"convertToString",
			"(Landroid/database/Cursor;)Ljava/lang/String;",
			arg0.object()
		);
	}
	JObject CursorTreeAdapter::getChild(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getChild",
			"(II)Landroid/database/Cursor;",
			arg0,
			arg1
		);
	}
	jlong CursorTreeAdapter::getChildId(jint arg0, jint arg1)
	{
		return callMethod<jlong>(
			"getChildId",
			"(II)J",
			arg0,
			arg1
		);
	}
	android::view::View CursorTreeAdapter::getChildView(jint arg0, jint arg1, jboolean arg2, android::view::View arg3, android::view::ViewGroup arg4)
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
	jint CursorTreeAdapter::getChildrenCount(jint arg0)
	{
		return callMethod<jint>(
			"getChildrenCount",
			"(I)I",
			arg0
		);
	}
	JObject CursorTreeAdapter::getCursor()
	{
		return callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	android::widget::Filter CursorTreeAdapter::getFilter()
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	JObject CursorTreeAdapter::getFilterQueryProvider()
	{
		return callObjectMethod(
			"getFilterQueryProvider",
			"()Landroid/widget/FilterQueryProvider;"
		);
	}
	JObject CursorTreeAdapter::getGroup(jint arg0)
	{
		return callObjectMethod(
			"getGroup",
			"(I)Landroid/database/Cursor;",
			arg0
		);
	}
	jint CursorTreeAdapter::getGroupCount()
	{
		return callMethod<jint>(
			"getGroupCount",
			"()I"
		);
	}
	jlong CursorTreeAdapter::getGroupId(jint arg0)
	{
		return callMethod<jlong>(
			"getGroupId",
			"(I)J",
			arg0
		);
	}
	android::view::View CursorTreeAdapter::getGroupView(jint arg0, jboolean arg1, android::view::View arg2, android::view::ViewGroup arg3)
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
	jboolean CursorTreeAdapter::hasStableIds()
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	jboolean CursorTreeAdapter::isChildSelectable(jint arg0, jint arg1)
	{
		return callMethod<jboolean>(
			"isChildSelectable",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void CursorTreeAdapter::notifyDataSetChanged()
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void CursorTreeAdapter::notifyDataSetChanged(jboolean arg0)
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"(Z)V",
			arg0
		);
	}
	void CursorTreeAdapter::notifyDataSetInvalidated()
	{
		callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	void CursorTreeAdapter::onGroupCollapsed(jint arg0)
	{
		callMethod<void>(
			"onGroupCollapsed",
			"(I)V",
			arg0
		);
	}
	JObject CursorTreeAdapter::runQueryOnBackgroundThread(JString arg0)
	{
		return callObjectMethod(
			"runQueryOnBackgroundThread",
			"(Ljava/lang/CharSequence;)Landroid/database/Cursor;",
			arg0.object<jstring>()
		);
	}
	void CursorTreeAdapter::setChildrenCursor(jint arg0, JObject arg1)
	{
		callMethod<void>(
			"setChildrenCursor",
			"(ILandroid/database/Cursor;)V",
			arg0,
			arg1.object()
		);
	}
	void CursorTreeAdapter::setFilterQueryProvider(JObject arg0)
	{
		callMethod<void>(
			"setFilterQueryProvider",
			"(Landroid/widget/FilterQueryProvider;)V",
			arg0.object()
		);
	}
	void CursorTreeAdapter::setGroupCursor(JObject arg0)
	{
		callMethod<void>(
			"setGroupCursor",
			"(Landroid/database/Cursor;)V",
			arg0.object()
		);
	}
} // namespace android::widget

