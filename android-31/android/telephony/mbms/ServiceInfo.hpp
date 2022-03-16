#pragma once

#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Date.def.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./ServiceInfo.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ServiceInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ServiceInfo::getLocales() const
	{
		return callObjectMethod(
			"getLocales",
			"()Ljava/util/List;"
		);
	}
	inline JString ServiceInfo::getNameForLocale(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getNameForLocale",
			"(Ljava/util/Locale;)Ljava/lang/CharSequence;",
			arg0.object()
		);
	}
	inline JObject ServiceInfo::getNamedContentLocales() const
	{
		return callObjectMethod(
			"getNamedContentLocales",
			"()Ljava/util/Set;"
		);
	}
	inline JString ServiceInfo::getServiceClassName() const
	{
		return callObjectMethod(
			"getServiceClassName",
			"()Ljava/lang/String;"
		);
	}
	inline JString ServiceInfo::getServiceId() const
	{
		return callObjectMethod(
			"getServiceId",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::Date ServiceInfo::getSessionEndTime() const
	{
		return callObjectMethod(
			"getSessionEndTime",
			"()Ljava/util/Date;"
		);
	}
	inline java::util::Date ServiceInfo::getSessionStartTime() const
	{
		return callObjectMethod(
			"getSessionStartTime",
			"()Ljava/util/Date;"
		);
	}
	inline jint ServiceInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony::mbms

// Base class headers

