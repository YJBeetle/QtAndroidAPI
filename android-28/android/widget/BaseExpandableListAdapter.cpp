#include "../database/DataSetObserver.hpp"
#include "./BaseExpandableListAdapter.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	BaseExpandableListAdapter::BaseExpandableListAdapter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BaseExpandableListAdapter::BaseExpandableListAdapter()
		: __JniBaseClass(
			"android.widget.BaseExpandableListAdapter",
			"()V"
		) {}
	
	// Methods
	jboolean BaseExpandableListAdapter::areAllItemsEnabled()
	{
		return callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	jint BaseExpandableListAdapter::getChildType(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getChildType",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint BaseExpandableListAdapter::getChildTypeCount()
	{
		return callMethod<jint>(
			"getChildTypeCount",
			"()I"
		);
	}
	jlong BaseExpandableListAdapter::getCombinedChildId(jlong arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getCombinedChildId",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong BaseExpandableListAdapter::getCombinedGroupId(jlong arg0)
	{
		return callMethod<jlong>(
			"getCombinedGroupId",
			"(J)J",
			arg0
		);
	}
	jint BaseExpandableListAdapter::getGroupType(jint arg0)
	{
		return callMethod<jint>(
			"getGroupType",
			"(I)I",
			arg0
		);
	}
	jint BaseExpandableListAdapter::getGroupTypeCount()
	{
		return callMethod<jint>(
			"getGroupTypeCount",
			"()I"
		);
	}
	jboolean BaseExpandableListAdapter::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void BaseExpandableListAdapter::notifyDataSetChanged()
	{
		callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void BaseExpandableListAdapter::notifyDataSetInvalidated()
	{
		callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	void BaseExpandableListAdapter::onGroupCollapsed(jint arg0)
	{
		callMethod<void>(
			"onGroupCollapsed",
			"(I)V",
			arg0
		);
	}
	void BaseExpandableListAdapter::onGroupExpanded(jint arg0)
	{
		callMethod<void>(
			"onGroupExpanded",
			"(I)V",
			arg0
		);
	}
	void BaseExpandableListAdapter::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
	void BaseExpandableListAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.object()
		);
	}
} // namespace android::widget

