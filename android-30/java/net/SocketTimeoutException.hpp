#pragma once

#include "../../__JniBaseClass.hpp"
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"
#include "../io/InterruptedIOException.hpp"


namespace java::net
{
	class SocketTimeoutException : public java::io::InterruptedIOException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketTimeoutException(const char *className, const char *sig, Ts...agv) : java::io::InterruptedIOException(className, sig, std::forward<Ts>(agv)...) {}
		SocketTimeoutException(QAndroidJniObject obj);
		
		// Constructors
		SocketTimeoutException();
		SocketTimeoutException(jstring arg0);
		
		// Methods
	};
} // namespace java::net

