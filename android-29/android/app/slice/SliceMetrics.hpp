#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::app::slice
{
	class SliceMetrics : public __JniBaseClass
	{
	public:
		// Fields
		
		SliceMetrics(QAndroidJniObject obj);
		// Constructors
		SliceMetrics(android::content::Context arg0, android::net::Uri arg1);
		SliceMetrics() = default;
		
		// Methods
		void logHidden();
		void logTouch(jint arg0, android::net::Uri arg1);
		void logVisible();
	};
} // namespace android::app::slice

