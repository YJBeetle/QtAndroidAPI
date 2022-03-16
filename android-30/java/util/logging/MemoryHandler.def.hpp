#pragma once

#include "./Handler.def.hpp"

class JArray;
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
		MemoryHandler(QJniObject obj) : java::util::logging::Handler(obj) {}
		
		// Constructors
		MemoryHandler();
		MemoryHandler(java::util::logging::Handler arg0, jint arg1, java::util::logging::Level arg2);
		
		// Methods
		void close() const;
		void flush() const;
		java::util::logging::Level getPushLevel() const;
		jboolean isLoggable(java::util::logging::LogRecord arg0) const;
		void publish(java::util::logging::LogRecord arg0) const;
		void push() const;
		void setPushLevel(java::util::logging::Level arg0) const;
	};
} // namespace java::util::logging

