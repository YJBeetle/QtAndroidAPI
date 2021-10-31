#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Handler;
}
namespace java::io
{
	class PrintWriter;
}

namespace android::os
{
	class TokenWatcher : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TokenWatcher(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TokenWatcher(QAndroidJniObject obj);
		
		// Constructors
		TokenWatcher(android::os::Handler arg0, jstring arg1);
		
		// Methods
		void acquire(__JniBaseClass arg0, jstring arg1);
		void acquired();
		void cleanup(__JniBaseClass arg0, jboolean arg1);
		void dump();
		void dump(java::io::PrintWriter arg0);
		jboolean isAcquired();
		void release(__JniBaseClass arg0);
		void released();
	};
} // namespace android::os

