#pragma once

#include "../os/Bundle.def.hpp"
#include "../view/View.def.hpp"
#include "../widget/ListView.def.hpp"
#include "./ListActivity.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline ListActivity::ListActivity()
		: android::app::Activity(
			"android.app.ListActivity",
			"()V"
		) {}
	
	// Methods
	inline JObject ListActivity::getListAdapter() const
	{
		return callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	inline android::widget::ListView ListActivity::getListView() const
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	inline jlong ListActivity::getSelectedItemId() const
	{
		return callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	inline jint ListActivity::getSelectedItemPosition() const
	{
		return callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	inline void ListActivity::onContentChanged() const
	{
		callMethod<void>(
			"onContentChanged",
			"()V"
		);
	}
	inline void ListActivity::setListAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	inline void ListActivity::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
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

