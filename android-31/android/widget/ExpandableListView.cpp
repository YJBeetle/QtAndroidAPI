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
		return getStaticField<jint>(
			"android.widget.ExpandableListView",
			"CHILD_INDICATOR_INHERIT"
		);
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_CHILD()
	{
		return getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_CHILD"
		);
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_GROUP()
	{
		return getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_GROUP"
		);
	}
	jint ExpandableListView::PACKED_POSITION_TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_NULL"
		);
	}
	jlong ExpandableListView::PACKED_POSITION_VALUE_NULL()
	{
		return getStaticField<jlong>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_VALUE_NULL"
		);
	}
	
	// QAndroidJniObject forward
	ExpandableListView::ExpandableListView(QAndroidJniObject obj) : android::widget::ListView(obj) {}
	
	// Constructors
	ExpandableListView::ExpandableListView(android::content::Context arg0)
		: android::widget::ListView(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	ExpandableListView::ExpandableListView(android::content::Context arg0, JObject arg1)
		: android::widget::ListView(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	ExpandableListView::ExpandableListView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ListView(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ExpandableListView::ExpandableListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ListView(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jint ExpandableListView::getPackedPositionChild(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionChild",
			"(J)I",
			arg0
		);
	}
	jlong ExpandableListView::getPackedPositionForChild(jint arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"android.widget.ExpandableListView",
			"getPackedPositionForChild",
			"(II)J",
			arg0,
			arg1
		);
	}
	jlong ExpandableListView::getPackedPositionForGroup(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.widget.ExpandableListView",
			"getPackedPositionForGroup",
			"(I)J",
			arg0
		);
	}
	jint ExpandableListView::getPackedPositionGroup(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionGroup",
			"(J)I",
			arg0
		);
	}
	jint ExpandableListView::getPackedPositionType(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionType",
			"(J)I",
			arg0
		);
	}
	jboolean ExpandableListView::collapseGroup(jint arg0)
	{
		return callMethod<jboolean>(
			"collapseGroup",
			"(I)Z",
			arg0
		);
	}
	jboolean ExpandableListView::expandGroup(jint arg0)
	{
		return callMethod<jboolean>(
			"expandGroup",
			"(I)Z",
			arg0
		);
	}
	jboolean ExpandableListView::expandGroup(jint arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"expandGroup",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	jstring ExpandableListView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	JObject ExpandableListView::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	JObject ExpandableListView::getExpandableListAdapter()
	{
		return callObjectMethod(
			"getExpandableListAdapter",
			"()Landroid/widget/ExpandableListAdapter;"
		);
	}
	jlong ExpandableListView::getExpandableListPosition(jint arg0)
	{
		return callMethod<jlong>(
			"getExpandableListPosition",
			"(I)J",
			arg0
		);
	}
	jint ExpandableListView::getFlatListPosition(jlong arg0)
	{
		return callMethod<jint>(
			"getFlatListPosition",
			"(J)I",
			arg0
		);
	}
	jlong ExpandableListView::getSelectedId()
	{
		return callMethod<jlong>(
			"getSelectedId",
			"()J"
		);
	}
	jlong ExpandableListView::getSelectedPosition()
	{
		return callMethod<jlong>(
			"getSelectedPosition",
			"()J"
		);
	}
	jboolean ExpandableListView::isGroupExpanded(jint arg0)
	{
		return callMethod<jboolean>(
			"isGroupExpanded",
			"(I)Z",
			arg0
		);
	}
	void ExpandableListView::onRestoreInstanceState(JObject arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	void ExpandableListView::onRtlPropertiesChanged(jint arg0)
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	JObject ExpandableListView::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean ExpandableListView::performItemClick(android::view::View arg0, jint arg1, jlong arg2)
	{
		return callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ExpandableListView::setAdapter(JObject arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void ExpandableListView::setChildDivider(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setChildDivider",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ExpandableListView::setChildIndicator(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setChildIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ExpandableListView::setChildIndicatorBounds(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setChildIndicatorBounds",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ExpandableListView::setChildIndicatorBoundsRelative(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setChildIndicatorBoundsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ExpandableListView::setGroupIndicator(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setGroupIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void ExpandableListView::setIndicatorBounds(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setIndicatorBounds",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ExpandableListView::setIndicatorBoundsRelative(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setIndicatorBoundsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ExpandableListView::setOnChildClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnChildClickListener",
			"(Landroid/widget/ExpandableListView$OnChildClickListener;)V",
			arg0.object()
		);
	}
	void ExpandableListView::setOnGroupClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnGroupClickListener",
			"(Landroid/widget/ExpandableListView$OnGroupClickListener;)V",
			arg0.object()
		);
	}
	void ExpandableListView::setOnGroupCollapseListener(JObject arg0)
	{
		callMethod<void>(
			"setOnGroupCollapseListener",
			"(Landroid/widget/ExpandableListView$OnGroupCollapseListener;)V",
			arg0.object()
		);
	}
	void ExpandableListView::setOnGroupExpandListener(JObject arg0)
	{
		callMethod<void>(
			"setOnGroupExpandListener",
			"(Landroid/widget/ExpandableListView$OnGroupExpandListener;)V",
			arg0.object()
		);
	}
	void ExpandableListView::setOnItemClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	jboolean ExpandableListView::setSelectedChild(jint arg0, jint arg1, jboolean arg2)
	{
		return callMethod<jboolean>(
			"setSelectedChild",
			"(IIZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	void ExpandableListView::setSelectedGroup(jint arg0)
	{
		callMethod<void>(
			"setSelectedGroup",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

