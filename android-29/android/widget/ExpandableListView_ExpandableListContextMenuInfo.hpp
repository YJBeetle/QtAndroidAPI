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
		
		ExpandableListView_ExpandableListContextMenuInfo(QAndroidJniObject obj);
		// Constructors
		ExpandableListView_ExpandableListContextMenuInfo(android::view::View &arg0, jlong &arg1, jlong &arg2);
		ExpandableListView_ExpandableListContextMenuInfo() = default;
		
		// Methods
	};
} // namespace android::widget

