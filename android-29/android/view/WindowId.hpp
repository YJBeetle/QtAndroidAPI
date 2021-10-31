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
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WindowId(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WindowId(QJniObject obj);
		
		// Constructors
		
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

