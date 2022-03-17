#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class WindowId;
}

namespace android::view
{
	class WindowId_FocusObserver : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WindowId_FocusObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WindowId_FocusObserver(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WindowId_FocusObserver();
		
		// Methods
		void onFocusGained(android::view::WindowId arg0) const;
		void onFocusLost(android::view::WindowId arg0) const;
	};
} // namespace android::view

