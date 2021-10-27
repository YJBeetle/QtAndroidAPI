#include "../../os/Parcel.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ServiceInfo.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	ServiceInfo::ServiceInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	jstring ServiceInfo::getNameForLocale(java::util::Locale arg0)
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
} // namespace android::telephony::mbms

