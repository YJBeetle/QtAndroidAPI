#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class WindowId_FocusObserver;
}

namespace android::view
{
	class WindowId : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		WindowId(QAndroidJniObject obj);
		// Constructors
		WindowId() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean isFocused();
		void registerFocusObserver(android::view::WindowId_FocusObserver arg0);
		jstring toString();
		void unregisterFocusObserver(android::view::WindowId_FocusObserver arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

