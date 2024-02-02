#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSetId.def.hpp"

namespace android::adservices::appsetid
{
	// Fields
	inline jint AppSetId::SCOPE_APP()
	{
		return getStaticField<jint>(
			"android.adservices.appsetid.AppSetId",
			"SCOPE_APP"
		);
	}
	inline jint AppSetId::SCOPE_DEVELOPER()
	{
		return getStaticField<jint>(
			"android.adservices.appsetid.AppSetId",
			"SCOPE_DEVELOPER"
		);
	}
	
	// Constructors
	inline AppSetId::AppSetId(JString arg0, jint arg1)
		: JObject(
			"android.adservices.appsetid.AppSetId",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jboolean AppSetId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AppSetId::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jint AppSetId::getScope() const
	{
		return callMethod<jint>(
			"getScope",
			"()I"
		);
	}
	inline jint AppSetId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::appsetid

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::appsetid;
#endif
