#include "../accounts/Account.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./PeriodicSync.hpp"

namespace android::content
{
	// Fields
	JObject PeriodicSync::CREATOR()
	{
		return getStaticObjectField(
			"android.content.PeriodicSync",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::accounts::Account PeriodicSync::account()
	{
		return getObjectField(
			"account",
			"Landroid/accounts/Account;"
		);
	}
	jstring PeriodicSync::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::Bundle PeriodicSync::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	jlong PeriodicSync::period()
	{
		return getField<jlong>(
			"period"
		);
	}
	
	// QJniObject forward
	PeriodicSync::PeriodicSync(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PeriodicSync::PeriodicSync(android::accounts::Account arg0, jstring arg1, android::os::Bundle arg2, jlong arg3)
		: JObject(
			"android.content.PeriodicSync",
			"(Landroid/accounts/Account;Ljava/lang/String;Landroid/os/Bundle;J)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	jint PeriodicSync::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PeriodicSync::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PeriodicSync::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PeriodicSync::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

