#include "../content/ComponentName.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "./PhoneAccountHandle.hpp"

namespace android::telecom
{
	// Fields
	QAndroidJniObject PhoneAccountHandle::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telecom.PhoneAccountHandle",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	PhoneAccountHandle::PhoneAccountHandle(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName &arg0, jstring &arg1, android::os::UserHandle &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	PhoneAccountHandle::PhoneAccountHandle(android::content::ComponentName &arg0, const QString &arg1, android::os::UserHandle &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.telecom.PhoneAccountHandle",
			"(Landroid/content/ComponentName;Ljava/lang/String;Landroid/os/UserHandle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint PhoneAccountHandle::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PhoneAccountHandle::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject PhoneAccountHandle::getComponentName()
	{
		return __thiz.callObjectMethod(
			"getComponentName",
			"()Landroid/content/ComponentName;"
		);
	}
	jstring PhoneAccountHandle::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PhoneAccountHandle::getUserHandle()
	{
		return __thiz.callObjectMethod(
			"getUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jint PhoneAccountHandle::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PhoneAccountHandle::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PhoneAccountHandle::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::telecom

