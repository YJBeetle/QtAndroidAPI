#include "../accounts/Account.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./PeriodicSync.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject PeriodicSync::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.PeriodicSync",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject PeriodicSync::account()
	{
		return __thiz.getObjectField(
			"account",
			"Landroid/accounts/Account;"
		);
	}
	jstring PeriodicSync::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject PeriodicSync::extras()
	{
		return __thiz.getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	jlong PeriodicSync::period()
	{
		return __thiz.getField<jlong>(
			"period"
		);
	}
	
	PeriodicSync::PeriodicSync(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PeriodicSync::PeriodicSync(android::accounts::Account &arg0, jstring &arg1, android::os::Bundle &arg2, jlong &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.PeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	PeriodicSync::PeriodicSync(android::accounts::Account &arg0, const QString &arg1, android::os::Bundle &arg2, jlong &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.PeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	jint PeriodicSync::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PeriodicSync::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PeriodicSync::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PeriodicSync::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

