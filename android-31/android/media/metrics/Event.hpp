#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}

namespace android::media::metrics
{
	class Event : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Event(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::Bundle getMetricsBundle();
		jlong getTimeSinceCreatedMillis();
	};
} // namespace android::media::metrics

