#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	JObject ContactsContract_SimAccount::CREATOR()
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
	
	// QJniObject forward
	ContactsContract_SimAccount::ContactsContract_SimAccount(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ContactsContract_SimAccount::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ContactsContract_SimAccount::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString ContactsContract_SimAccount::getAccountName() const
	{
		return callObjectMethod(
			"getAccountName",
			"()Ljava/lang/String;"
		);
	}
	JString ContactsContract_SimAccount::getAccountType() const
	{
		return callObjectMethod(
			"getAccountType",
			"()Ljava/lang/String;"
		);
	}
	jint ContactsContract_SimAccount::getEfType() const
	{
		return callMethod<jint>(
			"getEfType",
			"()I"
		);
	}
	jint ContactsContract_SimAccount::getSimSlotIndex() const
	{
		return callMethod<jint>(
			"getSimSlotIndex",
			"()I"
		);
	}
	jint ContactsContract_SimAccount::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ContactsContract_SimAccount::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::provider

