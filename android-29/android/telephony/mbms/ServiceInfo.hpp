#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::java::util
{
	class Locale;
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
		QAndroidJniObject getLocales();
		jstring getNameForLocale(__jni_impl::java::util::Locale arg0);
		QAndroidJniObject getNamedContentLocales();
		jstring getServiceClassName();
		jstring getServiceId();
		QAndroidJniObject getSessionEndTime();
		QAndroidJniObject getSessionStartTime();
		jint hashCode();
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../os/Parcel.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"

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
			arg0
		);
	}
	QAndroidJniObject ServiceInfo::getLocales()
	{
		return __thiz.callObjectMethod(
			"getLocales",
			"()Ljava/util/List;"
		);
	}
	jstring ServiceInfo::getNameForLocale(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getNameForLocale",
			"(Ljava/util/Locale;)Ljava/lang/CharSequence;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject ServiceInfo::getNamedContentLocales()
	{
		return __thiz.callObjectMethod(
			"getNamedContentLocales",
			"()Ljava/util/Set;"
		);
	}
	jstring ServiceInfo::getServiceClassName()
	{
		return __thiz.callObjectMethod(
			"getServiceClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ServiceInfo::getServiceId()
	{
		return __thiz.callObjectMethod(
			"getServiceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ServiceInfo::getSessionEndTime()
	{
		return __thiz.callObjectMethod(
			"getSessionEndTime",
			"()Ljava/util/Date;"
		);
	}
	QAndroidJniObject ServiceInfo::getSessionStartTime()
	{
		return __thiz.callObjectMethod(
			"getSessionStartTime",
			"()Ljava/util/Date;"
		);
	}
	jint ServiceInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
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

