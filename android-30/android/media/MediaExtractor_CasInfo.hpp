#pragma once

#include "../../JByteArray.hpp"
#include "./MediaCas_Session.def.hpp"
#include "./MediaExtractor_CasInfo.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray MediaExtractor_CasInfo::getPrivateData() const
	{
		return callObjectMethod(
			"getPrivateData",
			"()[B"
		);
	}
	inline android::media::MediaCas_Session MediaExtractor_CasInfo::getSession() const
	{
		return callObjectMethod(
			"getSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
	inline jint MediaExtractor_CasInfo::getSystemId() const
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

