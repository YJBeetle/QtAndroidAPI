#include "../os/Parcel.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./AbsSavedState.hpp"

namespace android::view
{
	// Fields
	JObject AbsSavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.view.AbsSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	android::view::AbsSavedState AbsSavedState::EMPTY_STATE()
	{
		return getStaticObjectField(
			"android.view.AbsSavedState",
			"EMPTY_STATE",
			"Landroid/view/AbsSavedState;"
		);
	}
	
	// Constructors
	
	// Methods
	jint AbsSavedState::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JObject AbsSavedState::getSuperState() const
	{
		return callObjectMethod(
			"getSuperState",
			"()Landroid/os/Parcelable;"
		);
	}
	void AbsSavedState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

