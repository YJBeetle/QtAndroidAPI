#include "../os/Parcel.hpp"
#include "./ContactsContract_SimAccount.hpp"

namespace android::provider
{
	// Fields
	jint ContactsContract_SimAccount::ADN_EF_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$SimAccount",
			"ADN_EF_TYPE"
		);
	}
	__JniBaseClass ContactsContract_SimAccount::CREATOR()
	{
		return getStaticObjectField(
			"android.provider.ContactsContract$SimAccount",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ContactsContract_SimAccount::FDN_EF_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$SimAccount",
			"FDN_EF_TYPE"
		);
	}
	jint ContactsContract_SimAccount::SDN_EF_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$SimAccount",
			"SDN_EF_TYPE"
		);
	}
	jint ContactsContract_SimAccount::UNKNOWN_EF_TYPE()
	{
		return getStaticField<jint>(
			"android.provider.ContactsContract$SimAccount",
			"UNKNOWN_EF_TYPE"
		);
	}
	
	// QAndroidJniObject forward
	ContactsContract_SimAccount::ContactsContract_SimAccount(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ContactsContract_SimAccount::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ContactsContract_SimAccount::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ContactsContract_SimAccount::getAccountName()
	{
		return callObjectMethod(
			"getAccountName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContactsContract_SimAccount::getAccountType()
	{
		return callObjectMethod(
			"getAccountType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ContactsContract_SimAccount::getEfType()
	{
		return callMethod<jint>(
			"getEfType",
			"()I"
		);
	}
	jint ContactsContract_SimAccount::getSimSlotIndex()
	{
		return callMethod<jint>(
			"getSimSlotIndex",
			"()I"
		);
	}
	jint ContactsContract_SimAccount::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ContactsContract_SimAccount::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

