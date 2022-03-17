#pragma once

#include "../database/DataSetObserver.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./Filter.def.hpp"
#include "../../JObject.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./HeaderViewListAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline HeaderViewListAdapter::HeaderViewListAdapter(java::util::ArrayList arg0, java::util::ArrayList arg1, JObject arg2)
		: JObject(
			"android.widget.HeaderViewListAdapter",
			"(Ljava/util/ArrayList;Ljava/util/ArrayList;Landroid/widget/ListAdapter;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jboolean HeaderViewListAdapter::areAllItemsEnabled() const
	{
		return callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	inline jint HeaderViewListAdapter::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline android::widget::Filter HeaderViewListAdapter::getFilter() const
	{
		return callObjectMethod(
			"getFilter",
			"()Landroid/widget/Filter;"
		);
	}
	inline jint HeaderViewListAdapter::getFootersCount() const
	{
		return callMethod<jint>(
			"getFootersCount",
			"()I"
		);
	}
	inline jint HeaderViewListAdapter::getHeadersCount() const
	{
		return callMethod<jint>(
			"getHeadersCount",
			"()I"
		);
	}
	inline JObject HeaderViewListAdapter::getItem(jint arg0) const
	{
		return callObjectMethod(
			"getItem",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jlong HeaderViewListAdapter::getItemId(jint arg0) const
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	inline jint HeaderViewListAdapter::getItemViewType(jint arg0) const
	{
		return callMethod<jint>(
			"getItemViewType",
			"(I)I",
			arg0
		);
	}
	inline android::view::View HeaderViewListAdapter::getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jint HeaderViewListAdapter::getViewTypeCount() const
	{
		return callMethod<jint>(
			"getViewTypeCount",
			"()I"
		);
	}
	inline JObject HeaderViewListAdapter::getWrappedAdapter() const
	{
		return callObjectMethod(
			"getWrappedAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	inline jboolean HeaderViewListAdapter::hasStableIds() const
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	inline jboolean HeaderViewListAdapter::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean HeaderViewListAdapter::isEnabled(jint arg0) const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"(I)Z",
			arg0
		);
	}
	inline void HeaderViewListAdapter::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	inline jboolean HeaderViewListAdapter::removeFooter(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"removeFooter",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline jboolean HeaderViewListAdapter::removeHeader(android::view::View arg0) const
	{
		return callMethod<jboolean>(
			"removeHeader",
			"(Landroid/view/View;)Z",
			arg0.object()
		);
	}
	inline void HeaderViewListAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
