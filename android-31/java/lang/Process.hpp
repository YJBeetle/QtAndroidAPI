#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::util::concurrent
{
	class CompletableFuture;
}
namespace java::util::concurrent
{
	class TimeUnit;
}

namespace java::lang
{
	class Process : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Process(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Process(QAndroidJniObject obj);
		
		// Constructors
		Process();
		
		// Methods
		__JniBaseClass children();
		__JniBaseClass descendants();
		void destroy();
		java::lang::Process destroyForcibly();
		jint exitValue();
		java::io::InputStream getErrorStream();
		java::io::InputStream getInputStream();
		java::io::OutputStream getOutputStream();
		__JniBaseClass info();
		jboolean isAlive();
		java::util::concurrent::CompletableFuture onExit();
		jlong pid();
		jboolean supportsNormalTermination();
		__JniBaseClass toHandle();
		jboolean waitFor(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jint waitFor();
	};
} // namespace java::lang

