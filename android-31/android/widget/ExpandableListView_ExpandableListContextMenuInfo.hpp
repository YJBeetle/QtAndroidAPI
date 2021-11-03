#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class View;
}

namespace android::widget
{
	class ExpandableListView_ExpandableListContextMenuInfo : public JObject
	{
	public:
		// Fields
		jlong id();
		jlong packedPosition();
		android::view::View targetView();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExpandableListView_ExpandableListContextMenuInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExpandableListView_ExpandableListContextMenuInfo(QAndroidJniObject obj);
		
		// Constructors
		ExpandableListView_ExpandableListContextMenuInfo(android::view::View arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::widget

