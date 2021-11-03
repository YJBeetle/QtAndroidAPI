#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class PerformanceHintManager_Session;
}

namespace android::os
{
	class PerformanceHintManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PerformanceHintManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PerformanceHintManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		android::os::PerformanceHintManager_Session createHintSession(JIntArray arg0, jlong arg1);
		jlong getPreferredUpdateRateNanos();
	};
} // namespace android::os

