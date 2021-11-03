#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::widget
{
	class RemoteViews;
}

namespace android::widget
{
	class RemoteViews_RemoteCollectionItems : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViews_RemoteCollectionItems(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_RemoteCollectionItems(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getItemCount();
		jlong getItemId(jint arg0);
		android::widget::RemoteViews getItemView(jint arg0);
		jint getViewTypeCount();
		jboolean hasStableIds();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::widget

