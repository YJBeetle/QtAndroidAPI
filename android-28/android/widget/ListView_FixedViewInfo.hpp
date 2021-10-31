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
		android::view::View view();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListView_FixedViewInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ListView_FixedViewInfo(QAndroidJniObject obj);
		
		// Constructors
		ListView_FixedViewInfo(android::widget::ListView arg0);
		
		// Methods
	};
} // namespace android::widget

