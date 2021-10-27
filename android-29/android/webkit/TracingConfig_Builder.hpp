#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::webkit
{
	class TracingConfig;
}

namespace android::webkit
{
	class TracingConfig_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		TracingConfig_Builder(QAndroidJniObject obj);
		// Constructors
		TracingConfig_Builder();
		
		// Methods
		QAndroidJniObject addCategories(jintArray arg0);
		QAndroidJniObject addCategories(jarray arg0);
		QAndroidJniObject addCategories(__JniBaseClass arg0);
		QAndroidJniObject build();
		QAndroidJniObject setTracingMode(jint arg0);
	};
} // namespace android::webkit

