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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Process(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Process(QAndroidJniObject obj);
		
		// Constructors
		Process();
		
		// Methods
		JObject children() const;
		JObject descendants() const;
		void destroy() const;
		java::lang::Process destroyForcibly() const;
		jint exitValue() const;
		java::io::InputStream getErrorStream() const;
		java::io::InputStream getInputStream() const;
		java::io::OutputStream getOutputStream() const;
		JObject info() const;
		jboolean isAlive() const;
		java::util::concurrent::CompletableFuture onExit() const;
		jlong pid() const;
		jboolean supportsNormalTermination() const;
		JObject toHandle() const;
		jboolean waitFor(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		jint waitFor() const;
	};
} // namespace java::lang

