#pragma once

#include "../content/Context.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./ExpandableListView.def.hpp"

namespace android::widget
{
	// Fields
	inline jint ExpandableListView::CHILD_INDICATOR_INHERIT()
	{
		return getStaticField<jint>(
			"android.widget.ExpandableListView",
			"CHILD_INDICATOR_INHERIT"
		);
	}
	inline jint ExpandableListView::PACKED_POSITION_TYPE_CHILD()
	{
		return getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_CHILD"
		);
	}
	inline jint ExpandableListView::PACKED_POSITION_TYPE_GROUP()
	{
		return getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_GROUP"
		);
	}
	inline jint ExpandableListView::PACKED_POSITION_TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_TYPE_NULL"
		);
	}
	inline jlong ExpandableListView::PACKED_POSITION_VALUE_NULL()
	{
		return getStaticField<jlong>(
			"android.widget.ExpandableListView",
			"PACKED_POSITION_VALUE_NULL"
		);
	}
	
	// Constructors
	inline ExpandableListView::ExpandableListView(android::content::Context arg0)
		: android::widget::ListView(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ExpandableListView::ExpandableListView(android::content::Context arg0, JObject arg1)
		: android::widget::ListView(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ExpandableListView::ExpandableListView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ListView(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ExpandableListView::ExpandableListView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ListView(
			"android.widget.ExpandableListView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint ExpandableListView::getPackedPositionChild(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionChild",
			"(J)I",
			arg0
		);
	}
	inline jlong ExpandableListView::getPackedPositionForChild(jint arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"android.widget.ExpandableListView",
			"getPackedPositionForChild",
			"(II)J",
			arg0,
			arg1
		);
	}
	inline jlong ExpandableListView::getPackedPositionForGroup(jint arg0)
	{
		return callStaticMethod<jlong>(
			"android.widget.ExpandableListView",
			"getPackedPositionForGroup",
			"(I)J",
			arg0
		);
	}
	inline jint ExpandableListView::getPackedPositionGroup(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionGroup",
			"(J)I",
			arg0
		);
	}
	inline jint ExpandableListView::getPackedPositionType(jlong arg0)
	{
		return callStaticMethod<jint>(
			"android.widget.ExpandableListView",
			"getPackedPositionType",
			"(J)I",
			arg0
		);
	}
	inline jboolean ExpandableListView::collapseGroup(jint arg0) const
	{
		return callMethod<jboolean>(
			"collapseGroup",
			"(I)Z",
			arg0
		);
	}
	inline jboolean ExpandableListView::expandGroup(jint arg0) const
	{
		return callMethod<jboolean>(
			"expandGroup",
			"(I)Z",
			arg0
		);
	}
	inline jboolean ExpandableListView::expandGroup(jint arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"expandGroup",
			"(IZ)Z",
			arg0,
			arg1
		);
	}
	inline JString ExpandableListView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject ExpandableListView::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/ListAdapter;"
		);
	}
	inline JObject ExpandableListView::getExpandableListAdapter() const
	{
		return callObjectMethod(
			"getExpandableListAdapter",
			"()Landroid/widget/ExpandableListAdapter;"
		);
	}
	inline jlong ExpandableListView::getExpandableListPosition(jint arg0) const
	{
		return callMethod<jlong>(
			"getExpandableListPosition",
			"(I)J",
			arg0
		);
	}
	inline jint ExpandableListView::getFlatListPosition(jlong arg0) const
	{
		return callMethod<jint>(
			"getFlatListPosition",
			"(J)I",
			arg0
		);
	}
	inline jlong ExpandableListView::getSelectedId() const
	{
		return callMethod<jlong>(
			"getSelectedId",
			"()J"
		);
	}
	inline jlong ExpandableListView::getSelectedPosition() const
	{
		return callMethod<jlong>(
			"getSelectedPosition",
			"()J"
		);
	}
	inline jboolean ExpandableListView::isGroupExpanded(jint arg0) const
	{
		return callMethod<jboolean>(
			"isGroupExpanded",
			"(I)Z",
			arg0
		);
	}
	inline void ExpandableListView::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	inline JObject ExpandableListView::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline jboolean ExpandableListView::performItemClick(android::view::View arg0, jint arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void ExpandableListView::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::setChildDivider(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setChildDivider",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::setChildIndicator(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setChildIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::setChildIndicatorBounds(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setChildIndicatorBounds",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ExpandableListView::setChildIndicatorBoundsRelative(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setChildIndicatorBoundsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ExpandableListView::setGroupIndicator(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setGroupIndicator",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::setIndicatorBounds(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setIndicatorBounds",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ExpandableListView::setIndicatorBoundsRelative(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setIndicatorBoundsRelative",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void ExpandableListView::setOnChildClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnChildClickListener",
			"(Landroid/widget/ExpandableListView$OnChildClickListener;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::setOnGroupClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnGroupClickListener",
			"(Landroid/widget/ExpandableListView$OnGroupClickListener;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::setOnGroupCollapseListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnGroupCollapseListener",
			"(Landroid/widget/ExpandableListView$OnGroupCollapseListener;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::setOnGroupExpandListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnGroupExpandListener",
			"(Landroid/widget/ExpandableListView$OnGroupExpandListener;)V",
			arg0.object()
		);
	}
	inline void ExpandableListView::setOnItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	inline jboolean ExpandableListView::setSelectedChild(jint arg0, jint arg1, jboolean arg2) const
	{
		return callMethod<jboolean>(
			"setSelectedChild",
			"(IIZ)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline void ExpandableListView::setSelectedGroup(jint arg0) const
	{
		callMethod<void>(
			"setSelectedGroup",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AbsListView.hpp"
#include "./ListView.hpp"

