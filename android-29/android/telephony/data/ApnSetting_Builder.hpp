#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::telephony::data
{
	class ApnSetting;
}
namespace __jni_impl::java::net
{
	class InetAddress;
}

namespace __jni_impl::android::telephony::data
{
	class ApnSetting_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setApnName(jstring arg0);
		QAndroidJniObject setApnName(const QString &arg0);
		QAndroidJniObject setApnTypeBitmask(jint arg0);
		QAndroidJniObject setAuthType(jint arg0);
		QAndroidJniObject setCarrierEnabled(jboolean arg0);
		QAndroidJniObject setCarrierId(jint arg0);
		QAndroidJniObject setEntryName(jstring arg0);
		QAndroidJniObject setEntryName(const QString &arg0);
		QAndroidJniObject setMmsProxyAddress(jstring arg0);
		QAndroidJniObject setMmsProxyAddress(const QString &arg0);
		QAndroidJniObject setMmsProxyAddress(__jni_impl::java::net::InetAddress arg0);
		QAndroidJniObject setMmsProxyPort(jint arg0);
		QAndroidJniObject setMmsc(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject setMvnoType(jint arg0);
		QAndroidJniObject setNetworkTypeBitmask(jint arg0);
		QAndroidJniObject setOperatorNumeric(jstring arg0);
		QAndroidJniObject setOperatorNumeric(const QString &arg0);
		QAndroidJniObject setPassword(jstring arg0);
		QAndroidJniObject setPassword(const QString &arg0);
		QAndroidJniObject setProtocol(jint arg0);
		QAndroidJniObject setProxyAddress(jstring arg0);
		QAndroidJniObject setProxyAddress(const QString &arg0);
		QAndroidJniObject setProxyAddress(__jni_impl::java::net::InetAddress arg0);
		QAndroidJniObject setProxyPort(jint arg0);
		QAndroidJniObject setRoamingProtocol(jint arg0);
		QAndroidJniObject setUser(jstring arg0);
		QAndroidJniObject setUser(const QString &arg0);
	};
} // namespace __jni_impl::android::telephony::data

#include "../../net/Uri.hpp"
#include "./ApnSetting.hpp"
#include "../../../java/net/InetAddress.hpp"

namespace __jni_impl::android::telephony::data
{
	// Fields
	
	// Constructors
	void ApnSetting_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.data.ApnSetting$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ApnSetting_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/telephony/data/ApnSetting;"
		);
	}
	QAndroidJniObject ApnSetting_Builder::setApnName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setApnName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setApnName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setApnName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setApnTypeBitmask(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setApnTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setAuthType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setAuthType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setCarrierEnabled(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setCarrierEnabled",
			"(Z)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setCarrierId(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setCarrierId",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setEntryName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setEntryName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setEntryName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setEntryName",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyAddress(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyAddress(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyAddress(__jni_impl::java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsProxyPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMmsc(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"setMmsc",
			"(Landroid/net/Uri;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setMvnoType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setMvnoType",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setNetworkTypeBitmask(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setNetworkTypeBitmask",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setOperatorNumeric(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setOperatorNumeric",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setOperatorNumeric(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setOperatorNumeric",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setPassword(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setPassword(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setPassword",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProtocol(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyAddress(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setProxyAddress",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyAddress(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setProxyAddress",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyAddress(__jni_impl::java::net::InetAddress arg0)
	{
		return __thiz.callObjectMethod(
			"setProxyAddress",
			"(Ljava/net/InetAddress;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ApnSetting_Builder::setProxyPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setProxyPort",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setRoamingProtocol(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRoamingProtocol",
			"(I)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setUser(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setUser",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			arg0
		);
	}
	QAndroidJniObject ApnSetting_Builder::setUser(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setUser",
			"(Ljava/lang/String;)Landroid/telephony/data/ApnSetting$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::telephony::data

namespace android::telephony::data
{
	class ApnSetting_Builder : public __jni_impl::android::telephony::data::ApnSetting_Builder
	{
	public:
		ApnSetting_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ApnSetting_Builder()
		{
			__constructor();
		}
	};
} // namespace android::telephony::data

