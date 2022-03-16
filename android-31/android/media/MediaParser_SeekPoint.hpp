#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaParser_SeekPoint.def.hpp"

namespace android::media
{
	// Fields
	inline android::media::MediaParser_SeekPoint MediaParser_SeekPoint::START()
	{
		return getStaticObjectField(
			"android.media.MediaParser$SeekPoint",
			"START",
			"Landroid/media/MediaParser$SeekPoint;"
		);
	}
	inline jlong MediaParser_SeekPoint::position()
	{
		return getField<jlong>(
			"position"
		);
	}
	inline jlong MediaParser_SeekPoint::timeMicros()
	{
		return getField<jlong>(
			"timeMicros"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean MediaParser_SeekPoint::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MediaParser_SeekPoint::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MediaParser_SeekPoint::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

