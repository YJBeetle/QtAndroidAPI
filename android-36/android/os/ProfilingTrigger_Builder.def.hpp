#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class ProfilingTrigger;
}

namespace android::os
{
	class ProfilingTrigger_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProfilingTrigger_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProfilingTrigger_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ProfilingTrigger_Builder(jint arg0);
		
		// Methods
		android::os::ProfilingTrigger build() const;
		android::os::ProfilingTrigger_Builder setRateLimitingPeriodHours(jint arg0) const;
	};
} // namespace android::os

