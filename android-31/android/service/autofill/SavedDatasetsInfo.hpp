#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SavedDatasetsInfo.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JString SavedDatasetsInfo::TYPE_OTHER()
	{
		return getStaticObjectField(
			"android.service.autofill.SavedDatasetsInfo",
			"TYPE_OTHER",
			"Ljava/lang/String;"
		);
	}
	inline JString SavedDatasetsInfo::TYPE_PASSWORDS()
	{
		return getStaticObjectField(
			"android.service.autofill.SavedDatasetsInfo",
			"TYPE_PASSWORDS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline SavedDatasetsInfo::SavedDatasetsInfo(JString arg0, jint arg1)
		: JObject(
			"android.service.autofill.SavedDatasetsInfo",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jboolean SavedDatasetsInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SavedDatasetsInfo::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline JString SavedDatasetsInfo::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline jint SavedDatasetsInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SavedDatasetsInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::service::autofill

// Base class headers

