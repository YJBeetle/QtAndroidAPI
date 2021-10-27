#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::net
{
	class ProxyInfo;
}
namespace __jni_impl::android::net
{
	class VpnService;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::net
{
	class VpnService_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::net::VpnService arg0);
		
		// Methods
		QAndroidJniObject addAddress(jstring arg0, jint arg1);
		QAndroidJniObject addAddress(const QString &arg0, jint arg1);
		QAndroidJniObject addAddress(__jni_impl::java::net::InetAddress arg0, jint arg1);
		QAndroidJniObject addAllowedApplication(jstring arg0);
		QAndroidJniObject addAllowedApplication(const QString &arg0);
		QAndroidJniObject addDisallowedApplication(jstring arg0);
		QAndroidJniObject addDisallowedApplication(const QString &arg0);
		QAndroidJniObject addDnsServer(jstring arg0);
		QAndroidJniObject addDnsServer(const QString &arg0);
		QAndroidJniObject addDnsServer(__jni_impl::java::net::InetAddress arg0);
		QAndroidJniObject addRoute(jstring arg0, jint arg1);
		QAndroidJniObject addRoute(const QString &arg0, jint arg1);
		QAndroidJniObject addRoute(__jni_impl::java::net::InetAddress arg0, jint arg1);
		QAndroidJniObject addSearchDomain(jstring arg0);
		QAndroidJniObject addSearchDomain(const QString &arg0);
		QAndroidJniObject allowBypass();
		QAndroidJniObject allowFamily(jint arg0);
		QAndroidJniObject establish();
		QAndroidJniObject setBlocking(jboolean arg0);
		QAndroidJniObject setConfigureIntent(__jni_impl::android::app::PendingIntent arg0);
		QAndroidJniObject setHttpProxy(__jni_impl::android::net::ProxyInfo arg0);
		QAndroidJniObject setMetered(jboolean arg0);
		QAndroidJniObject setMtu(jint arg0);
		QAndroidJniObject setSession(jstring arg0);
		QAndroidJniObject setSession(const QString &arg0);
		QAndroidJniObject setUnderlyingNetworks(jarray arg0);
	};
} // namespace __jni_impl::android::net

#include "../app/PendingIntent.hpp"
#include "./ProxyInfo.hpp"
#include "./VpnService.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/net/InetAddress.hpp"

namespace __jni_impl::android::net
{
	// Fields
	
	// Constructors
	void VpnService_Builder::__constructor(__jni_impl::android::net::VpnService arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.VpnService$Builder",
			"(Landroid/net/VpnService;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject VpnService_Builder::addAddress(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addAddress",
			"(Ljava/lang/String;I)Landroid/net/VpnService$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addAddress(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addAddress",
			"(Ljava/lang/String;I)Landroid/net/VpnService$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addAddress(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addAddress",
			"(Ljava/net/InetAddress;I)Landroid/net/VpnService$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addAllowedApplication(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addAllowedApplication",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::addAllowedApplication(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addAllowedApplication",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject VpnService_Builder::addDisallowedApplication(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addDisallowedApplication",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::addDisallowedApplication(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addDisallowedApplication",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject VpnService_Builder::addDnsServer(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addDnsServer",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::addDnsServer(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addDnsServer",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject VpnService_Builder::addDnsServer(__jni_impl::java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"addDnsServer",
			"(Ljava/net/InetAddress;)Landroid/net/VpnService$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject VpnService_Builder::addRoute(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addRoute",
			"(Ljava/lang/String;I)Landroid/net/VpnService$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addRoute(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addRoute",
			"(Ljava/lang/String;I)Landroid/net/VpnService$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addRoute(__jni_impl::java::net::InetAddress arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addRoute",
			"(Ljava/net/InetAddress;I)Landroid/net/VpnService$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject VpnService_Builder::addSearchDomain(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"addSearchDomain",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::addSearchDomain(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"addSearchDomain",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject VpnService_Builder::allowBypass()
	{
		return __thiz.callObjectMethod(
			"allowBypass",
			"()Landroid/net/VpnService$Builder;"
		);
	}
	QAndroidJniObject VpnService_Builder::allowFamily(jint arg0)
	{
		return __thiz.callObjectMethod(
			"allowFamily",
			"(I)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::establish()
	{
		return __thiz.callObjectMethod(
			"establish",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	QAndroidJniObject VpnService_Builder::setBlocking(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setBlocking",
			"(Z)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::setConfigureIntent(__jni_impl::android::app::PendingIntent arg0)
	{
		return __thiz.callObjectMethod(
			"setConfigureIntent",
			"(Landroid/app/PendingIntent;)Landroid/net/VpnService$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject VpnService_Builder::setHttpProxy(__jni_impl::android::net::ProxyInfo arg0)
	{
		return __thiz.callObjectMethod(
			"setHttpProxy",
			"(Landroid/net/ProxyInfo;)Landroid/net/VpnService$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject VpnService_Builder::setMetered(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setMetered",
			"(Z)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::setMtu(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMtu",
			"(I)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::setSession(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setSession",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
	QAndroidJniObject VpnService_Builder::setSession(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setSession",
			"(Ljava/lang/String;)Landroid/net/VpnService$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject VpnService_Builder::setUnderlyingNetworks(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setUnderlyingNetworks",
			"([Landroid/net/Network;)Landroid/net/VpnService$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::net

namespace android::net
{
	class VpnService_Builder : public __jni_impl::android::net::VpnService_Builder
	{
	public:
		VpnService_Builder(QAndroidJniObject obj) { __thiz = obj; }
		VpnService_Builder(__jni_impl::android::net::VpnService arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::net

