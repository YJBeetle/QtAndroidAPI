#pragma once

#include "../../JObject.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "./SocketException.hpp"


namespace java::net
{
	class BindException : public java::net::SocketException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BindException(const char *className, const char *sig, Ts...agv) : java::net::SocketException(className, sig, std::forward<Ts>(agv)...) {}
		BindException(QAndroidJniObject obj);
		
		// Constructors
		BindException();
		BindException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

