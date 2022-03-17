#pragma once

#include "../../JObject.hpp"

namespace android::database
{
	class DataSetObserver;
}

namespace android::widget
{
	class BaseExpandableListAdapter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BaseExpandableListAdapter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BaseExpandableListAdapter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		BaseExpandableListAdapter();
		
		// Methods
		jboolean areAllItemsEnabled() const;
		jint getChildType(jint arg0, jint arg1) const;
		jint getChildTypeCount() const;
		jlong getCombinedChildId(jlong arg0, jlong arg1) const;
		jlong getCombinedGroupId(jlong arg0) const;
		jint getGroupType(jint arg0) const;
		jint getGroupTypeCount() const;
		jboolean isEmpty() const;
		void notifyDataSetChanged() const;
		void notifyDataSetInvalidated() const;
		void onGroupCollapsed(jint arg0) const;
		void onGroupExpanded(jint arg0) const;
		void registerDataSetObserver(android::database::DataSetObserver arg0) const;
		void unregisterDataSetObserver(android::database::DataSetObserver arg0) const;
	};
} // namespace android::widget

