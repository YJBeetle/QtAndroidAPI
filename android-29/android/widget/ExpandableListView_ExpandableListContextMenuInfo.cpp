#include "../view/View.hpp"
#include "./ExpandableListView_ExpandableListContextMenuInfo.hpp"

namespace android::widget
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
	
	ExpandableListView_ExpandableListContextMenuInfo::ExpandableListView_ExpandableListContextMenuInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExpandableListView_ExpandableListContextMenuInfo::ExpandableListView_ExpandableListContextMenuInfo(android::view::View arg0, jlong arg1, jlong arg2)
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
} // namespace android::widget

