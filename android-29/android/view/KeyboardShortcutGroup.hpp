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
		
		KeyboardShortcutGroup(QAndroidJniObject obj);
		// Constructors
		KeyboardShortcutGroup(jstring &arg0);
		KeyboardShortcutGroup(const QString &arg0);
		KeyboardShortcutGroup(jstring &arg0, __JniBaseClass &arg1);
		KeyboardShortcutGroup(const QString &arg0, __JniBaseClass &arg1);
		KeyboardShortcutGroup() = default;
		
		// Methods
		void addItem(android::view::KeyboardShortcutInfo arg0);
		jint describeContents();
		QAndroidJniObject getItems();
		jstring getLabel();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

