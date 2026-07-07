#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class Activity;
}

namespace android::window
{
	class SystemOnBackInvokedCallbacks : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SystemOnBackInvokedCallbacks(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemOnBackInvokedCallbacks(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject finishAndRemoveTaskCallback(android::app::Activity arg0);
		static JObject moveTaskToBackCallback(android::app::Activity arg0);
	};
} // namespace android::window

