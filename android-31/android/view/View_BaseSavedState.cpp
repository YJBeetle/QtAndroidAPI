#include "../os/Parcel.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "./View_BaseSavedState.hpp"

namespace android::view
{
	// Fields
	JObject View_BaseSavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.view.View$BaseSavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	View_BaseSavedState::View_BaseSavedState(android::os::Parcel arg0)
		: android::view::AbsSavedState(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	View_BaseSavedState::View_BaseSavedState(JObject arg0)
		: android::view::AbsSavedState(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		) {}
	View_BaseSavedState::View_BaseSavedState(android::os::Parcel arg0, java::lang::ClassLoader arg1)
		: android::view::AbsSavedState(
			"android.view.View$BaseSavedState",
			"(Landroid/os/Parcel;Ljava/lang/ClassLoader;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void View_BaseSavedState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

