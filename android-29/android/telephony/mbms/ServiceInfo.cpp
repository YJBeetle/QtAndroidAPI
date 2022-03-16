#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"
#include "./ServiceInfo.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean ServiceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject ServiceInfo::getLocales() const
	{
		return callObjectMethod(
			"getLocales",
			"()Ljava/util/List;"
		);
	}
	JString ServiceInfo::getNameForLocale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getNameForLocale",
			"(Ljava/util/Locale;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	JObject ServiceInfo::getNamedContentLocales() const
	{
		return callObjectMethod(
			"getNamedContentLocales",
			"()Ljava/util/Set;"
		);
	}
	JString ServiceInfo::getServiceClassName() const
	{
		return callObjectMethod(
			"getServiceClassName",
			"()Ljava/lang/String;"
		);
	}
	JString ServiceInfo::getServiceId() const
	{
		return callObjectMethod(
			"getServiceId",
			"()Ljava/lang/String;"
		);
	}
	java::util::Date ServiceInfo::getSessionEndTime() const
	{
		return callObjectMethod(
			"getSessionEndTime",
			"()Ljava/util/Date;"
		);
	}
	java::util::Date ServiceInfo::getSessionStartTime() const
	{
		return callObjectMethod(
			"getSessionStartTime",
			"()Ljava/util/Date;"
		);
	}
	jint ServiceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony::mbms

