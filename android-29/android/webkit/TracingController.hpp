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
		
		// QJniObject forward
		template<typename ...Ts> explicit TracingController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TracingController(QJniObject obj);
		
		// Constructors
		TracingController();
		
		// Methods
		static android::webkit::TracingController getInstance();
		jboolean isTracing();
		void start(android::webkit::TracingConfig arg0);
		jboolean stop(java::io::OutputStream arg0, JObject arg1);
	};
} // namespace android::webkit

