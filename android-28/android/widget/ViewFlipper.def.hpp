#pragma once

#include "./ViewAnimator.def.hpp"

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
		ViewFlipper(QJniObject obj) : android::widget::ViewAnimator(obj) {}
		
		// Constructors
		ViewFlipper(android::content::Context arg0);
		ViewFlipper(android::content::Context arg0, JObject arg1);
		
		// Methods
		JString getAccessibilityClassName() const;
		jboolean isAutoStart() const;
		jboolean isFlipping() const;
		void setAutoStart(jboolean arg0) const;
		void setFlipInterval(jint arg0) const;
		void startFlipping() const;
		void stopFlipping() const;
	};
} // namespace android::widget

