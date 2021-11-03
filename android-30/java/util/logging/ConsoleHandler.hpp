#pragma once

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ConsoleHandler(const char *className, const char *sig, Ts...agv) : java::util::logging::StreamHandler(className, sig, std::forward<Ts>(agv)...) {}
		ConsoleHandler(QAndroidJniObject obj);
		
		// Constructors
		ConsoleHandler();
		
		// Methods
		void close() const;
		void publish(java::util::logging::LogRecord arg0) const;
	};
} // namespace java::util::logging

