#pragma once

#include "../../../JObject.hpp"

namespace android::os::health
{
	class ProcessHealthStats : public JObject
	{
	public:
		// Fields
		static jint MEASUREMENT_ANR_COUNT();
		static jint MEASUREMENT_CRASHES_COUNT();
		static jint MEASUREMENT_FOREGROUND_MS();
		static jint MEASUREMENT_STARTS_COUNT();
		static jint MEASUREMENT_SYSTEM_TIME_MS();
		static jint MEASUREMENT_USER_TIME_MS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ProcessHealthStats(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProcessHealthStats(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::health

