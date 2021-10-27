#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class Formatter : public __JniBaseClass
	{
	public:
		// Fields
		
		Formatter(QAndroidJniObject obj);
		// Constructors
		Formatter() = default;
		
		// Methods
		jstring format(java::util::logging::LogRecord arg0);
		jstring formatMessage(java::util::logging::LogRecord arg0);
		jstring getHead(java::util::logging::Handler arg0);
		jstring getTail(java::util::logging::Handler arg0);
	};
} // namespace java::util::logging

