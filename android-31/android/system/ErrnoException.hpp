#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"

namespace java::io
{
	class IOException;
}
namespace java::net
{
	class SocketException;
}

namespace android::system
{
	class ErrnoException : public java::lang::Exception
	{
	public:
		// Fields
		jint _errno();
		
		// QJniObject forward
		template<typename ...Ts> explicit ErrnoException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ErrnoException(QJniObject obj);
		
		// Constructors
		ErrnoException(jstring arg0, jint arg1);
		ErrnoException(jstring arg0, jint arg1, jthrowable arg2);
		
		// Methods
		jstring getMessage();
		java::io::IOException rethrowAsIOException();
		java::net::SocketException rethrowAsSocketException();
	};
} // namespace android::system

