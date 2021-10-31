#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}

namespace android::app
{
	class Instrumentation_ActivityResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Instrumentation_ActivityResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Instrumentation_ActivityResult(QAndroidJniObject obj);
		
		// Constructors
		Instrumentation_ActivityResult(jint arg0, android::content::Intent arg1);
		
		// Methods
		jint getResultCode();
		QAndroidJniObject getResultData();
	};
} // namespace android::app

