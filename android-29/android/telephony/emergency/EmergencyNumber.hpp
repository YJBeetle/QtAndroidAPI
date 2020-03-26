#pragma once

#ifndef ANDROID_TELEPHONY_EMERGENCY_EMERGENCYNUMBER
#define ANDROID_TELEPHONY_EMERGENCY_EMERGENCYNUMBER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony::emergency
{
	class EmergencyNumber : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint EMERGENCY_CALL_ROUTING_EMERGENCY();
		static jint EMERGENCY_CALL_ROUTING_NORMAL();
		static jint EMERGENCY_CALL_ROUTING_UNKNOWN();
		static jint EMERGENCY_NUMBER_SOURCE_DATABASE();
		static jint EMERGENCY_NUMBER_SOURCE_DEFAULT();
		static jint EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG();
		static jint EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING();
		static jint EMERGENCY_NUMBER_SOURCE_SIM();
		static jint EMERGENCY_SERVICE_CATEGORY_AIEC();
		static jint EMERGENCY_SERVICE_CATEGORY_AMBULANCE();
		static jint EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE();
		static jint EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD();
		static jint EMERGENCY_SERVICE_CATEGORY_MIEC();
		static jint EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE();
		static jint EMERGENCY_SERVICE_CATEGORY_POLICE();
		static jint EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::android::telephony::emergency::EmergencyNumber arg0);
		jstring getNumber();
		jstring getCountryIso();
		QAndroidJniObject getEmergencyServiceCategories();
		QAndroidJniObject getEmergencyUrns();
		jboolean isInEmergencyServiceCategories(jint arg0);
		QAndroidJniObject getEmergencyNumberSources();
		jboolean isFromSources(jint arg0);
		jint getEmergencyCallRouting();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getMnc();
	};
} // namespace __jni_impl::android::telephony::emergency

#include "../../os/Parcel.hpp"

namespace __jni_impl::android::telephony::emergency
{
	// Fields
	QAndroidJniObject EmergencyNumber::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.emergency.EmergencyNumber",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_EMERGENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_EMERGENCY"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_NORMAL"
		);
	}
	jint EmergencyNumber::EMERGENCY_CALL_ROUTING_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_CALL_ROUTING_UNKNOWN"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_DATABASE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_DATABASE"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_DEFAULT"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_MODEM_CONFIG"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_NETWORK_SIGNALING"
		);
	}
	jint EmergencyNumber::EMERGENCY_NUMBER_SOURCE_SIM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_NUMBER_SOURCE_SIM"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_AIEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_AIEC"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_AMBULANCE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_AMBULANCE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_FIRE_BRIGADE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MARINE_GUARD"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MIEC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MIEC"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_MOUNTAIN_RESCUE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_POLICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_POLICE"
		);
	}
	jint EmergencyNumber::EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.emergency.EmergencyNumber",
			"EMERGENCY_SERVICE_CATEGORY_UNSPECIFIED"
		);
	}
	
	// Constructors
	void EmergencyNumber::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.emergency.EmergencyNumber",
			"(V)V");
	}
	
	// Methods
	jboolean EmergencyNumber::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring EmergencyNumber::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint EmergencyNumber::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint EmergencyNumber::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint EmergencyNumber::compareTo(__jni_impl::android::telephony::emergency::EmergencyNumber arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/telephony/emergency/EmergencyNumber;)I",
			arg0.__jniObject().object()
		);
	}
	jstring EmergencyNumber::getNumber()
	{
		return __thiz.callObjectMethod(
			"getNumber",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EmergencyNumber::getCountryIso()
	{
		return __thiz.callObjectMethod(
			"getCountryIso",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject EmergencyNumber::getEmergencyServiceCategories()
	{
		return __thiz.callObjectMethod(
			"getEmergencyServiceCategories",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject EmergencyNumber::getEmergencyUrns()
	{
		return __thiz.callObjectMethod(
			"getEmergencyUrns",
			"()Ljava/util/List;"
		);
	}
	jboolean EmergencyNumber::isInEmergencyServiceCategories(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isInEmergencyServiceCategories",
			"(I)Z",
			arg0
		);
	}
	QAndroidJniObject EmergencyNumber::getEmergencyNumberSources()
	{
		return __thiz.callObjectMethod(
			"getEmergencyNumberSources",
			"()Ljava/util/List;"
		);
	}
	jboolean EmergencyNumber::isFromSources(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isFromSources",
			"(I)Z",
			arg0
		);
	}
	jint EmergencyNumber::getEmergencyCallRouting()
	{
		return __thiz.callMethod<jint>(
			"getEmergencyCallRouting",
			"()I"
		);
	}
	jint EmergencyNumber::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void EmergencyNumber::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring EmergencyNumber::getMnc()
	{
		return __thiz.callObjectMethod(
			"getMnc",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::telephony::emergency

namespace android::telephony::emergency
{
	class EmergencyNumber : public __jni_impl::android::telephony::emergency::EmergencyNumber
	{
	public:
		EmergencyNumber(QAndroidJniObject obj) { __thiz = obj; }
		EmergencyNumber()
		{
			__constructor();
		}
	};
} // namespace android::telephony::emergency

#endif // ANDROID_TELEPHONY_EMERGENCY_EMERGENCYNUMBER

