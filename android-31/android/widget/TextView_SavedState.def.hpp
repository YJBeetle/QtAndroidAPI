#pragma once

#include "../view/View_BaseSavedState.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::widget
{
	class TextView_SavedState : public android::view::View_BaseSavedState
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextView_SavedState(const char *className, const char *sig, Ts...agv) : android::view::View_BaseSavedState(className, sig, std::forward<Ts>(agv)...) {}
		TextView_SavedState(QAndroidJniObject obj) : android::view::View_BaseSavedState(obj) {}
		
		// Constructors
		
		// Methods
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::widget

