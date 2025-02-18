#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::accessibilityservice
{
	class TouchInteractionController : public JObject
	{
	public:
		// Fields
		static jint STATE_CLEAR();
		static jint STATE_DELEGATING();
		static jint STATE_DRAGGING();
		static jint STATE_TOUCH_EXPLORING();
		static jint STATE_TOUCH_INTERACTING();
		
		// QJniObject forward
		template<typename ...Ts> explicit TouchInteractionController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TouchInteractionController(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString stateToString(jint arg0);
		jint getDisplayId() const;
		jint getMaxPointerCount() const;
		jint getState() const;
		void performClick() const;
		void performLongClickAndStartDrag() const;
		void registerCallback(JObject arg0, JObject arg1) const;
		void requestDelegating() const;
		void requestDragging(jint arg0) const;
		void requestTouchExploration() const;
		void unregisterAllCallbacks() const;
		jboolean unregisterCallback(JObject arg0) const;
	};
} // namespace android::accessibilityservice

