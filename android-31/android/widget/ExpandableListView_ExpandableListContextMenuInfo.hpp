#pragma once

#include "../view/View.def.hpp"
#include "./ExpandableListView_ExpandableListContextMenuInfo.def.hpp"

namespace android::widget
{
	// Fields
	inline jlong ExpandableListView_ExpandableListContextMenuInfo::id()
	{
		return getField<jlong>(
			"id"
		);
	}
	inline jlong ExpandableListView_ExpandableListContextMenuInfo::packedPosition()
	{
		return getField<jlong>(
			"packedPosition"
		);
	}
	inline android::view::View ExpandableListView_ExpandableListContextMenuInfo::targetView()
	{
		return getObjectField(
			"targetView",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	inline ExpandableListView_ExpandableListContextMenuInfo::ExpandableListView_ExpandableListContextMenuInfo(android::view::View arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.widget.ExpandableListView$ExpandableListContextMenuInfo",
			"(Landroid/view/View;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
