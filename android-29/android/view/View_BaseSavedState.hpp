#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AbsSavedState.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class ClassLoader;
}

namespace android::view
{
	class View_BaseSavedState : public android::view::AbsSavedState
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		View_BaseSavedState(QAndroidJniObject obj);
		// Constructors
		View_BaseSavedState(android::os::Parcel &arg0);
		View_BaseSavedState(__JniBaseClass &arg0);
		View_BaseSavedState(android::os::Parcel &arg0, java::lang::ClassLoader &arg1);
		View_BaseSavedState() = default;
		
		// Methods
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

