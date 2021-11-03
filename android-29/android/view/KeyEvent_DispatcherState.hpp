#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class KeyEvent;
}

namespace android::view
{
	class KeyEvent_DispatcherState : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyEvent_DispatcherState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyEvent_DispatcherState(QJniObject obj);
		
		// Constructors
		KeyEvent_DispatcherState();
		
		// Methods
		void handleUpEvent(android::view::KeyEvent arg0);
		jboolean isTracking(android::view::KeyEvent arg0);
		void performedLongPress(android::view::KeyEvent arg0);
		void reset();
		void reset(jobject arg0);
		void startTracking(android::view::KeyEvent arg0, jobject arg1);
	};
} // namespace android::view

