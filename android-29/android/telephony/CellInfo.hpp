#pragma once

#ifndef ANDROID_TELEPHONY_CELLINFO
#define ANDROID_TELEPHONY_CELLINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony
{
	class CellInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONNECTION_NONE();
		static jint CONNECTION_PRIMARY_SERVING();
		static jint CONNECTION_SECONDARY_SERVING();
		static jint CONNECTION_UNKNOWN();
		static QAndroidJniObject CREATOR();
		static jint UNAVAILABLE();
		static jlong UNAVAILABLE_LONG();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jboolean isRegistered();
		jlong getTimeStamp();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getCellConnectionStatus();
	};
} // namespace __jni_impl::android::telephony

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telephony
{
	// Fields
	jint CellInfo::CONNECTION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_NONE");
	}
	jint CellInfo::CONNECTION_PRIMARY_SERVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_PRIMARY_SERVING");
	}
	jint CellInfo::CONNECTION_SECONDARY_SERVING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_SECONDARY_SERVING");
	}
	jint CellInfo::CONNECTION_UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"CONNECTION_UNKNOWN");
	}
	QAndroidJniObject CellInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.CellInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint CellInfo::UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telephony.CellInfo",
			"UNAVAILABLE");
	}
	jlong CellInfo::UNAVAILABLE_LONG()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.telephony.CellInfo",
			"UNAVAILABLE_LONG");
	}
	
	// Constructors
	void CellInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.CellInfo",
			"(V)V");
	}
	
	// Methods
	jboolean CellInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject CellInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint CellInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean CellInfo::isRegistered()
	{
		return __thiz.callMethod<jboolean>(
			"isRegistered",
			"()Z");
	}
	jlong CellInfo::getTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimeStamp",
			"()J");
	}
	jint CellInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void CellInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint CellInfo::getCellConnectionStatus()
	{
		return __thiz.callMethod<jint>(
			"getCellConnectionStatus",
			"()I");
	}
} // namespace __jni_impl::android::telephony

namespace android::telephony
{
	class CellInfo : public __jni_impl::android::telephony::CellInfo
	{
	public:
		CellInfo(QAndroidJniObject obj) { __thiz = obj; }
		CellInfo()
		{
			__constructor();
		}
	};
} // namespace android::telephony

#endif // ANDROID_TELEPHONY_CELLINFO

