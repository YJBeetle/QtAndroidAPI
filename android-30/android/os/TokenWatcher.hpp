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
		
		// QJniObject forward
		template<typename ...Ts> explicit TokenWatcher(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TokenWatcher(QJniObject obj);
		
		// Constructors
		TokenWatcher(android::os::Handler arg0, JString arg1);
		
		// Methods
		void acquire(JObject arg0, JString arg1) const;
		void acquired() const;
		void cleanup(JObject arg0, jboolean arg1) const;
		void dump() const;
		void dump(java::io::PrintWriter arg0) const;
		jboolean isAcquired() const;
		void release(JObject arg0) const;
		void released() const;
	};
} // namespace android::os

