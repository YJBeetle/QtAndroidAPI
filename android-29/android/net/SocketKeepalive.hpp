#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::net
{
	class SocketKeepalive : public __JniBaseClass
	{
	public:
		// Fields
		static jint ERROR_HARDWARE_ERROR();
		static jint ERROR_INSUFFICIENT_RESOURCES();
		static jint ERROR_INVALID_INTERVAL();
		static jint ERROR_INVALID_IP_ADDRESS();
		static jint ERROR_INVALID_LENGTH();
		static jint ERROR_INVALID_NETWORK();
		static jint ERROR_INVALID_PORT();
		static jint ERROR_INVALID_SOCKET();
		static jint ERROR_SOCKET_NOT_IDLE();
		static jint ERROR_UNSUPPORTED();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void start(jint arg0);
		void stop();
	};
} // namespace __jni_impl::android::net


namespace __jni_impl::android::net
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
	
	// Constructors
	void SocketKeepalive::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.SocketKeepalive",
			"(V)V");
	}
	
	// Methods
	void SocketKeepalive::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void SocketKeepalive::start(jint arg0)
	{
		__thiz.callMethod<void>(
			"start",
			"(I)V",
			arg0
		);
	}
	void SocketKeepalive::stop()
	{
		__thiz.callMethod<void>(
			"stop",
			"()V"
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class SocketKeepalive : public __jni_impl::android::net::SocketKeepalive
	{
	public:
		SocketKeepalive(QAndroidJniObject obj) { __thiz = obj; }
		SocketKeepalive()
		{
			__constructor();
		}
	};
} // namespace android::net

