#include "../os/Parcel.hpp"
#include "./DisconnectCause.hpp"

namespace android::telecom
{
	// Fields
	jint DisconnectCause::ANSWERED_ELSEWHERE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"ANSWERED_ELSEWHERE"
		);
	}
	jint DisconnectCause::BUSY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"BUSY"
		);
	}
	jint DisconnectCause::CALL_PULLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CALL_PULLED"
		);
	}
	jint DisconnectCause::CANCELED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CANCELED"
		);
	}
	jint DisconnectCause::CONNECTION_MANAGER_NOT_SUPPORTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"CONNECTION_MANAGER_NOT_SUPPORTED"
		);
	}
	QAndroidJniObject DisconnectCause::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.DisconnectCause",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint DisconnectCause::ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"ERROR"
		);
	}
	jint DisconnectCause::LOCAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"LOCAL"
		);
	}
	jint DisconnectCause::MISSED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"MISSED"
		);
	}
	jint DisconnectCause::OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"OTHER"
		);
	}
	jint DisconnectCause::REJECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"REJECTED"
		);
	}
	jint DisconnectCause::REMOTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"REMOTE"
		);
	}
	jint DisconnectCause::RESTRICTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"RESTRICTED"
		);
	}
	jint DisconnectCause::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.telecom.DisconnectCause",
			"UNKNOWN"
		);
	}
	
	DisconnectCause::DisconnectCause(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DisconnectCause::DisconnectCause(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(I)V",
			arg0
		);
	}
	DisconnectCause::DisconnectCause(jint &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	DisconnectCause::DisconnectCause(jint &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	DisconnectCause::DisconnectCause(jint &arg0, jstring &arg1, jstring &arg2, jstring &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	DisconnectCause::DisconnectCause(jint &arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	DisconnectCause::DisconnectCause(jint &arg0, jstring &arg1, jstring &arg2, jstring &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	DisconnectCause::DisconnectCause(jint &arg0, const QString &arg1, const QString &arg2, const QString &arg3, jint &arg4)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.DisconnectCause",
			"(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Ljava/lang/String;I)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			arg4
		);
	}
	
	// Methods
	jint DisconnectCause::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean DisconnectCause::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DisconnectCause::getCode()
	{
		return __thiz.callMethod<jint>(
			"getCode",
			"()I"
		);
	}
	jstring DisconnectCause::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DisconnectCause::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DisconnectCause::getReason()
	{
		return __thiz.callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint DisconnectCause::getTone()
	{
		return __thiz.callMethod<jint>(
			"getTone",
			"()I"
		);
	}
	jint DisconnectCause::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DisconnectCause::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DisconnectCause::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telecom

