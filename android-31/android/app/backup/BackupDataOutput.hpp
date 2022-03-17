#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JString.hpp"
#include "./BackupDataOutput.def.hpp"

namespace android::app::backup
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong BackupDataOutput::getQuota() const
	{
		return callMethod<jlong>(
			"getQuota",
			"()J"
		);
	}
	inline jint BackupDataOutput::getTransportFlags() const
	{
		return callMethod<jint>(
			"getTransportFlags",
			"()I"
		);
	}
	inline jint BackupDataOutput::writeEntityData(JByteArray arg0, jint arg1) const
	{
		return callMethod<jint>(
			"writeEntityData",
			"([BI)I",
			arg0.object<jbyteArray>(),
			arg1
		);
	}
	inline jint BackupDataOutput::writeEntityHeader(JString arg0, jint arg1) const
	{
		return callMethod<jint>(
			"writeEntityHeader",
			"(Ljava/lang/String;I)I",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::app::backup

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::backup;
#endif
