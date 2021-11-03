#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class KeyEvent;
}
class JObject;

namespace android::view
{
	class KeyEvent_DispatcherState : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyEvent_DispatcherState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyEvent_DispatcherState(QAndroidJniObject obj);
		
		// Constructors
		KeyEvent_DispatcherState();
		
		// Methods
		void handleUpEvent(android::view::KeyEvent arg0) const;
		jboolean isTracking(android::view::KeyEvent arg0) const;
		void performedLongPress(android::view::KeyEvent arg0) const;
		void reset() const;
		void reset(JObject arg0) const;
		void startTracking(android::view::KeyEvent arg0, JObject arg1) const;
	};
} // namespace android::view

