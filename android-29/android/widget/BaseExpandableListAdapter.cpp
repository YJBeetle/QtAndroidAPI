#include "../database/DataSetObserver.hpp"
#include "./BaseExpandableListAdapter.hpp"

namespace android::widget
{
	// Fields
	
	BaseExpandableListAdapter::BaseExpandableListAdapter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BaseExpandableListAdapter::BaseExpandableListAdapter()
	{
		__thiz = QAndroidJniObject(
			"android.widget.BaseExpandableListAdapter",
			"()V"
		);
	}
	
	// Methods
	jboolean BaseExpandableListAdapter::areAllItemsEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"areAllItemsEnabled",
			"()Z"
		);
	}
	jint BaseExpandableListAdapter::getChildType(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getChildType",
			"(II)I",
			arg0,
			arg1
		);
	}
	jint BaseExpandableListAdapter::getChildTypeCount()
	{
		return __thiz.callMethod<jint>(
			"getChildTypeCount",
			"()I"
		);
	}
	jlong BaseExpandableListAdapter::getCombinedChildId(jlong arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getCombinedChildId",
			"(JJ)J",
			arg0,
			arg1
		);
	}
	jlong BaseExpandableListAdapter::getCombinedGroupId(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"getCombinedGroupId",
			"(J)J",
			arg0
		);
	}
	jint BaseExpandableListAdapter::getGroupType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getGroupType",
			"(I)I",
			arg0
		);
	}
	jint BaseExpandableListAdapter::getGroupTypeCount()
	{
		return __thiz.callMethod<jint>(
			"getGroupTypeCount",
			"()I"
		);
	}
	jboolean BaseExpandableListAdapter::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	void BaseExpandableListAdapter::notifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"notifyDataSetChanged",
			"()V"
		);
	}
	void BaseExpandableListAdapter::notifyDataSetInvalidated()
	{
		__thiz.callMethod<void>(
			"notifyDataSetInvalidated",
			"()V"
		);
	}
	void BaseExpandableListAdapter::onGroupCollapsed(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGroupCollapsed",
			"(I)V",
			arg0
		);
	}
	void BaseExpandableListAdapter::onGroupExpanded(jint arg0)
	{
		__thiz.callMethod<void>(
			"onGroupExpanded",
			"(I)V",
			arg0
		);
	}
	void BaseExpandableListAdapter::registerDataSetObserver(android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void BaseExpandableListAdapter::unregisterDataSetObserver(android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

