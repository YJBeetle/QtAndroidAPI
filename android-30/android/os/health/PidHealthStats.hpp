#pragma once

#include "../../../JObject.hpp"

namespace android::os::health
{
	class PidHealthStats : public JObject
	{
	public:
		// Fields
		static jint MEASUREMENT_WAKE_NESTING_COUNT();
		static jint MEASUREMENT_WAKE_START_MS();
		static jint MEASUREMENT_WAKE_SUM_MS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PidHealthStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PidHealthStats(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::health

