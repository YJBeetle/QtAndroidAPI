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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TracingController(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TracingController(QAndroidJniObject obj);
		
		// Constructors
		TracingController();
		
		// Methods
		static android::webkit::TracingController getInstance();
		jboolean isTracing();
		void start(android::webkit::TracingConfig arg0);
		jboolean stop(java::io::OutputStream arg0, __JniBaseClass arg1);
	};
} // namespace android::webkit

