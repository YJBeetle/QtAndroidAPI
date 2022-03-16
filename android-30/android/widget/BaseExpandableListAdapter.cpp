#include "../database/DataSetObserver.hpp"
#include "./BaseExpandableListAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	BaseExpandableListAdapter::BaseExpandableListAdapter()
		: JObject(
			"android.widget.BaseExpandableListAdapter",
			"()V"
		) {}
	
	// Methods
	jboolean BaseExpandableListAdapter::areAllItemsEnabled() const
	{
		return callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	jint BaseExpandableListAdapter::getChildType(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getChildType",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint BaseExpandableListAdapter::getChildTypeCount() const
	{
		return callMethod<jint>(
			"getChildTypeCount",
			"()I"
		);
	}
	jlong BaseExpandableListAdapter::getCombinedChildId(jlong arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getCombinedChildId",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong BaseExpandableListAdapter::getCombinedGroupId(jlong arg0) const
	{
		return callMethod<jlong>(
			"getCombinedGroupId",
			"(J)J",
			arg0
		);
	}
	jint BaseExpandableListAdapter::getGroupType(jint arg0) const
	{
		return callMethod<jint>(
			"getGroupType",
			"(I)I",
			arg0
		);
	}
	jint BaseExpandableListAdapter::getGroupTypeCount() const
	{
		return callMethod<jint>(
			"getGroupTypeCount",
			"()I"
		);
	}
	jboolean BaseExpandableListAdapter::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void BaseExpandableListAdapter::notifyDataSetChanged() const
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void BaseExpandableListAdapter::notifyDataSetInvalidated() const
	{
		callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	void BaseExpandableListAdapter::onGroupCollapsed(jint arg0) const
	{
		callMethod<void>(
			"onGroupCollapsed",
			"(I)V",
			arg0
		);
	}
	void BaseExpandableListAdapter::onGroupExpanded(jint arg0) const
	{
		callMethod<void>(
			"onGroupExpanded",
			"(I)V",
			arg0
		);
	}
	void BaseExpandableListAdapter::registerDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	void BaseExpandableListAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0) const
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::widget

