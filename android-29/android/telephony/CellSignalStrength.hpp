#pragma once

#ifndef ANDROID_TELEPHONY_CELLSIGNALSTRENGTH
#define ANDROID_TELEPHONY_CELLSIGNALSTRENGTH

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telephony
{
	class CellSignalStrength : public __JniBaseClass
	{
	public:
		// Fields
		static jint SIGNAL_STRENGTH_GOOD();
		static jint SIGNAL_STRENGTH_GREAT();
		static jint SIGNAL_STRENGTH_MODERATE();
		static jint SIGNAL_STRENGTH_NONE_OR_UNKNOWN();
		static jint SIGNAL_STRENGTH_POOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint getAsuLevel();
		jint getDbm();
		jint getLevel();
		jint hashCode();
	};
} // namespace __jni_impl::android::telephony


namespace __jni_impl::android::telephony
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
	
	// Constructors
	void CellSignalStrength::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellSignalStrength",
			"(V)V");
	}
	
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
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellSignalStrength : public __jni_impl::android::telephony::CellSignalStrength
	{
	public:
		CellSignalStrength(QAndroidJniObject obj) { __thiz = obj; }
		CellSignalStrength()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLSIGNALSTRENGTH

