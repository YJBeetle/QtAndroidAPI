#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./DrmInitData_SchemeInitData.def.hpp"

namespace android::media
{
	// Fields
	inline java::util::UUID DrmInitData_SchemeInitData::UUID_NIL()
	{
		return getStaticObjectField(
			"android.media.DrmInitData$SchemeInitData",
			"UUID_NIL",
			"Ljava/util/UUID;"
		);
	}
	inline JByteArray DrmInitData_SchemeInitData::data()
	{
		return getObjectField(
			"data",
			"[B"
		);
	}
	inline JString DrmInitData_SchemeInitData::mimeType()
	{
		return getObjectField(
			"mimeType",
			"Ljava/lang/String;"
		);
	}
	inline java::util::UUID DrmInitData_SchemeInitData::uuid()
	{
		return getObjectField(
			"uuid",
			"Ljava/util/UUID;"
		);
	}
	
	// Constructors
	inline DrmInitData_SchemeInitData::DrmInitData_SchemeInitData(java::util::UUID arg0, JString arg1, JByteArray arg2)
		: JObject(
			"android.media.DrmInitData$SchemeInitData",
			"(Ljava/util/UUID;Ljava/lang/String;[B)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>()
		) {}
	
	// Methods
	inline jboolean DrmInitData_SchemeInitData::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint DrmInitData_SchemeInitData::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

