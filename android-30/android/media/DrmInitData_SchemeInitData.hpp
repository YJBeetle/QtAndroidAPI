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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
