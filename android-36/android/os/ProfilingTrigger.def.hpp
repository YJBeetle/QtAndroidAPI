#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class ProfilingTrigger : public JObject
	{
	public:
		// Fields
		static jint TRIGGER_TYPE_ANR();
		static jint TRIGGER_TYPE_APP_FULLY_DRAWN();
		static jint TRIGGER_TYPE_NONE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProfilingTrigger(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProfilingTrigger(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getRateLimitingPeriodHours() const;
		jint getTriggerType() const;
	};
} // namespace android::os

