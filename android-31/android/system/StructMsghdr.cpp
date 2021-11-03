#include "../../java/net/SocketAddress.hpp"
#include "./StructMsghdr.hpp"

namespace android::system
{
	// Fields
	jarray StructMsghdr::msg_control()
	{
		return getObjectField(
			"msg_control",
			"[Landroid/system/StructCmsghdr;"
		).object<jarray>();
	}
	jint StructMsghdr::msg_flags()
	{
		return getField<jint>(
			"msg_flags"
		);
	}
	jarray StructMsghdr::msg_iov()
	{
		return getObjectField(
			"msg_iov",
			"[Ljava/nio/ByteBuffer;"
		).object<jarray>();
	}
	java::net::SocketAddress StructMsghdr::msg_name()
	{
		return getObjectField(
			"msg_name",
			"Ljava/net/SocketAddress;"
		);
	}
	
	// QJniObject forward
	StructMsghdr::StructMsghdr(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StructMsghdr::StructMsghdr(java::net::SocketAddress arg0, jarray arg1, jarray arg2, jint arg3)
		: JObject(
			"android.system.StructMsghdr",
			"(Ljava/net/SocketAddress;[Ljava/nio/ByteBuffer;[Landroid/system/StructCmsghdr;I)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace android::system

