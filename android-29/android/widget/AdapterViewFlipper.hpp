#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"
#include "./AdapterViewAnimator.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class AdapterViewFlipper : public android::widget::AdapterViewAnimator
	{
	public:
		// Fields
		
		AdapterViewFlipper(QAndroidJniObject obj);
		// Constructors
		AdapterViewFlipper(android::content::Context arg0);
		AdapterViewFlipper(android::content::Context arg0, __JniBaseClass arg1);
		AdapterViewFlipper(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		AdapterViewFlipper(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		AdapterViewFlipper() = default;
		
		// Methods
		void fyiWillBeAdvancedByHostKThx();
		jstring getAccessibilityClassName();
		jint getFlipInterval();
		jboolean isAutoStart();
		jboolean isFlipping();
		void setAdapter(__JniBaseClass arg0);
		void setAutoStart(jboolean arg0);
		void setFlipInterval(jint arg0);
		void showNext();
		void showPrevious();
		void startFlipping();
		void stopFlipping();
	};
} // namespace android::widget

