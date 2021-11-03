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
		PerformanceHintManager_Session(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void reportActualWorkDuration(jlong arg0);
		void updateTargetWorkDuration(jlong arg0);
	};
} // namespace android::os

