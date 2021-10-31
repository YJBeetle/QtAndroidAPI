#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"


namespace java::net
{
	class ConnectException : public java::net::SocketException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ConnectException(const char *className, const char *sig, Ts...agv) : java::net::SocketException(className, sig, std::forward<Ts>(agv)...) {}
		ConnectException(QJniObject obj);
		
		// Constructors
		ConnectException();
		ConnectException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

