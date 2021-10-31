#pragma once

#include "../../__JniBaseClass.hpp"

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
namespace java::util
{
	class ArrayList;
}

namespace android::widget
{
	class HeaderViewListAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		HeaderViewListAdapter(QAndroidJniObject obj);
		// Constructors
		HeaderViewListAdapter(java::util::ArrayList arg0, java::util::ArrayList arg1, __JniBaseClass arg2);
		HeaderViewListAdapter() = default;
		
		// Methods
		jboolean areAllItemsEnabled();
		jint getCount();
		QAndroidJniObject getFilter();
		jint getFootersCount();
		jint getHeadersCount();
		jobject getItem(jint arg0);
		jlong getItemId(jint arg0);
		jint getItemViewType(jint arg0);
		QAndroidJniObject getView(jint arg0, android::view::View arg1, android::view::ViewGroup arg2);
		jint getViewTypeCount();
		QAndroidJniObject getWrappedAdapter();
		jboolean hasStableIds();
		jboolean isEmpty();
		jboolean isEnabled(jint arg0);
		void registerDataSetObserver(android::database::DataSetObserver arg0);
		jboolean removeFooter(android::view::View arg0);
		jboolean removeHeader(android::view::View arg0);
		void unregisterDataSetObserver(android::database::DataSetObserver arg0);
	};
} // namespace android::widget

