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
		
		Instrumentation_ActivityResult(QAndroidJniObject obj);
		// Constructors
		Instrumentation_ActivityResult(jint &arg0, android::content::Intent &arg1);
		Instrumentation_ActivityResult() = default;
		
		// Methods
		jint getResultCode();
		QAndroidJniObject getResultData();
	};
} // namespace android::app

