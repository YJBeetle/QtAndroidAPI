#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class TriggerEvent;
}

namespace android::hardware
{
	class TriggerEventListener : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TriggerEventListener(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TriggerEventListener(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TriggerEventListener();
		
		// Methods
		void onTrigger(android::hardware::TriggerEvent arg0) const;
	};
} // namespace android::hardware

