#include "../os/Parcel.hpp"
#include "./RemoteViews.hpp"
#include "./RemoteViews_RemoteCollectionItems.hpp"

namespace android::widget
{
	// Fields
	JObject RemoteViews_RemoteCollectionItems::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.RemoteViews$RemoteCollectionItems",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	RemoteViews_RemoteCollectionItems::RemoteViews_RemoteCollectionItems(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint RemoteViews_RemoteCollectionItems::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint RemoteViews_RemoteCollectionItems::getItemCount() const
	{
		return callMethod<jint>(
			"getItemCount",
			"()I"
		);
	}
	jlong RemoteViews_RemoteCollectionItems::getItemId(jint arg0) const
	{
		return callMethod<jlong>(
			"getItemId",
			"(I)J",
			arg0
		);
	}
	android::widget::RemoteViews RemoteViews_RemoteCollectionItems::getItemView(jint arg0) const
	{
		return callObjectMethod(
			"getItemView",
			"(I)Landroid/widget/RemoteViews;",
			arg0
		);
	}
	jint RemoteViews_RemoteCollectionItems::getViewTypeCount() const
	{
		return callMethod<jint>(
			"getViewTypeCount",
			"()I"
		);
	}
	jboolean RemoteViews_RemoteCollectionItems::hasStableIds() const
	{
		return callMethod<jboolean>(
			"hasStableIds",
			"()Z"
		);
	}
	void RemoteViews_RemoteCollectionItems::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

