#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class PerformanceHintManager_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PerformanceHintManager_Session(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PerformanceHintManager_Session(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void reportActualWorkDuration(jlong arg0);
		void updateTargetWorkDuration(jlong arg0);
	};
} // namespace android::os

