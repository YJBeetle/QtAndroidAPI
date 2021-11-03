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
		jboolean areAllItemsEnabled() const;
		jint getCount() const;
		android::widget::Filter getFilter() const;
		jint getFootersCount() const;
		jint getHeadersCount() const;
		JObject getItem(jint arg0) const;
		jlong getItemId(jint arg0) const;
		jint getItemViewType(jint arg0) const;
		android::view::View getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2) const;
		jint getViewTypeCount() const;
		JObject getWrappedAdapter() const;
		jboolean hasStableIds() const;
		jboolean isEmpty() const;
		jboolean isEnabled(jint arg0) const;
		void registerDataSetObserver(android::database::DataSetObserver arg0) const;
		jboolean removeFooter(android::view::View arg0) const;
		jboolean removeHeader(android::view::View arg0) const;
		void unregisterDataSetObserver(android::database::DataSetObserver arg0) const;
	};
} // namespace android::widget

