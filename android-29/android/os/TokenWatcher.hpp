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
		
		TokenWatcher(QAndroidJniObject obj);
		// Constructors
		TokenWatcher(android::os::Handler &arg0, jstring &arg1);
		TokenWatcher(android::os::Handler &arg0, const QString &arg1);
		TokenWatcher() = default;
		
		// Methods
		void acquire(__JniBaseClass arg0, jstring arg1);
		void acquire(__JniBaseClass arg0, const QString &arg1);
		void acquired();
		void cleanup(__JniBaseClass arg0, jboolean arg1);
		void dump();
		void dump(java::io::PrintWriter arg0);
		jboolean isAcquired();
		void release(__JniBaseClass arg0);
		void released();
	};
} // namespace android::os

