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
	
	// QAndroidJniObject forward
	CellSignalStrength::CellSignalStrength(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean CellSignalStrength::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint CellSignalStrength::getAsuLevel()
	{
		return callMethod<jint>(
			"getAsuLevel",
			"()I"
		);
	}
	jint CellSignalStrength::getDbm()
	{
		return callMethod<jint>(
			"getDbm",
			"()I"
		);
	}
	jint CellSignalStrength::getLevel()
	{
		return callMethod<jint>(
			"getLevel",
			"()I"
		);
	}
	jint CellSignalStrength::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::telephony

