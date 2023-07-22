#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class PerformanceHintManager_Session : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PerformanceHintManager_Session(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PerformanceHintManager_Session(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void reportActualWorkDuration(jlong arg0) const;
		void updateTargetWorkDuration(jlong arg0) const;
	};
} // namespace android::os

