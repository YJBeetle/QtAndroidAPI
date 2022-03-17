#pragma once

#include "../../JByteArray.hpp"
#include "../os/Parcel.def.hpp"
#include "./TimedMetaData.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray TimedMetaData::getMetaData() const
	{
		return callObjectMethod(
			"getMetaData",
			"()[B"
		);
	}
	inline jlong TimedMetaData::getTimestamp() const
	{
		return callMethod<jlong>(
			"getTimestamp",
			"()J"
		);
	}
} // namespace android::media

// Base class headers

