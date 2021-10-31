#include "../os/Parcel.hpp"
#include "./Account.hpp"

namespace android::accounts
{
	// Fields
	__JniBaseClass Account::CREATOR()
	{
		return getStaticObjectField(
			"android.accounts.Account",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring Account::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Account::type()
	{
		return getObjectField(
			"type",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Account::Account(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Account::Account(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.accounts.Account",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Account::Account(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.accounts.Account",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint Account::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Account::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Account::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Account::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Account::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accounts

