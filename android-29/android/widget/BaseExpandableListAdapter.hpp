#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::database
{
	class DataSetObserver;
}

namespace __jni_impl::android::widget
{
	class BaseExpandableListAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean areAllItemsEnabled();
		jint getChildType(jint arg0, jint arg1);
		jint getChildTypeCount();
		jlong getCombinedChildId(jlong arg0, jlong arg1);
		jlong getCombinedGroupId(jlong arg0);
		jint getGroupType(jint arg0);
		jint getGroupTypeCount();
		jboolean isEmpty();
		void notifyDataSetChanged();
		void notifyDataSetInvalidated();
		void onGroupCollapsed(jint arg0);
		void onGroupExpanded(jint arg0);
		void registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
		void unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
	};
} // namespace __jni_impl::android::widget

#include "../database/DataSetObserver.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void BaseExpandableListAdapter::__constructor()
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
	void BaseExpandableListAdapter::registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void BaseExpandableListAdapter::unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class BaseExpandableListAdapter : public __jni_impl::android::widget::BaseExpandableListAdapter
	{
	public:
		BaseExpandableListAdapter(QAndroidJniObject obj) { __thiz = obj; }
		BaseExpandableListAdapter()
		{
			__constructor();
		}
	};
} // namespace android::widget

