#pragma once

#include "./StreamHandler.def.hpp"

class JString;
namespace java::net
{
	class Socket;
}
namespace java::util::logging
{
	class LogRecord;
}

namespace java::util::logging
{
	class SocketHandler : public java::util::logging::StreamHandler
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SocketHandler(const char *className, const char *sig, Ts...agv) : java::util::logging::StreamHandler(className, sig, std::forward<Ts>(agv)...) {}
		SocketHandler(QJniObject obj) : java::util::logging::StreamHandler(obj) {}
		
		// Constructors
		SocketHandler();
		SocketHandler(JString arg0, jint arg1);
		
		// Methods
		void close() const;
		void publish(java::util::logging::LogRecord arg0) const;
	};
} // namespace java::util::logging

