#include "../../java/io/IOException.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "../../java/net/SocketException.hpp"
#include "./ErrnoException.hpp"

namespace android::system
{
	// Fields
	jint ErrnoException::errno_()
	{
		return getField<jint>(
			"errno"
		);
	}
	
	// QAndroidJniObject forward
	ErrnoException::ErrnoException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ErrnoException::ErrnoException(JString arg0, jint arg1)
		: java::lang::Exception(
			"android.system.ErrnoException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	ErrnoException::ErrnoException(JString arg0, jint arg1, JThrowable arg2)
		: java::lang::Exception(
			"android.system.ErrnoException",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jthrowable>()
		) {}
	
	// Methods
	JString ErrnoException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	java::io::IOException ErrnoException::rethrowAsIOException() const
	{
		return callObjectMethod(
			"rethrowAsIOException",
			"()Ljava/io/IOException;"
		);
	}
	java::net::SocketException ErrnoException::rethrowAsSocketException() const
	{
		return callObjectMethod(
			"rethrowAsSocketException",
			"()Ljava/net/SocketException;"
		);
	}
} // namespace android::system

