#include "../os/Parcel.hpp"
#include "./Account.hpp"

namespace android::accounts
{
	// Fields
	QAndroidJniObject Account::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.accounts.Account",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring Account::name()
	{
		return __thiz.getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Account::type()
	{
		return __thiz.getObjectField(
			"type",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Account::Account(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Account::Account(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.Account",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	Account::Account(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.Account",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	Account::Account(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.accounts.Account",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jint Account::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Account::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Account::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Account::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Account::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::accounts

