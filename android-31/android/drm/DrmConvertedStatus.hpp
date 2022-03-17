#pragma once

#include "../../JByteArray.hpp"
#include "./DrmConvertedStatus.def.hpp"

namespace android::drm
{
	// Fields
	inline jint DrmConvertedStatus::STATUS_ERROR()
	{
		return getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_ERROR"
		);
	}
	inline jint DrmConvertedStatus::STATUS_INPUTDATA_ERROR()
	{
		return getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_INPUTDATA_ERROR"
		);
	}
	inline jint DrmConvertedStatus::STATUS_OK()
	{
		return getStaticField<jint>(
			"android.drm.DrmConvertedStatus",
			"STATUS_OK"
		);
	}
	inline JByteArray DrmConvertedStatus::convertedData()
	{
		return getObjectField(
			"convertedData",
			"[B"
		);
	}
	inline jint DrmConvertedStatus::offset()
	{
		return getField<jint>(
			"offset"
		);
	}
	inline jint DrmConvertedStatus::statusCode()
	{
		return getField<jint>(
			"statusCode"
		);
	}
	
	// Constructors
	inline DrmConvertedStatus::DrmConvertedStatus(jint arg0, JByteArray arg1, jint arg2)
		: JObject(
			"android.drm.DrmConvertedStatus",
			"(I[BI)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2
		) {}
	
	// Methods
} // namespace android::drm

// Base class headers

