#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::view
{
	class View;
}
namespace android::widget
{
	class ListView;
}

namespace android::widget
{
	class ListView_FixedViewInfo : public __JniBaseClass
	{
	public:
		// Fields
		jobject data();
		jboolean isSelectable();
		QAndroidJniObject view();
		
		ListView_FixedViewInfo(QAndroidJniObject obj);
		// Constructors
		ListView_FixedViewInfo(android::widget::ListView &arg0);
		ListView_FixedViewInfo() = default;
		
		// Methods
	};
} // namespace android::widget

