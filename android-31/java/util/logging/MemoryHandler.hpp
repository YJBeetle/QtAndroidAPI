#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Handler.hpp"

namespace java::util::logging
{
	class Handler;
}
namespace java::util::logging
{
	class Level;
}
namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class MemoryHandler : public java::util::logging::Handler
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MemoryHandler(const char *className, const char *sig, Ts...agv) : java::util::logging::Handler(className, sig, std::forward<Ts>(agv)...) {}
		MemoryHandler(QJniObject obj);
		
		// Constructors
		MemoryHandler();
		MemoryHandler(java::util::logging::Handler arg0, jint arg1, java::util::logging::Level arg2);
		
		// Methods
		void close();
		void flush();
		java::util::logging::Level getPushLevel();
		jboolean isLoggable(java::util::logging::LogRecord arg0);
		void publish(java::util::logging::LogRecord arg0);
		void push();
		void setPushLevel(java::util::logging::Level arg0);
	};
} // namespace java::util::logging

