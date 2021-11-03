#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./TextView_SavedState.hpp"

namespace android::widget
{
	// Fields
	JObject TextView_SavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.TextView$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	TextView_SavedState::TextView_SavedState(QJniObject obj) : android::view::View_BaseSavedState(obj) {}
	
	// Constructors
	
	// Methods
	JString TextView_SavedState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void TextView_SavedState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

