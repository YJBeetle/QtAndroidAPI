#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Exception;
}
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
	class Handler : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Handler(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Handler(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void flush();
		jstring getEncoding();
		java::util::logging::ErrorManager getErrorManager();
		__JniBaseClass getFilter();
		java::util::logging::Formatter getFormatter();
		java::util::logging::Level getLevel();
		jboolean isLoggable(java::util::logging::LogRecord arg0);
		void publish(java::util::logging::LogRecord arg0);
		void setEncoding(jstring arg0);
		void setErrorManager(java::util::logging::ErrorManager arg0);
		void setFilter(__JniBaseClass arg0);
		void setFormatter(java::util::logging::Formatter arg0);
		void setLevel(java::util::logging::Level arg0);
	};
} // namespace java::util::logging

