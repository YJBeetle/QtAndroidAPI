#include "../../os/Parcel.hpp"
#include "./WalletServiceEvent.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	__JniBaseClass WalletServiceEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.WalletServiceEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WalletServiceEvent::TYPE_NFC_PAYMENT_STARTED()
	{
		return getStaticField<jint>(
			"android.service.quickaccesswallet.WalletServiceEvent",
			"TYPE_NFC_PAYMENT_STARTED"
		);
	}
	
	// QAndroidJniObject forward
	WalletServiceEvent::WalletServiceEvent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WalletServiceEvent::WalletServiceEvent(jint arg0)
		: __JniBaseClass(
			"android.service.quickaccesswallet.WalletServiceEvent",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint WalletServiceEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint WalletServiceEvent::getEventType()
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	void WalletServiceEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet
