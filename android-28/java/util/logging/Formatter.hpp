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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Formatter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Formatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString format(java::util::logging::LogRecord arg0);
		JString formatMessage(java::util::logging::LogRecord arg0);
		JString getHead(java::util::logging::Handler arg0);
		JString getTail(java::util::logging::Handler arg0);
	};
} // namespace java::util::logging

