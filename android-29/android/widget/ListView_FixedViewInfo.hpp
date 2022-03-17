#pragma once

#include "../view/View.def.hpp"
#include "./ListView.def.hpp"
#include "../../JObject.hpp"
#include "./ListView_FixedViewInfo.def.hpp"

namespace android::widget
{
	// Fields
	inline JObject ListView_FixedViewInfo::data()
	{
		return getObjectField(
			"data",
			"Ljava/lang/Object;"
		);
	}
	inline jboolean ListView_FixedViewInfo::isSelectable()
	{
		return getField<jboolean>(
			"isSelectable"
		);
	}
	inline android::view::View ListView_FixedViewInfo::view()
	{
		return getObjectField(
			"view",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	inline ListView_FixedViewInfo::ListView_FixedViewInfo(android::widget::ListView arg0)
		: JObject(
			"android.widget.ListView$FixedViewInfo",
			"(Landroid/widget/ListView;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::widget

// Base class headers

