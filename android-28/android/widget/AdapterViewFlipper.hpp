#pragma once

#include "./AdapterViewAnimator.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::widget
{
	class AdapterViewFlipper : public android::widget::AdapterViewAnimator
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AdapterViewFlipper(const char *className, const char *sig, Ts...agv) : android::widget::AdapterViewAnimator(className, sig, std::forward<Ts>(agv)...) {}
		AdapterViewFlipper(QAndroidJniObject obj);
		
		// Constructors
		AdapterViewFlipper(android::content::Context arg0);
		AdapterViewFlipper(android::content::Context arg0, JObject arg1);
		AdapterViewFlipper(android::content::Context arg0, JObject arg1, jint arg2);
		AdapterViewFlipper(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void fyiWillBeAdvancedByHostKThx();
		JString getAccessibilityClassName();
		jint getFlipInterval();
		jboolean isAutoStart();
		jboolean isFlipping();
		void setAdapter(JObject arg0);
		void setAutoStart(jboolean arg0);
		void setFlipInterval(jint arg0);
		void showNext();
		void showPrevious();
		void startFlipping();
		void stopFlipping();
	};
} // namespace android::widget

