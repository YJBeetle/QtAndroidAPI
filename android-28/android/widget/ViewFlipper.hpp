#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"
#include "./ViewAnimator.hpp"

namespace android::content
{
	class Context;
}

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
		ViewFlipper(android::content::Context arg0, __JniBaseClass arg1);
		
		// Methods
		jstring getAccessibilityClassName();
		jboolean isAutoStart();
		jboolean isFlipping();
		void setAutoStart(jboolean arg0);
		void setFlipInterval(jint arg0);
		void startFlipping();
		void stopFlipping();
	};
} // namespace android::widget

