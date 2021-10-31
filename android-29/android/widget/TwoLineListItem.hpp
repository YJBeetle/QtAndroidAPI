#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./RelativeLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::widget
{
	class TextView;
}

namespace android::widget
{
	class TwoLineListItem : public android::widget::RelativeLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TwoLineListItem(const char *className, const char *sig, Ts...agv) : android::widget::RelativeLayout(className, sig, std::forward<Ts>(agv)...) {}
		TwoLineListItem(QAndroidJniObject obj);
		
		// Constructors
		TwoLineListItem(android::content::Context arg0);
		TwoLineListItem(android::content::Context arg0, __JniBaseClass arg1);
		TwoLineListItem(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		TwoLineListItem(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		QAndroidJniObject getText1();
		QAndroidJniObject getText2();
	};
} // namespace android::widget

