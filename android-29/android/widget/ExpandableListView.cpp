#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/View.hpp"
#include "./ExpandableListView.hpp"

namespace android::widget
{
	// Fields
	jint ExpandableListView::CHILD_INDICATOR_INHERIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ExpandableListView",
			"CHILD_INDICATOR_INHERIT"
		);
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_CHILD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_CHILD"
		);
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_GROUP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_GROUP"
		);
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_NULL"
		);
	}
	jlong ExpandableListView::PACKED_POSITION_VALUE_NULL()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_VALUE_NULL"
		);
	}
	
	ExpandableListView::ExpandableListView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExpandableListView::ExpandableListView(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ExpandableListView::ExpandableListView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ExpandableListView::ExpandableListView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ExpandableListView::ExpandableListView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jint ExpandableListView::getPackedPositionChild(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionChild",
			"(J)I",
			arg0
		);
	}
	jlong ExpandableListView::getPackedPositionForChild(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.widget.ExpandableListView",
			"getPackedPositionForChild",
			"(II)J",
			arg0,
			arg1
		);
	}
	jlong ExpandableListView::getPackedPositionForGroup(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.widget.ExpandableListView",
			"getPackedPositionForGroup",
			"(I)J",
			arg0
		);
	}
	jint ExpandableListView::getPackedPositionGroup(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionGroup",
			"(J)I",
			arg0
		);
	}
	jint ExpandableListView::getPackedPositionType(jlong arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionType",
			"(J)I",
			arg0
		);
	}
	jboolean ExpandableListView::collapseGroup(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"collapseGroup",
			"(I)Z",
			arg0
		);
	}
	jboolean ExpandableListView::expandGroup(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"expandGroup",
			"(I)Z",
			arg0
		);
	}
	jboolean ExpandableListView::expandGroup(jint arg0, jboolean arg1)
	{
		return __thiz.callMethod<jboolean>(
			"expandGroup",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jstring ExpandableListView::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject ExpandableListView::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	QAndroidJniObject ExpandableListView::getExpandableListAdapter()
	{
		return __thiz.callObjectMethod(
			"getExpandableListAdapter",
			"()Landroid/widget/ExpandableListAdapter;"
		);
	}
	jlong ExpandableListView::getExpandableListPosition(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getExpandableListPosition",
			"(I)J",
			arg0
		);
	}
	jint ExpandableListView::getFlatListPosition(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"getFlatListPosition",
			"(J)I",
			arg0
		);
	}
	jlong ExpandableListView::getSelectedId()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedId",
			"()J"
		);
	}
	jlong ExpandableListView::getSelectedPosition()
	{
		return __thiz.callMethod<jlong>(
			"getSelectedPosition",
			"()J"
		);
	}
	jboolean ExpandableListView::isGroupExpanded(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isGroupExpanded",
			"(I)Z",
			arg0
		);
	}
	void ExpandableListView::onRestoreInstanceState(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject ExpandableListView::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean ExpandableListView::performItemClick(android::view::View arg0, jint arg1, jlong arg2)
	{
		return __thiz.callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ExpandableListView::setAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::setChildDivider(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setChildDivider",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::setChildIndicator(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setChildIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::setChildIndicatorBounds(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChildIndicatorBounds",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ExpandableListView::setChildIndicatorBoundsRelative(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setChildIndicatorBoundsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ExpandableListView::setGroupIndicator(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setGroupIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::setIndicatorBounds(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setIndicatorBounds",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ExpandableListView::setIndicatorBoundsRelative(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setIndicatorBoundsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ExpandableListView::setOnChildClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnChildClickListener",
			"(Landroid/widget/ExpandableListView$OnChildClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::setOnGroupClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnGroupClickListener",
			"(Landroid/widget/ExpandableListView$OnGroupClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::setOnGroupCollapseListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnGroupCollapseListener",
			"(Landroid/widget/ExpandableListView$OnGroupCollapseListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::setOnGroupExpandListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnGroupExpandListener",
			"(Landroid/widget/ExpandableListView$OnGroupExpandListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ExpandableListView::setOnItemClickListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ExpandableListView::setSelectedChild(jint arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callMethod<jboolean>(
			"setSelectedChild",
			"(IIZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	void ExpandableListView::setSelectedGroup(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelectedGroup",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

