#include "./LocalSocket.hpp"
#include "./LocalSocketAddress.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "./LocalServerSocket.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	LocalServerSocket::LocalServerSocket(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocalServerSocket::LocalServerSocket(java::io::FileDescriptor arg0)
		: JObject(
			"android.net.LocalServerSocket",
			"(Ljava/io/FileDescriptor;)V",
			arg0.object()
		) {}
	LocalServerSocket::LocalServerSocket(JString arg0)
		: JObject(
			"android.net.LocalServerSocket",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::net::LocalSocket LocalServerSocket::accept() const
	{
		return callObjectMethod(
			"accept",
			"()Landroid/net/LocalSocket;"
		);
	}
	void LocalServerSocket::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::io::FileDescriptor LocalServerSocket::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	android::net::LocalSocketAddress LocalServerSocket::getLocalSocketAddress() const
	{
		return callObjectMethod(
			"getLocalSocketAddress",
			"()Landroid/net/LocalSocketAddress;"
		);
	}
} // namespace android::net

