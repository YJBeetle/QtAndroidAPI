#pragma once

#include "../../JObject.hpp"

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
	class TracingController : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TracingController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TracingController(QAndroidJniObject obj);
		
		// Constructors
		TracingController();
		
		// Methods
		static android::webkit::TracingController getInstance();
		jboolean isTracing() const;
		void start(android::webkit::TracingConfig arg0) const;
		jboolean stop(java::io::OutputStream arg0, JObject arg1) const;
	};
} // namespace android::webkit

