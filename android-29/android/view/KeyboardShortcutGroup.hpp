#pragma once

#include "../../JObject.hpp"

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
	class KeyboardShortcutGroup : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyboardShortcutGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyboardShortcutGroup(QJniObject obj);
		
		// Constructors
		KeyboardShortcutGroup(jstring arg0);
		KeyboardShortcutGroup(jstring arg0, JObject arg1);
		
		// Methods
		void addItem(android::view::KeyboardShortcutInfo arg0);
		jint describeContents();
		JObject getItems();
		jstring getLabel();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

