#pragma once

#include "../../../JObject.hpp"

class JString;
namespace java::util::logging
{
	class Handler;
}
namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class Formatter : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Formatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Formatter(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString format(java::util::logging::LogRecord arg0) const;
		JString formatMessage(java::util::logging::LogRecord arg0) const;
		JString getHead(java::util::logging::Handler arg0) const;
		JString getTail(java::util::logging::Handler arg0) const;
	};
} // namespace java::util::logging

