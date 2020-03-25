#pragma once

#ifndef ANDROID_TELEPHONY_MBMS_SERVICEINFO
#define ANDROID_TELEPHONY_MBMS_SERVICEINFO

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::android::telephony::mbms
{
	class ServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getLocales();
		QAndroidJniObject getNameForLocale(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject getNamedContentLocales();
		QAndroidJniObject getServiceClassName();
		QAndroidJniObject getServiceId();
		QAndroidJniObject getSessionStartTime();
		QAndroidJniObject getSessionEndTime();
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../os/Parcel.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	
	// Constructors
	void ServiceInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.ServiceInfo",
			"(V)V");
	}
	
	// Methods
	jboolean ServiceInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint ServiceInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject ServiceInfo::getLocales()
	{
		return __thiz.callObjectMethod(
			"getLocales",
			"()Ljava/util/List;");
	}
	QAndroidJniObject ServiceInfo::getNameForLocale(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getNameForLocale",
			"(Ljava/util/Locale;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ServiceInfo::getNamedContentLocales()
	{
		return __thiz.callObjectMethod(
			"getNamedContentLocales",
			"()Ljava/util/Set;");
	}
	QAndroidJniObject ServiceInfo::getServiceClassName()
	{
		return __thiz.callObjectMethod(
			"getServiceClassName",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ServiceInfo::getServiceId()
	{
		return __thiz.callObjectMethod(
			"getServiceId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ServiceInfo::getSessionStartTime()
	{
		return __thiz.callObjectMethod(
			"getSessionStartTime",
			"()Ljava/util/Date;");
	}
	QAndroidJniObject ServiceInfo::getSessionEndTime()
	{
		return __thiz.callObjectMethod(
			"getSessionEndTime",
			"()Ljava/util/Date;");
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class ServiceInfo : public __jni_impl::android::telephony::mbms::ServiceInfo
	{
	public:
		ServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
		ServiceInfo()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

#endif // ANDROID_TELEPHONY_MBMS_SERVICEINFO

