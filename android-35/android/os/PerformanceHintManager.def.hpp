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
		
		// QJniObject forward
		template<typename ...Ts> explicit PerformanceHintManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PerformanceHintManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::os::PerformanceHintManager_Session createHintSession(JIntArray arg0, jlong arg1) const;
		jlong getPreferredUpdateRateNanos() const;
	};
} // namespace android::os

