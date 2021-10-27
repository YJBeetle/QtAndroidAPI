#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class ExpandableListView_ExpandableListContextMenuInfo : public __JniBaseClass
	{
	public:
		// Fields
		jlong id();
		jlong packedPosition();
		QAndroidJniObject targetView();
		
		// Constructors
		void __constructor(__jni_impl::android::view::View arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jlong ExpandableListView_ExpandableListContextMenuInfo::id()
	{
		return __thiz.getField<jlong>(
			"id"
		);
	}
	jlong ExpandableListView_ExpandableListContextMenuInfo::packedPosition()
	{
		return __thiz.getField<jlong>(
			"packedPosition"
		);
	}
	QAndroidJniObject ExpandableListView_ExpandableListContextMenuInfo::targetView()
	{
		return __thiz.getObjectField(
			"targetView",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	void ExpandableListView_ExpandableListContextMenuInfo::__constructor(__jni_impl::android::view::View arg0, jlong arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView$ExpandableListContextMenuInfo",
			"(Landroid/view/View;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class ExpandableListView_ExpandableListContextMenuInfo : public __jni_impl::android::widget::ExpandableListView_ExpandableListContextMenuInfo
	{
	public:
		ExpandableListView_ExpandableListContextMenuInfo(QAndroidJniObject obj) { __thiz = obj; }
		ExpandableListView_ExpandableListContextMenuInfo(__jni_impl::android::view::View arg0, jlong arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

