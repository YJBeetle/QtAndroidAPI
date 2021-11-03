#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Handler;
}
namespace java::io
{
	class PrintWriter;
}
class JString;

namespace android::os
{
	class TokenWatcher : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TokenWatcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TokenWatcher(QAndroidJniObject obj);
		
		// Constructors
		TokenWatcher(android::os::Handler arg0, JString arg1);
		
		// Methods
		void acquire(JObject arg0, JString arg1);
		void acquired();
		void cleanup(JObject arg0, jboolean arg1);
		void dump();
		void dump(java::io::PrintWriter arg0);
		jboolean isAcquired();
		void release(JObject arg0);
		void released();
	};
} // namespace android::os

