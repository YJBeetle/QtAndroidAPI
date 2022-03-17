#pragma once

#include "../view/AbsSavedState.def.hpp"

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
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Preference_BaseSavedState(const char *className, const char *sig, Ts...agv) : android::view::AbsSavedState(className, sig, std::forward<Ts>(agv)...) {}
		Preference_BaseSavedState(QAndroidJniObject obj) : android::view::AbsSavedState(obj) {}
		
		// Constructors
		Preference_BaseSavedState(android::os::Parcel arg0);
		Preference_BaseSavedState(JObject arg0);
		
		// Methods
	};
} // namespace android::preference

