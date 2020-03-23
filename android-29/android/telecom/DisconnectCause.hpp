#pragma once

#ifndef ANDROID_TELECOM_DISCONNECTCAUSE
#define ANDROID_TELECOM_DISCONNECTCAUSE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telecom
{
	class DisconnectCause : public __JniBaseClass
	{
	public:
		// Fields
		static jint ANSWERED_ELSEWHERE();
		static jint BUSY();
		static jint CALL_PULLED();
		static jint CANCELED();
		static jint CONNECTION_MANAGER_NOT_SUPPORTED();
		static QAndroidJniObject CREATOR();
		static jint ERROR();
		static jint LOCAL();
		static jint MISSED();
		static jint OTHER();
		static jint REJECTED();
		static jint REMOTE();
		static jint RESTRICTED();
		static jint UNKNOWN();
		
		// Constructors
		void __constructor(jint arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4);
		void __constructor(jint arg0, jstring arg1, jstring arg2, jstring arg3);
		void __constructor(jint arg0, jstring arg1);
		void __constructor(jint arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getCode();
		QAndroidJniObject getLabel();
		QAndroidJniObject getDescription();
		QAndroidJniObject getReason();
		jint getTone();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telecom

#include "../os/Parcel.hpp"

namespace __jni_impl::android::telecom
{
	// Fields
	jint DisconnectCause::ANSWERED_ELSEWHERE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"ANSWERED_ELSEWHERE");
	}
	jint DisconnectCause::BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"BUSY");
	}
	jint DisconnectCause::CALL_PULLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CALL_PULLED");
	}
	jint DisconnectCause::CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CANCELED");
	}
	jint DisconnectCause::CONNECTION_MANAGER_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CONNECTION_MANAGER_NOT_SUPPORTED");
	}
	QAndroidJniObject DisconnectCause::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.DisconnectCause",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint DisconnectCause::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"ERROR");
	}
	jint DisconnectCause::LOCAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"LOCAL");
	}
	jint DisconnectCause::MISSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"MISSED");
	}
	jint DisconnectCause::OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"OTHER");
	}
	jint DisconnectCause::REJECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"REJECTED");
	}
	jint DisconnectCause::REMOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"REMOTE");
	}
	jint DisconnectCause::RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"RESTRICTED");
	}
	jint DisconnectCause::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"UNKNOWN");
	}
	
	// Constructors
	void DisconnectCause::__constructor(jint arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void DisconnectCause::__constructor(jint arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void DisconnectCause::__constructor(jint arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/String;)V",
			arg0,
			arg1);
	}
	void DisconnectCause::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(I)V",
			arg0);
	}
	
	// Methods
	jboolean DisconnectCause::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject DisconnectCause::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint DisconnectCause::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint DisconnectCause::getCode()
	{
		return __thiz.callMethod<jint>(
			"getCode",
			"()I");
	}
	QAndroidJniObject DisconnectCause::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject DisconnectCause::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject DisconnectCause::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;");
	}
	jint DisconnectCause::getTone()
	{
		return __thiz.callMethod<jint>(
			"getTone",
			"()I");
	}
	jint DisconnectCause::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void DisconnectCause::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class DisconnectCause : public __jni_impl::android::telecom::DisconnectCause
	{
	public:
		DisconnectCause(QAndroidJniObject obj) { __thiz = obj; }
		DisconnectCause(jint arg0, jstring arg1, jstring arg2, jstring arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		DisconnectCause(jint arg0, jstring arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		DisconnectCause(jint arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DisconnectCause(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::telecom

#endif // ANDROID_TELECOM_DISCONNECTCAUSE

