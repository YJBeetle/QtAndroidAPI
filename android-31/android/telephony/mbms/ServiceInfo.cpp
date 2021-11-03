#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ServiceInfo.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// QJniObject forward
	ServiceInfo::ServiceInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean ServiceInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ServiceInfo::getLocales()
	{
		return callObjectMethod(
			"getLocales",
			"()Ljava/util/List;"
		);
	}
	JString ServiceInfo::getNameForLocale(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getNameForLocale",
			"(Ljava/util/Locale;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JObject ServiceInfo::getNamedContentLocales()
	{
		return callObjectMethod(
			"getNamedContentLocales",
			"()Ljava/util/Set;"
		);
	}
	JString ServiceInfo::getServiceClassName()
	{
		return callObjectMethod(
			"getServiceClassName",
			"()Ljava/lang/String;"
		);
	}
	JString ServiceInfo::getServiceId()
	{
		return callObjectMethod(
			"getServiceId",
			"()Ljava/lang/String;"
		);
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

