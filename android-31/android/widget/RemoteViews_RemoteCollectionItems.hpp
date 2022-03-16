#pragma once

#include "../os/Parcel.def.hpp"
#include "./RemoteViews.def.hpp"
#include "./RemoteViews_RemoteCollectionItems.def.hpp"

namespace android::widget
{
	// Fields
	inline JObject RemoteViews_RemoteCollectionItems::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.RemoteViews$RemoteCollectionItems",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RemoteViews_RemoteCollectionItems::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint RemoteViews_RemoteCollectionItems::getItemCount() const
	{
		return callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	inline jlong RemoteViews_RemoteCollectionItems::getItemId(jint arg0) const
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	inline android::widget::RemoteViews RemoteViews_RemoteCollectionItems::getItemView(jint arg0) const
	{
		return callObjectMethod(
			"getItemView",
			"(I)Landroid/widget/RemoteViews;",
			arg0
		);
	}
	inline jint RemoteViews_RemoteCollectionItems::getViewTypeCount() const
	{
		return callMethod<jint>(
			"getViewTypeCount",
			"()I"
		);
	}
	inline jboolean RemoteViews_RemoteCollectionItems::hasStableIds() const
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	inline void RemoteViews_RemoteCollectionItems::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

// Base class headers

