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
		void addOnDrawListener(JObject arg0) const;
		void addOnGlobalFocusChangeListener(JObject arg0) const;
		void addOnGlobalLayoutListener(JObject arg0) const;
		void addOnPreDrawListener(JObject arg0) const;
		void addOnScrollChangedListener(JObject arg0) const;
		void addOnSystemGestureExclusionRectsChangedListener(JObject arg0) const;
		void addOnTouchModeChangeListener(JObject arg0) const;
		void addOnWindowAttachListener(JObject arg0) const;
		void addOnWindowFocusChangeListener(JObject arg0) const;
		void dispatchOnDraw() const;
		void dispatchOnGlobalLayout() const;
		jboolean dispatchOnPreDraw() const;
		jboolean isAlive() const;
		void registerFrameCommitCallback(JObject arg0) const;
		void removeGlobalOnLayoutListener(JObject arg0) const;
		void removeOnDrawListener(JObject arg0) const;
		void removeOnGlobalFocusChangeListener(JObject arg0) const;
		void removeOnGlobalLayoutListener(JObject arg0) const;
		void removeOnPreDrawListener(JObject arg0) const;
		void removeOnScrollChangedListener(JObject arg0) const;
		void removeOnSystemGestureExclusionRectsChangedListener(JObject arg0) const;
		void removeOnTouchModeChangeListener(JObject arg0) const;
		void removeOnWindowAttachListener(JObject arg0) const;
		void removeOnWindowFocusChangeListener(JObject arg0) const;
		jboolean unregisterFrameCommitCallback(JObject arg0) const;
	};
} // namespace android::view

