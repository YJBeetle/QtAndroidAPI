#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::widget
{
	class RemoteViews;
}
namespace android::widget
{
	class RemoteViews_RemoteCollectionItems;
}

namespace android::widget
{
	class RemoteViews_RemoteCollectionItems_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViews_RemoteCollectionItems_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_RemoteCollectionItems_Builder(QAndroidJniObject obj);
		
		// Constructors
		RemoteViews_RemoteCollectionItems_Builder();
		
		// Methods
		android::widget::RemoteViews_RemoteCollectionItems_Builder addItem(jlong arg0, android::widget::RemoteViews arg1);
		android::widget::RemoteViews_RemoteCollectionItems build();
		android::widget::RemoteViews_RemoteCollectionItems_Builder setHasStableIds(jboolean arg0);
		android::widget::RemoteViews_RemoteCollectionItems_Builder setViewTypeCount(jint arg0);
	};
} // namespace android::widget

