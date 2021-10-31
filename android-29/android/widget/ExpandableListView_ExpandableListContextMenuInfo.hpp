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
		QAndroidJniObject targetView();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ExpandableListView_ExpandableListContextMenuInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ExpandableListView_ExpandableListContextMenuInfo(QAndroidJniObject obj);
		
		// Constructors
		ExpandableListView_ExpandableListContextMenuInfo(android::view::View arg0, jlong arg1, jlong arg2);
		
		// Methods
	};
} // namespace android::widget

