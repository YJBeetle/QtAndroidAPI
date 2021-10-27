#include "./CellSignalStrength.hpp"

namespace android::telephony
{
	// Fields
	jint CellSignalStrength::SIGNAL_STRENGTH_GOOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_GOOD"
		);
	}
	jint CellSignalStrength::SIGNAL_STRENGTH_GREAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_GREAT"
		);
	}
	jint CellSignalStrength::SIGNAL_STRENGTH_MODERATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_MODERATE"
		);
	}
	jint CellSignalStrength::SIGNAL_STRENGTH_NONE_OR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_NONE_OR_UNKNOWN"
		);
	}
	jint CellSignalStrength::SIGNAL_STRENGTH_POOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellSignalStrength",
			"SIGNAL_STRENGTH_POOR"
		);
	}
	
	CellSignalStrength::CellSignalStrength(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jboolean CellSignalStrength::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrength::getAsuLevel()
	{
		return __thiz.callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrength::getDbm()
	{
		return __thiz.callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrength::getLevel()
	{
		return __thiz.callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrength::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony

