#pragma once

#include "../../JByteArray.hpp"
#include "./MediaDrm_KeyStatus.def.hpp"

namespace android::media
{
	// Fields
	inline jint MediaDrm_KeyStatus::STATUS_EXPIRED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_EXPIRED"
		);
	}
	inline jint MediaDrm_KeyStatus::STATUS_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_INTERNAL_ERROR"
		);
	}
	inline jint MediaDrm_KeyStatus::STATUS_OUTPUT_NOT_ALLOWED()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_OUTPUT_NOT_ALLOWED"
		);
	}
	inline jint MediaDrm_KeyStatus::STATUS_PENDING()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_PENDING"
		);
	}
	inline jint MediaDrm_KeyStatus::STATUS_USABLE()
	{
		return getStaticField<jint>(
			"android.media.MediaDrm$KeyStatus",
			"STATUS_USABLE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JByteArray MediaDrm_KeyStatus::getKeyId() const
	{
		return callObjectMethod(
			"getKeyId",
			"()[B"
		);
	}
	inline jint MediaDrm_KeyStatus::getStatusCode() const
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

