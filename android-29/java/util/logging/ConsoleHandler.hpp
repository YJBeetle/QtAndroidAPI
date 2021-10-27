#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Handler.hpp"
#include "./StreamHandler.hpp"

namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class ConsoleHandler : public java::util::logging::StreamHandler
	{
	public:
		// Fields
		
		ConsoleHandler(QAndroidJniObject obj);
		// Constructors
		ConsoleHandler();
		
		// Methods
		void close();
		void publish(java::util::logging::LogRecord arg0);
	};
} // namespace java::util::logging

