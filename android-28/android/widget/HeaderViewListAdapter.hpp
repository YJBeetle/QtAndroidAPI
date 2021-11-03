#pragma once

#include "../../JObject.hpp"

namespace android::database
{
	class DataSetObserver;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class ViewGroup;
}
namespace android::widget
{
	class Filter;
}
class JObject;
namespace java::util
{
	class ArrayList;
}

namespace android::widget
{
	class HeaderViewListAdapter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HeaderViewListAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HeaderViewListAdapter(QAndroidJniObject obj);
		
		// Constructors
		HeaderViewListAdapter(java::util::ArrayList arg0, java::util::ArrayList arg1, JObject arg2);
		
		// Methods
		jboolean areAllItemsEnabled();
		jint getCount();
		android::widget::Filter getFilter();
		jint getFootersCount();
		jint getHeadersCount();
		JObject getItem(jint arg0);
		jlong getItemId(jint arg0);
		jint getItemViewType(jint arg0);
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		jint getViewTypeCount();
		JObject getWrappedAdapter();
		jboolean hasStableIds();
		jboolean isEmpty();
		jboolean isEnabled(jint arg0);
		void registerDataSetObserver(android::database::DataSetObserver arg0);
		jboolean removeFooter(android::view::View arg0);
		jboolean removeHeader(android::view::View arg0);
		void unregisterDataSetObserver(android::database::DataSetObserver arg0);
	};
} // namespace android::widget

