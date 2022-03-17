#pragma once

#include "../os/Bundle.def.hpp"
#include "../view/LayoutInflater.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "../widget/ListView.def.hpp"
#include "../../JString.hpp"
#include "./ListFragment.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline ListFragment::ListFragment()
		: android::app::Fragment(
			"android.app.ListFragment",
			"()V"
		) {}
	
	// Methods
	inline JObject ListFragment::getListAdapter() const
	{
		return callObjectMethod(
			"getListAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	inline android::widget::ListView ListFragment::getListView() const
	{
		return callObjectMethod(
			"getListView",
			"()Landroid/widget/ListView;"
		);
	}
	inline jlong ListFragment::getSelectedItemId() const
	{
		return callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	inline jint ListFragment::getSelectedItemPosition() const
	{
		return callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	inline android::view::View ListFragment::onCreateView(android::view::LayoutInflater arg0, android::view::ViewGroup arg1, android::os::Bundle arg2) const
	{
		return callObjectMethod(
			"onCreateView",
			"(Landroid/view/LayoutInflater;Landroid/view/ViewGroup;Landroid/os/Bundle;)Landroid/view/View;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void ListFragment::onDestroyView() const
	{
		callMethod<void>(
			"onDestroyView",
			"()V"
		);
	}
	inline void ListFragment::onListItemClick(android::widget::ListView arg0, android::view::View arg1, jint arg2, jlong arg3) const
	{
		callMethod<void>(
			"onListItemClick",
			"(Landroid/widget/ListView;Landroid/view/View;IJ)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void ListFragment::onViewCreated(android::view::View arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"onViewCreated",
			"(Landroid/view/View;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ListFragment::setEmptyText(JString arg0) const
	{
		callMethod<void>(
			"setEmptyText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void ListFragment::setListAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setListAdapter",
			"(Landroid/widget/ListAdapter;)V",
			arg0.object()
		);
	}
	inline void ListFragment::setListShown(jboolean arg0) const
	{
		callMethod<void>(
			"setListShown",
			"(Z)V",
			arg0
		);
	}
	inline void ListFragment::setListShownNoAnimation(jboolean arg0) const
	{
		callMethod<void>(
			"setListShownNoAnimation",
			"(Z)V",
			arg0
		);
	}
	inline void ListFragment::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace android::app

// Base class headers
#include "./Fragment.hpp"

