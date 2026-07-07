#pragma once

#include "../../JArray.hpp"
#include "../database/DataSetObserver.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup.def.hpp"
#include "./BaseAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline BaseAdapter::BaseAdapter()
		: JObject(
			"android.widget.BaseAdapter",
			"()V"
		) {}
	
	// Methods
	inline jboolean BaseAdapter::areAllItemsEnabled() const
	{
		return callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	inline JArray BaseAdapter::getAutofillOptions() const
	{
		return callObjectMethod(
			"getAutofillOptions",
			"()[Ljava/lang/CharSequence;"
		);
	}
	inline android::view::View BaseAdapter::getDropDownView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const
	{
		return callObjectMethod(
			"getDropDownView",
			"(ILandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline jint BaseAdapter::getItemViewType(jint arg0) const
	{
		return callMethod<jint>(
			"getItemViewType",
			"(I)I",
			arg0
		);
	}
	inline jint BaseAdapter::getViewTypeCount() const
	{
		return callMethod<jint>(
			"getViewTypeCount",
			"()I"
		);
	}
	inline jboolean BaseAdapter::hasStableIds() const
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	inline jboolean BaseAdapter::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean BaseAdapter::isEnabled(jint arg0) const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"(I)Z",
			arg0
		);
	}
	inline void BaseAdapter::notifyDataSetChanged() const
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	inline void BaseAdapter::notifyDataSetInvalidated() const
	{
		callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	inline void BaseAdapter::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	inline void BaseAdapter::setAutofillOptions(JArray arg0) const
	{
		callMethod<void>(
			"setAutofillOptions",
			"([Ljava/lang/CharSequence;)V",
			arg0.object<jarray>()
		);
	}
	inline void BaseAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
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
