#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}

namespace android::view
{
	class ViewTreeObserver : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ViewTreeObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ViewTreeObserver(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addOnDrawListener(JObject arg0);
		void addOnGlobalFocusChangeListener(JObject arg0);
		void addOnGlobalLayoutListener(JObject arg0);
		void addOnPreDrawListener(JObject arg0);
		void addOnScrollChangedListener(JObject arg0);
		void addOnTouchModeChangeListener(JObject arg0);
		void addOnWindowAttachListener(JObject arg0);
		void addOnWindowFocusChangeListener(JObject arg0);
		void dispatchOnDraw();
		void dispatchOnGlobalLayout();
		jboolean dispatchOnPreDraw();
		jboolean isAlive();
		void removeGlobalOnLayoutListener(JObject arg0);
		void removeOnDrawListener(JObject arg0);
		void removeOnGlobalFocusChangeListener(JObject arg0);
		void removeOnGlobalLayoutListener(JObject arg0);
		void removeOnPreDrawListener(JObject arg0);
		void removeOnScrollChangedListener(JObject arg0);
		void removeOnTouchModeChangeListener(JObject arg0);
		void removeOnWindowAttachListener(JObject arg0);
		void removeOnWindowFocusChangeListener(JObject arg0);
	};
} // namespace android::view

