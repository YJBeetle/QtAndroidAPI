#pragma once

#include "../os/Bundle.def.hpp"
#include "../view/View.def.hpp"
#include "../widget/ExpandableListView.def.hpp"
#include "./ExpandableListActivity.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline ExpandableListActivity::ExpandableListActivity()
		: android::app::Activity(
			"android.app.ExpandableListActivity",
			"()V"
		) {}
	
	// Methods
	inline JObject ExpandableListActivity::getExpandableListAdapter() const
	{
		return callObjectMethod(
			"getExpandableListAdapter",
			"()Landroid/widget/ExpandableListAdapter;"
		);
	}
	inline android::widget::ExpandableListView ExpandableListActivity::getExpandableListView() const
	{
		return callObjectMethod(
			"getExpandableListView",
			"()Landroid/widget/ExpandableListView;"
		);
	}
	inline jlong ExpandableListActivity::getSelectedId() const
	{
		return callMethod<jlong>(
			"getSelectedId",
			"()J"
		);
	}
	inline jlong ExpandableListActivity::getSelectedPosition() const
	{
		return callMethod<jlong>(
			"getSelectedPosition",
			"()J"
		);
	}
	inline jboolean ExpandableListActivity::onChildClick(android::widget::ExpandableListView arg0, android::view::View arg1, jint arg2, jint arg3, jlong arg4) const
	{
		return callMethod<jboolean>(
			"onChildClick",
			"(Landroid/widget/ExpandableListView;Landroid/view/View;IIJ)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	inline void ExpandableListActivity::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	inline void ExpandableListActivity::onCreateContextMenu(JObject arg0, android::view::View arg1, JObject arg2) const
	{
		callMethod<void>(
			"onCreateContextMenu",
			"(Landroid/view/ContextMenu;Landroid/view/View;Landroid/view/ContextMenu$ContextMenuInfo;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void ExpandableListActivity::onGroupCollapse(jint arg0) const
	{
		callMethod<void>(
			"onGroupCollapse",
			"(I)V",
			arg0
		);
	}
	inline void ExpandableListActivity::onGroupExpand(jint arg0) const
	{
		callMethod<void>(
			"onGroupExpand",
			"(I)V",
			arg0
		);
	}
	inline void ExpandableListActivity::setListAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ExpandableListAdapter;)V",
			arg0.object()
		);
	}
	inline jboolean ExpandableListActivity::setSelectedChild(jint arg0, jint arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"setSelectedChild",
			"(IIZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline void ExpandableListActivity::setSelectedGroup(jint arg0) const
	{
		callMethod<void>(
			"setSelectedGroup",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

// Base class headers
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "./Activity.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
