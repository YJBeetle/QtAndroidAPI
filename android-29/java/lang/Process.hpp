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
		
		Process(QAndroidJniObject obj);
		// Constructors
		Process();
		
		// Methods
		QAndroidJniObject children();
		QAndroidJniObject descendants();
		void destroy();
		QAndroidJniObject destroyForcibly();
		jint exitValue();
		QAndroidJniObject getErrorStream();
		QAndroidJniObject getInputStream();
		QAndroidJniObject getOutputStream();
		QAndroidJniObject info();
		jboolean isAlive();
		QAndroidJniObject onExit();
		jlong pid();
		jboolean supportsNormalTermination();
		QAndroidJniObject toHandle();
		jboolean waitFor(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jint waitFor();
	};
} // namespace java::lang

