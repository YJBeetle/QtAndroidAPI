#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class Exception;
}
class JString;
namespace java::util::logging
{
	class ErrorManager;
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
	class LogManager;
}
namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class Handler : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Handler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Handler(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		void flush() const;
		JString getEncoding() const;
		java::util::logging::ErrorManager getErrorManager() const;
		JObject getFilter() const;
		java::util::logging::Formatter getFormatter() const;
		java::util::logging::Level getLevel() const;
		jboolean isLoggable(java::util::logging::LogRecord arg0) const;
		void publish(java::util::logging::LogRecord arg0) const;
		void setEncoding(JString arg0) const;
		void setErrorManager(java::util::logging::ErrorManager arg0) const;
		void setFilter(JObject arg0) const;
		void setFormatter(java::util::logging::Formatter arg0) const;
		void setLevel(java::util::logging::Level arg0) const;
	};
} // namespace java::util::logging

