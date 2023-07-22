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
		RemoteViews_RemoteCollectionItems(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getItemCount() const;
		jlong getItemId(jint arg0) const;
		android::widget::RemoteViews getItemView(jint arg0) const;
		jint getViewTypeCount() const;
		jboolean hasStableIds() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::widget

