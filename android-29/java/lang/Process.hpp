#pragma once

#include "../../JObject.hpp"

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
	class Process : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Process(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Process(QJniObject obj);
		
		// Constructors
		Process();
		
		// Methods
		JObject children();
		JObject descendants();
		void destroy();
		java::lang::Process destroyForcibly();
		jint exitValue();
		java::io::InputStream getErrorStream();
		java::io::InputStream getInputStream();
		java::io::OutputStream getOutputStream();
		JObject info();
		jboolean isAlive();
		java::util::concurrent::CompletableFuture onExit();
		jlong pid();
		jboolean supportsNormalTermination();
		JObject toHandle();
		jboolean waitFor(jlong arg0, java::util::concurrent::TimeUnit arg1);
		jint waitFor();
	};
} // namespace java::lang

