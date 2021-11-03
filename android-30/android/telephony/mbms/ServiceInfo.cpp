#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ServiceInfo.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QAndroidJniObject forward
	ServiceInfo::ServiceInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ServiceInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject ServiceInfo::getLocales()
	{
		return callObjectMethod(
			"getLocales",
			"()Ljava/util/List;"
		);
	}
	jstring ServiceInfo::getNameForLocale(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getNameForLocale",
			"(Ljava/util/Locale;)Ljava/lang/CharSequence;",
			arg0.object()
		).object<jstring>();
	}
	JObject ServiceInfo::getNamedContentLocales()
	{
		return callObjectMethod(
			"getNamedContentLocales",
			"()Ljava/util/Set;"
		);
	}
	jstring ServiceInfo::getServiceClassName()
	{
		return callObjectMethod(
			"getServiceClassName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ServiceInfo::getServiceId()
	{
		return callObjectMethod(
			"getServiceId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::Date ServiceInfo::getSessionEndTime()
	{
		return callObjectMethod(
			"getSessionEndTime",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date ServiceInfo::getSessionStartTime()
	{
		return callObjectMethod(
			"getSessionStartTime",
			"()Ljava/util/Date;"
		);
	}
	jint ServiceInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony::mbms

