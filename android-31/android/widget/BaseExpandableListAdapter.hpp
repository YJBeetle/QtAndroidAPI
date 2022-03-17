#pragma once

#include "../database/DataSetObserver.def.hpp"
#include "./BaseExpandableListAdapter.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline BaseExpandableListAdapter::BaseExpandableListAdapter()
		: JObject(
			"android.widget.BaseExpandableListAdapter",
			"()V"
		) {}
	
	// Methods
	inline jboolean BaseExpandableListAdapter::areAllItemsEnabled() const
	{
		return callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	inline jint BaseExpandableListAdapter::getChildType(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getChildType",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline jint BaseExpandableListAdapter::getChildTypeCount() const
	{
		return callMethod<jint>(
			"getChildTypeCount",
			"()I"
		);
	}
	inline jlong BaseExpandableListAdapter::getCombinedChildId(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getCombinedChildId",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	inline jlong BaseExpandableListAdapter::getCombinedGroupId(jlong arg0) const
	{
		return callMethod<jlong>(
			"getCombinedGroupId",
			"(J)J",
			arg0
		);
	}
	inline jint BaseExpandableListAdapter::getGroupType(jint arg0) const
	{
		return callMethod<jint>(
			"getGroupType",
			"(I)I",
			arg0
		);
	}
	inline jint BaseExpandableListAdapter::getGroupTypeCount() const
	{
		return callMethod<jint>(
			"getGroupTypeCount",
			"()I"
		);
	}
	inline jboolean BaseExpandableListAdapter::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void BaseExpandableListAdapter::notifyDataSetChanged() const
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	inline void BaseExpandableListAdapter::notifyDataSetInvalidated() const
	{
		callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	inline void BaseExpandableListAdapter::onGroupCollapsed(jint arg0) const
	{
		callMethod<void>(
			"onGroupCollapsed",
			"(I)V",
			arg0
		);
	}
	inline void BaseExpandableListAdapter::onGroupExpanded(jint arg0) const
	{
		callMethod<void>(
			"onGroupExpanded",
			"(I)V",
			arg0
		);
	}
	inline void BaseExpandableListAdapter::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	inline void BaseExpandableListAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers

