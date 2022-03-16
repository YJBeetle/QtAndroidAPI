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
		AdapterViewFlipper(QAndroidJniObject obj) : android::widget::AdapterViewAnimator(obj) {}
		
		// Constructors
		AdapterViewFlipper(android::content::Context arg0);
		AdapterViewFlipper(android::content::Context arg0, JObject arg1);
		AdapterViewFlipper(android::content::Context arg0, JObject arg1, jint arg2);
		AdapterViewFlipper(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void fyiWillBeAdvancedByHostKThx() const;
		JString getAccessibilityClassName() const;
		jint getFlipInterval() const;
		jboolean isAutoStart() const;
		jboolean isFlipping() const;
		void setAdapter(JObject arg0) const;
		void setAutoStart(jboolean arg0) const;
		void setFlipInterval(jint arg0) const;
		void showNext() const;
		void showPrevious() const;
		void startFlipping() const;
		void stopFlipping() const;
	};
} // namespace android::widget

