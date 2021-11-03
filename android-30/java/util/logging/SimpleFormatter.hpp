#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleFormatter(const char *className, const char *sig, Ts...agv) : java::util::logging::Formatter(className, sig, std::forward<Ts>(agv)...) {}
		SimpleFormatter(QAndroidJniObject obj);
		
		// Constructors
		SimpleFormatter();
		
		// Methods
		jstring format(java::util::logging::LogRecord arg0);
	};
} // namespace java::util::logging

