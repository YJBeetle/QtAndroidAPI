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
		
		TextView_SavedState(QAndroidJniObject obj);
		// Constructors
		TextView_SavedState() = default;
		
		// Methods
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::widget

