#pragma once

#include "./ViewAnimator.hpp"

namespace android::content
{
	class Context;
}
class JString;

namespace android::widget
{
	class ViewFlipper : public android::widget::ViewAnimator
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewFlipper(const char *className, const char *sig, Ts...agv) : android::widget::ViewAnimator(className, sig, std::forward<Ts>(agv)...) {}
		ViewFlipper(QJniObject obj);
		
		// Constructors
		ViewFlipper(android::content::Context arg0);
		ViewFlipper(android::content::Context arg0, JObject arg1);
		
		// Methods
		JString getAccessibilityClassName();
		jint getFlipInterval();
		jboolean isAutoStart();
		jboolean isFlipping();
		void setAutoStart(jboolean arg0);
		void setFlipInterval(jint arg0);
		void startFlipping();
		void stopFlipping();
	};
} // namespace android::widget

