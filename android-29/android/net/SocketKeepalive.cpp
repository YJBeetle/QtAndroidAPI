#include "./SocketKeepalive.hpp"

namespace android::net
{
	// Fields
	jint SocketKeepalive::ERROR_HARDWARE_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_HARDWARE_ERROR"
		);
	}
	jint SocketKeepalive::ERROR_INSUFFICIENT_RESOURCES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INSUFFICIENT_RESOURCES"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_INTERVAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_INTERVAL"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_IP_ADDRESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_IP_ADDRESS"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_LENGTH"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_NETWORK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_NETWORK"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_PORT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_PORT"
		);
	}
	jint SocketKeepalive::ERROR_INVALID_SOCKET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_INVALID_SOCKET"
		);
	}
	jint SocketKeepalive::ERROR_SOCKET_NOT_IDLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_SOCKET_NOT_IDLE"
		);
	}
	jint SocketKeepalive::ERROR_UNSUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.net.SocketKeepalive",
			"ERROR_UNSUPPORTED"
		);
	}
	
	// QAndroidJniObject forward
	SocketKeepalive::SocketKeepalive(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void SocketKeepalive::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SocketKeepalive::start(jint arg0)
	{
		callMethod<void>(
			"start",
			"(I)V",
			arg0
		);
	}
	void SocketKeepalive::stop()
	{
		callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace android::net

