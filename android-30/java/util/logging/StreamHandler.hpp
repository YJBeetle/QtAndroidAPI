#pragma once

#include "../../../JObject.hpp"
#include "./Handler.hpp"

namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class Writer;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamHandler(const char *className, const char *sig, Ts...agv) : java::util::logging::Handler(className, sig, std::forward<Ts>(agv)...) {}
		StreamHandler(QJniObject obj);
		
		// Constructors
		StreamHandler();
		StreamHandler(java::io::OutputStream arg0, java::util::logging::Formatter arg1);
		
		// Methods
		void close();
		void flush();
		jboolean isLoggable(java::util::logging::LogRecord arg0);
		void publish(java::util::logging::LogRecord arg0);
		void setEncoding(jstring arg0);
	};
} // namespace java::util::logging

