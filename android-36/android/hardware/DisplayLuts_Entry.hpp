#pragma once

#include "../../JFloatArray.hpp"
#include "../../JString.hpp"
#include "./DisplayLuts_Entry.def.hpp"

namespace android::hardware
{
	// Fields
	
	// Constructors
	inline DisplayLuts_Entry::DisplayLuts_Entry(JFloatArray arg0, jint arg1, jint arg2)
		: JObject(
			"android.hardware.DisplayLuts$Entry",
			"([FII)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline JFloatArray DisplayLuts_Entry::getBuffer() const
	{
		return callObjectMethod(
			"getBuffer",
			"()[F"
		);
	}
	inline jint DisplayLuts_Entry::getDimension() const
	{
		return callMethod<jint>(
			"getDimension",
			"()I"
		);
	}
	inline jint DisplayLuts_Entry::getSamplingKey() const
	{
		return callMethod<jint>(
			"getSamplingKey",
			"()I"
		);
	}
	inline JString DisplayLuts_Entry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
