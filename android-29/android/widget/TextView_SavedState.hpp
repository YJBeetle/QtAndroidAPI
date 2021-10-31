#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/AbsSavedState.hpp"
#include "../view/View_BaseSavedState.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::widget
{
	class TextView_SavedState : public android::view::View_BaseSavedState
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextView_SavedState(const char *className, const char *sig, Ts...agv) : android::view::View_BaseSavedState(className, sig, std::forward<Ts>(agv)...) {}
		TextView_SavedState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::widget

