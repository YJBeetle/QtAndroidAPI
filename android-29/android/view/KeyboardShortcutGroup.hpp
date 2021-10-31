#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class KeyboardShortcutInfo;
}

namespace android::view
{
	class KeyboardShortcutGroup : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyboardShortcutGroup(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		KeyboardShortcutGroup(QAndroidJniObject obj);
		
		// Constructors
		KeyboardShortcutGroup(jstring arg0);
		KeyboardShortcutGroup(jstring arg0, __JniBaseClass arg1);
		
		// Methods
		void addItem(android::view::KeyboardShortcutInfo arg0);
		jint describeContents();
		QAndroidJniObject getItems();
		jstring getLabel();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

