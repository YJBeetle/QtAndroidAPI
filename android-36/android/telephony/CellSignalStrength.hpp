#pragma once

#include "../../JObject.hpp"
#include "./CellSignalStrength.def.hpp"

namespace android::telephony
{
	// Fields
	inline jint CellSignalStrength::SIGNAL_STRENGTH_GOOD()
	{
		return getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_GOOD"
		);
	}
	inline jint CellSignalStrength::SIGNAL_STRENGTH_GREAT()
	{
		return getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_GREAT"
		);
	}
	inline jint CellSignalStrength::SIGNAL_STRENGTH_MODERATE()
	{
		return getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_MODERATE"
		);
	}
	inline jint CellSignalStrength::SIGNAL_STRENGTH_NONE_OR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_NONE_OR_UNKNOWN"
		);
	}
	inline jint CellSignalStrength::SIGNAL_STRENGTH_POOR()
	{
		return getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_POOR"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean CellSignalStrength::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint CellSignalStrength::getAsuLevel() const
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	inline jint CellSignalStrength::getDbm() const
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	inline jint CellSignalStrength::getLevel() const
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	inline jint CellSignalStrength::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
