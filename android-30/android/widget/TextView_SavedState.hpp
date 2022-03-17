#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./TextView_SavedState.def.hpp"

namespace android::widget
{
	// Fields
	inline JObject TextView_SavedState::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.TextView$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString TextView_SavedState::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void TextView_SavedState::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/AbsSavedState.hpp"
#include "../view/View_BaseSavedState.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
