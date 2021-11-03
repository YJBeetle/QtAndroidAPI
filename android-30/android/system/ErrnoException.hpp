#pragma once

#include "../../java/lang/Exception.hpp"

namespace java::io
{
	class IOException;
}
class JString;
class JThrowable;
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
		jint errno();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ErrnoException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		ErrnoException(QAndroidJniObject obj);
		
		// Constructors
		ErrnoException(JString arg0, jint arg1);
		ErrnoException(JString arg0, jint arg1, JThrowable arg2);
		
		// Methods
		JString getMessage();
		java::io::IOException rethrowAsIOException();
		java::net::SocketException rethrowAsSocketException();
	};
} // namespace android::system

