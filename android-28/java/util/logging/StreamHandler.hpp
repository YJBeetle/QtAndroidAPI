#pragma once

#include "./Handler.hpp"

namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class Writer;
}
class JString;
namespace java::util::logging
{
	class Formatter;
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
	class StreamHandler : public java::util::logging::Handler
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StreamHandler(const char *className, const char *sig, Ts...agv) : java::util::logging::Handler(className, sig, std::forward<Ts>(agv)...) {}
		StreamHandler(QAndroidJniObject obj) : java::util::logging::Handler(obj) {}
		
		// Constructors
		StreamHandler();
		StreamHandler(java::io::OutputStream arg0, java::util::logging::Formatter arg1);
		
		// Methods
		void close() const;
		void flush() const;
		jboolean isLoggable(java::util::logging::LogRecord arg0) const;
		void publish(java::util::logging::LogRecord arg0) const;
		void setEncoding(JString arg0) const;
	};
} // namespace java::util::logging

