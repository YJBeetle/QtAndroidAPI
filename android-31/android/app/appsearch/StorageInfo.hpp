#pragma once

#include "./StorageInfo.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint StorageInfo::getAliveDocumentsCount() const
	{
		return callMethod<jint>(
			"getAliveDocumentsCount",
			"()I"
		);
	}
	inline jint StorageInfo::getAliveNamespacesCount() const
	{
		return callMethod<jint>(
			"getAliveNamespacesCount",
			"()I"
		);
	}
	inline jlong StorageInfo::getSizeBytes() const
	{
		return callMethod<jlong>(
			"getSizeBytes",
			"()J"
		);
	}
} // namespace android::app::appsearch

// Base class headers

