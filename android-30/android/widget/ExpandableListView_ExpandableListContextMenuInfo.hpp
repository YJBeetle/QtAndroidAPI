#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}

namespace android::widget
{
	class ExpandableListView_ExpandableListContextMenuInfo : public __JniBaseClass
	{
	public:
		// Fields
		jlong id();
		jlong packedPosition();
		android::view::View targetView();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExpandableListView_ExpandableListContextMenuInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ExpandableListView_ExpandableListContextMenuInfo(QJniObject obj);
		
		// Constructors
		ExpandableListView_ExpandableListContextMenuInfo(android::view::View arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::widget

