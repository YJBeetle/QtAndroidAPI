#include "../accounts/Account.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./SyncInfo.hpp"

namespace android::content
{
	// Fields
	android::accounts::Account SyncInfo::account()
	{
		return getObjectField(
			"account",
			"Landroid/accounts/Account;"
		);
	}
	JString SyncInfo::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		);
	}
	jlong SyncInfo::startTime()
	{
		return getField<jlong>(
			"startTime"
		);
	}
	
	// QAndroidJniObject forward
	SyncInfo::SyncInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SyncInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SyncInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

