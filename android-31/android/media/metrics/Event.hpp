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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Event(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Event(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::Bundle getMetricsBundle() const;
		jlong getTimeSinceCreatedMillis() const;
	};
} // namespace android::media::metrics

