#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::java::net
{
	class DatagramSocket;
}
namespace __jni_impl::java::net
{
	class Socket;
}

namespace __jni_impl::android::net
{
	class VpnService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		static jstring SERVICE_INTERFACE();
		static jstring SERVICE_META_DATA_SUPPORTS_ALWAYS_ON();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject prepare(__jni_impl::android::content::Context arg0);
		jboolean isAlwaysOn();
		jboolean isLockdownEnabled();
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		void onRevoke();
		jboolean protect(jint arg0);
		jboolean protect(__jni_impl::java::net::DatagramSocket arg0);
		jboolean protect(__jni_impl::java::net::Socket arg0);
		jboolean setUnderlyingNetworks(jarray arg0);
	};
} // namespace __jni_impl::android::net

#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../../java/net/DatagramSocket.hpp"
#include "../../java/net/Socket.hpp"

namespace __jni_impl::android::net
{
	// Fields
	jstring VpnService::SERVICE_INTERFACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.VpnService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VpnService::SERVICE_META_DATA_SUPPORTS_ALWAYS_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.net.VpnService",
			"SERVICE_META_DATA_SUPPORTS_ALWAYS_ON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void VpnService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.VpnService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject VpnService::prepare(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.net.VpnService",
			"prepare",
			"(Landroid/content/Context;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	jboolean VpnService::isAlwaysOn()
	{
		return __thiz.callMethod<jboolean>(
			"isAlwaysOn",
			"()Z"
		);
	}
	jboolean VpnService::isLockdownEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isLockdownEnabled",
			"()Z"
		);
	}
	QAndroidJniObject VpnService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	void VpnService::onRevoke()
	{
		__thiz.callMethod<void>(
			"onRevoke",
			"()V"
		);
	}
	jboolean VpnService::protect(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"protect",
			"(I)Z",
			arg0
		);
	}
	jboolean VpnService::protect(__jni_impl::java::net::DatagramSocket arg0)
	{
		return __thiz.callMethod<jboolean>(
			"protect",
			"(Ljava/net/DatagramSocket;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean VpnService::protect(__jni_impl::java::net::Socket arg0)
	{
		return __thiz.callMethod<jboolean>(
			"protect",
			"(Ljava/net/Socket;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean VpnService::setUnderlyingNetworks(jarray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setUnderlyingNetworks",
			"([Landroid/net/Network;)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class VpnService : public __jni_impl::android::net::VpnService
	{
	public:
		VpnService(QAndroidJniObject obj) { __thiz = obj; }
		VpnService()
		{
			__constructor();
		}
	};
} // namespace android::net

