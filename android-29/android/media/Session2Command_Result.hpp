#pragma once

#include "../os/Bundle.def.hpp"
#include "./Session2Command_Result.def.hpp"

namespace android::media
{
	// Fields
	inline jint Session2Command_Result::RESULT_ERROR_UNKNOWN_ERROR()
	{
		return getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_ERROR_UNKNOWN_ERROR"
		);
	}
	inline jint Session2Command_Result::RESULT_INFO_SKIPPED()
	{
		return getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_INFO_SKIPPED"
		);
	}
	inline jint Session2Command_Result::RESULT_SUCCESS()
	{
		return getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_SUCCESS"
		);
	}
	
	// Constructors
	inline Session2Command_Result::Session2Command_Result(jint arg0, android::os::Bundle arg1)
		: JObject(
			"android.media.Session2Command$Result",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline jint Session2Command_Result::getResultCode() const
	{
		return callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	inline android::os::Bundle Session2Command_Result::getResultData() const
	{
		return callObjectMethod(
			"getResultData",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace android::media

// Base class headers

