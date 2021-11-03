#pragma once

#include "../../../JObject.hpp"
#include "./Formatter.hpp"

namespace java::lang
{
	class StringBuilder;
}
namespace java::util::logging
{
	class Handler;
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
	class XMLFormatter : public java::util::logging::Formatter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit XMLFormatter(const char *className, const char *sig, Ts...agv) : java::util::logging::Formatter(className, sig, std::forward<Ts>(agv)...) {}
		XMLFormatter(QAndroidJniObject obj);
		
		// Constructors
		XMLFormatter();
		
		// Methods
		jstring format(java::util::logging::LogRecord arg0);
		jstring getHead(java::util::logging::Handler arg0);
		jstring getTail(java::util::logging::Handler arg0);
	};
} // namespace java::util::logging

