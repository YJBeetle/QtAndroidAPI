#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/AbsSavedState.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::preference
{
	class Preference_BaseSavedState : public android::view::AbsSavedState
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Preference_BaseSavedState(QAndroidJniObject obj);
		// Constructors
		Preference_BaseSavedState(android::os::Parcel arg0);
		Preference_BaseSavedState(__JniBaseClass arg0);
		Preference_BaseSavedState() = default;
		
		// Methods
	};
} // namespace android::preference

