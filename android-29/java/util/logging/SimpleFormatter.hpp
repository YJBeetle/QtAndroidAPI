#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Formatter.hpp"

namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class SimpleFormatter : public java::util::logging::Formatter
	{
	public:
		// Fields
		
		SimpleFormatter(QAndroidJniObject obj);
		// Constructors
		SimpleFormatter();
		
		// Methods
		jstring format(java::util::logging::LogRecord arg0);
	};
} // namespace java::util::logging

