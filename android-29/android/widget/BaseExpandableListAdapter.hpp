#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::database
{
	class DataSetObserver;
}

namespace android::widget
{
	class BaseExpandableListAdapter : public __JniBaseClass
	{
	public:
		// Fields
		
		BaseExpandableListAdapter(QAndroidJniObject obj);
		// Constructors
		BaseExpandableListAdapter();
		
		// Methods
		jboolean areAllItemsEnabled();
		jint getChildType(jint arg0, jint arg1);
		jint getChildTypeCount();
		jlong getCombinedChildId(jlong arg0, jlong arg1);
		jlong getCombinedGroupId(jlong arg0);
		jint getGroupType(jint arg0);
		jint getGroupTypeCount();
		jboolean isEmpty();
		void notifyDataSetChanged();
		void notifyDataSetInvalidated();
		void onGroupCollapsed(jint arg0);
		void onGroupExpanded(jint arg0);
		void registerDataSetObserver(android::database::DataSetObserver arg0);
		void unregisterDataSetObserver(android::database::DataSetObserver arg0);
	};
} // namespace android::widget

