#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::os::health
{
	class PidHealthStats : public __JniBaseClass
	{
	public:
		// Fields
		static jint MEASUREMENT_WAKE_NESTING_COUNT();
		static jint MEASUREMENT_WAKE_START_MS();
		static jint MEASUREMENT_WAKE_SUM_MS();
		
		// QJniObject forward
		template<typename ...Ts> explicit PidHealthStats(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PidHealthStats(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::health

