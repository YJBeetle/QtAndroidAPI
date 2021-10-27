#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::webkit
{
	class TracingConfig;
}
namespace java::io
{
	class OutputStream;
}

namespace android::webkit
{
	class TracingController : public __JniBaseClass
	{
	public:
		// Fields
		
		TracingController(QAndroidJniObject obj);
		// Constructors
		TracingController();
		
		// Methods
		static QAndroidJniObject getInstance();
		jboolean isTracing();
		void start(android::webkit::TracingConfig arg0);
		jboolean stop(java::io::OutputStream arg0, __JniBaseClass arg1);
	};
} // namespace android::webkit

