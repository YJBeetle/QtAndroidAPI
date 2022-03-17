#pragma once

#include "./RemoteViews.def.hpp"
#include "./RemoteViews_RemoteCollectionItems.def.hpp"
#include "./RemoteViews_RemoteCollectionItems_Builder.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RemoteViews_RemoteCollectionItems_Builder::RemoteViews_RemoteCollectionItems_Builder()
		: JObject(
			"android.widget.RemoteViews$RemoteCollectionItems$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::widget::RemoteViews_RemoteCollectionItems_Builder RemoteViews_RemoteCollectionItems_Builder::addItem(jlong arg0, android::widget::RemoteViews arg1) const
	{
		return callObjectMethod(
			"addItem",
			"(JLandroid/widget/RemoteViews;)Landroid/widget/RemoteViews$RemoteCollectionItems$Builder;",
			arg0,
			arg1.object()
		);
	}
	inline android::widget::RemoteViews_RemoteCollectionItems RemoteViews_RemoteCollectionItems_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/widget/RemoteViews$RemoteCollectionItems;"
		);
	}
	inline android::widget::RemoteViews_RemoteCollectionItems_Builder RemoteViews_RemoteCollectionItems_Builder::setHasStableIds(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasStableIds",
			"(Z)Landroid/widget/RemoteViews$RemoteCollectionItems$Builder;",
			arg0
		);
	}
	inline android::widget::RemoteViews_RemoteCollectionItems_Builder RemoteViews_RemoteCollectionItems_Builder::setViewTypeCount(jint arg0) const
	{
		return callObjectMethod(
			"setViewTypeCount",
			"(I)Landroid/widget/RemoteViews$RemoteCollectionItems$Builder;",
			arg0
		);
	}
} // namespace android::widget

// Base class headers

