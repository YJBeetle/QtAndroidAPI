#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Handler.hpp"
#include "./StreamHandler.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketHandler(const char *className, const char *sig, Ts...agv) : java::util::logging::StreamHandler(className, sig, std::forward<Ts>(agv)...) {}
		SocketHandler(QAndroidJniObject obj);
		
		// Constructors
		SocketHandler();
		SocketHandler(jstring arg0, jint arg1);
		
		// Methods
		void close();
		void publish(java::util::logging::LogRecord arg0);
	};
} // namespace java::util::logging

