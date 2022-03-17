#pragma once

#include "./FullBackupDataOutput.def.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong FullBackupDataOutput::getQuota() const
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	inline jint FullBackupDataOutput::getTransportFlags() const
	{
		return callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
} // namespace android::app::backup

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::backup;
#endif
