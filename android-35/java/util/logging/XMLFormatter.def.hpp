#pragma once

#include "./Formatter.def.hpp"

class JString;
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
		
		// QJniObject forward
		template<typename ...Ts> explicit XMLFormatter(const char *className, const char *sig, Ts...agv) : java::util::logging::Formatter(className, sig, std::forward<Ts>(agv)...) {}
		XMLFormatter(QJniObject obj) : java::util::logging::Formatter(obj) {}
		
		// Constructors
		XMLFormatter();
		
		// Methods
		JString format(java::util::logging::LogRecord arg0) const;
		JString getHead(java::util::logging::Handler arg0) const;
		JString getTail(java::util::logging::Handler arg0) const;
	};
} // namespace java::util::logging

