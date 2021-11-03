#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Account.hpp"

namespace android::accounts
{
	// Fields
	JObject Account::CREATOR()
	{
		return getStaticObjectField(
			"android.accounts.Account",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString Account::name()
	{
		return getObjectField(
			"name",
			"Ljava/lang/String;"
		);
	}
	JString Account::type()
	{
		return getObjectField(
			"type",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Account::Account(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Account::Account(android::os::Parcel arg0)
		: JObject(
			"android.accounts.Account",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	Account::Account(JString arg0, JString arg1)
		: JObject(
			"android.accounts.Account",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint Account::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Account::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Account::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Account::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

