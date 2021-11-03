#pragma once

#include "../../JObject.hpp"

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
	class RemoteViews_RemoteCollectionItems_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteViews_RemoteCollectionItems_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_RemoteCollectionItems_Builder(QJniObject obj);
		
		// Constructors
		RemoteViews_RemoteCollectionItems_Builder();
		
		// Methods
		android::widget::RemoteViews_RemoteCollectionItems_Builder addItem(jlong arg0, android::widget::RemoteViews arg1) const;
		android::widget::RemoteViews_RemoteCollectionItems build() const;
		android::widget::RemoteViews_RemoteCollectionItems_Builder setHasStableIds(jboolean arg0) const;
		android::widget::RemoteViews_RemoteCollectionItems_Builder setViewTypeCount(jint arg0) const;
	};
} // namespace android::widget

