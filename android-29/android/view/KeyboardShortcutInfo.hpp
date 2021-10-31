#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class KeyboardShortcutInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyboardShortcutInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyboardShortcutInfo(QAndroidJniObject obj);
		
		// Constructors
		KeyboardShortcutInfo(jstring arg0, jchar arg1, jint arg2);
		KeyboardShortcutInfo(jstring arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents();
		jchar getBaseCharacter();
		jint getKeycode();
		jstring getLabel();
		jint getModifiers();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

