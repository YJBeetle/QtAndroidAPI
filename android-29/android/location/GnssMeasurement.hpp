#pragma once

#ifndef ANDROID_LOCATION_GNSSMEASUREMENT
#define ANDROID_LOCATION_GNSSMEASUREMENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::location
{
	class GnssMeasurement : public __JniBaseClass
	{
	public:
		// Fields
		static jint ADR_STATE_CYCLE_SLIP();
		static jint ADR_STATE_HALF_CYCLE_REPORTED();
		static jint ADR_STATE_HALF_CYCLE_RESOLVED();
		static jint ADR_STATE_RESET();
		static jint ADR_STATE_UNKNOWN();
		static jint ADR_STATE_VALID();
		static QAndroidJniObject CREATOR();
		static jint MULTIPATH_INDICATOR_DETECTED();
		static jint MULTIPATH_INDICATOR_NOT_DETECTED();
		static jint MULTIPATH_INDICATOR_UNKNOWN();
		static jint STATE_2ND_CODE_LOCK();
		static jint STATE_BDS_D2_BIT_SYNC();
		static jint STATE_BDS_D2_SUBFRAME_SYNC();
		static jint STATE_BIT_SYNC();
		static jint STATE_CODE_LOCK();
		static jint STATE_GAL_E1BC_CODE_LOCK();
		static jint STATE_GAL_E1B_PAGE_SYNC();
		static jint STATE_GAL_E1C_2ND_CODE_LOCK();
		static jint STATE_GLO_STRING_SYNC();
		static jint STATE_GLO_TOD_DECODED();
		static jint STATE_GLO_TOD_KNOWN();
		static jint STATE_MSEC_AMBIGUOUS();
		static jint STATE_SBAS_SYNC();
		static jint STATE_SUBFRAME_SYNC();
		static jint STATE_SYMBOL_SYNC();
		static jint STATE_TOW_DECODED();
		static jint STATE_TOW_KNOWN();
		static jint STATE_UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jdouble getAccumulatedDeltaRangeMeters();
		jint getAccumulatedDeltaRangeState();
		jdouble getAccumulatedDeltaRangeUncertaintyMeters();
		jdouble getAutomaticGainControlLevelDb();
		jlong getCarrierCycles();
		jfloat getCarrierFrequencyHz();
		jdouble getCarrierPhase();
		jdouble getCarrierPhaseUncertainty();
		jdouble getCn0DbHz();
		jstring getCodeType();
		jint getConstellationType();
		jint getMultipathIndicator();
		jdouble getPseudorangeRateMetersPerSecond();
		jdouble getPseudorangeRateUncertaintyMetersPerSecond();
		jlong getReceivedSvTimeNanos();
		jlong getReceivedSvTimeUncertaintyNanos();
		jdouble getSnrInDb();
		jint getState();
		jint getSvid();
		jdouble getTimeOffsetNanos();
		jboolean hasAutomaticGainControlLevelDb();
		jboolean hasCarrierCycles();
		jboolean hasCarrierFrequencyHz();
		jboolean hasCarrierPhase();
		jboolean hasCarrierPhaseUncertainty();
		jboolean hasCodeType();
		jboolean hasSnrInDb();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::location

#include "../os/Parcel.hpp"

namespace __jni_impl::android::location
{
	// Fields
	jint GnssMeasurement::ADR_STATE_CYCLE_SLIP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_CYCLE_SLIP"
		);
	}
	jint GnssMeasurement::ADR_STATE_HALF_CYCLE_REPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_HALF_CYCLE_REPORTED"
		);
	}
	jint GnssMeasurement::ADR_STATE_HALF_CYCLE_RESOLVED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_HALF_CYCLE_RESOLVED"
		);
	}
	jint GnssMeasurement::ADR_STATE_RESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_RESET"
		);
	}
	jint GnssMeasurement::ADR_STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_UNKNOWN"
		);
	}
	jint GnssMeasurement::ADR_STATE_VALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"ADR_STATE_VALID"
		);
	}
	QAndroidJniObject GnssMeasurement::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.GnssMeasurement",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint GnssMeasurement::MULTIPATH_INDICATOR_DETECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_DETECTED"
		);
	}
	jint GnssMeasurement::MULTIPATH_INDICATOR_NOT_DETECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_NOT_DETECTED"
		);
	}
	jint GnssMeasurement::MULTIPATH_INDICATOR_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"MULTIPATH_INDICATOR_UNKNOWN"
		);
	}
	jint GnssMeasurement::STATE_2ND_CODE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_2ND_CODE_LOCK"
		);
	}
	jint GnssMeasurement::STATE_BDS_D2_BIT_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BDS_D2_BIT_SYNC"
		);
	}
	jint GnssMeasurement::STATE_BDS_D2_SUBFRAME_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BDS_D2_SUBFRAME_SYNC"
		);
	}
	jint GnssMeasurement::STATE_BIT_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_BIT_SYNC"
		);
	}
	jint GnssMeasurement::STATE_CODE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_CODE_LOCK"
		);
	}
	jint GnssMeasurement::STATE_GAL_E1BC_CODE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1BC_CODE_LOCK"
		);
	}
	jint GnssMeasurement::STATE_GAL_E1B_PAGE_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1B_PAGE_SYNC"
		);
	}
	jint GnssMeasurement::STATE_GAL_E1C_2ND_CODE_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GAL_E1C_2ND_CODE_LOCK"
		);
	}
	jint GnssMeasurement::STATE_GLO_STRING_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_STRING_SYNC"
		);
	}
	jint GnssMeasurement::STATE_GLO_TOD_DECODED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_TOD_DECODED"
		);
	}
	jint GnssMeasurement::STATE_GLO_TOD_KNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_GLO_TOD_KNOWN"
		);
	}
	jint GnssMeasurement::STATE_MSEC_AMBIGUOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_MSEC_AMBIGUOUS"
		);
	}
	jint GnssMeasurement::STATE_SBAS_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SBAS_SYNC"
		);
	}
	jint GnssMeasurement::STATE_SUBFRAME_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SUBFRAME_SYNC"
		);
	}
	jint GnssMeasurement::STATE_SYMBOL_SYNC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_SYMBOL_SYNC"
		);
	}
	jint GnssMeasurement::STATE_TOW_DECODED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_TOW_DECODED"
		);
	}
	jint GnssMeasurement::STATE_TOW_KNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_TOW_KNOWN"
		);
	}
	jint GnssMeasurement::STATE_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.GnssMeasurement",
			"STATE_UNKNOWN"
		);
	}
	
	// Constructors
	void GnssMeasurement::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssMeasurement",
			"(V)V");
	}
	
	// Methods
	jint GnssMeasurement::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jdouble GnssMeasurement::getAccumulatedDeltaRangeMeters()
	{
		return __thiz.callMethod<jdouble>(
			"getAccumulatedDeltaRangeMeters",
			"()D"
		);
	}
	jint GnssMeasurement::getAccumulatedDeltaRangeState()
	{
		return __thiz.callMethod<jint>(
			"getAccumulatedDeltaRangeState",
			"()I"
		);
	}
	jdouble GnssMeasurement::getAccumulatedDeltaRangeUncertaintyMeters()
	{
		return __thiz.callMethod<jdouble>(
			"getAccumulatedDeltaRangeUncertaintyMeters",
			"()D"
		);
	}
	jdouble GnssMeasurement::getAutomaticGainControlLevelDb()
	{
		return __thiz.callMethod<jdouble>(
			"getAutomaticGainControlLevelDb",
			"()D"
		);
	}
	jlong GnssMeasurement::getCarrierCycles()
	{
		return __thiz.callMethod<jlong>(
			"getCarrierCycles",
			"()J"
		);
	}
	jfloat GnssMeasurement::getCarrierFrequencyHz()
	{
		return __thiz.callMethod<jfloat>(
			"getCarrierFrequencyHz",
			"()F"
		);
	}
	jdouble GnssMeasurement::getCarrierPhase()
	{
		return __thiz.callMethod<jdouble>(
			"getCarrierPhase",
			"()D"
		);
	}
	jdouble GnssMeasurement::getCarrierPhaseUncertainty()
	{
		return __thiz.callMethod<jdouble>(
			"getCarrierPhaseUncertainty",
			"()D"
		);
	}
	jdouble GnssMeasurement::getCn0DbHz()
	{
		return __thiz.callMethod<jdouble>(
			"getCn0DbHz",
			"()D"
		);
	}
	jstring GnssMeasurement::getCodeType()
	{
		return __thiz.callObjectMethod(
			"getCodeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint GnssMeasurement::getConstellationType()
	{
		return __thiz.callMethod<jint>(
			"getConstellationType",
			"()I"
		);
	}
	jint GnssMeasurement::getMultipathIndicator()
	{
		return __thiz.callMethod<jint>(
			"getMultipathIndicator",
			"()I"
		);
	}
	jdouble GnssMeasurement::getPseudorangeRateMetersPerSecond()
	{
		return __thiz.callMethod<jdouble>(
			"getPseudorangeRateMetersPerSecond",
			"()D"
		);
	}
	jdouble GnssMeasurement::getPseudorangeRateUncertaintyMetersPerSecond()
	{
		return __thiz.callMethod<jdouble>(
			"getPseudorangeRateUncertaintyMetersPerSecond",
			"()D"
		);
	}
	jlong GnssMeasurement::getReceivedSvTimeNanos()
	{
		return __thiz.callMethod<jlong>(
			"getReceivedSvTimeNanos",
			"()J"
		);
	}
	jlong GnssMeasurement::getReceivedSvTimeUncertaintyNanos()
	{
		return __thiz.callMethod<jlong>(
			"getReceivedSvTimeUncertaintyNanos",
			"()J"
		);
	}
	jdouble GnssMeasurement::getSnrInDb()
	{
		return __thiz.callMethod<jdouble>(
			"getSnrInDb",
			"()D"
		);
	}
	jint GnssMeasurement::getState()
	{
		return __thiz.callMethod<jint>(
			"getState",
			"()I"
		);
	}
	jint GnssMeasurement::getSvid()
	{
		return __thiz.callMethod<jint>(
			"getSvid",
			"()I"
		);
	}
	jdouble GnssMeasurement::getTimeOffsetNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getTimeOffsetNanos",
			"()D"
		);
	}
	jboolean GnssMeasurement::hasAutomaticGainControlLevelDb()
	{
		return __thiz.callMethod<jboolean>(
			"hasAutomaticGainControlLevelDb",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCarrierCycles()
	{
		return __thiz.callMethod<jboolean>(
			"hasCarrierCycles",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCarrierFrequencyHz()
	{
		return __thiz.callMethod<jboolean>(
			"hasCarrierFrequencyHz",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCarrierPhase()
	{
		return __thiz.callMethod<jboolean>(
			"hasCarrierPhase",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCarrierPhaseUncertainty()
	{
		return __thiz.callMethod<jboolean>(
			"hasCarrierPhaseUncertainty",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasCodeType()
	{
		return __thiz.callMethod<jboolean>(
			"hasCodeType",
			"()Z"
		);
	}
	jboolean GnssMeasurement::hasSnrInDb()
	{
		return __thiz.callMethod<jboolean>(
			"hasSnrInDb",
			"()Z"
		);
	}
	jstring GnssMeasurement::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssMeasurement::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class GnssMeasurement : public __jni_impl::android::location::GnssMeasurement
	{
	public:
		GnssMeasurement(QAndroidJniObject obj) { __thiz = obj; }
		GnssMeasurement()
		{
			__constructor();
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_GNSSMEASUREMENT

