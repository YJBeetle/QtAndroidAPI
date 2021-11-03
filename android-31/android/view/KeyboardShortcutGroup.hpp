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
class JString;

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
		KeyboardShortcutGroup(JString arg0);
		KeyboardShortcutGroup(JString arg0, JObject arg1);
		
		// Methods
		void addItem(android::view::KeyboardShortcutInfo arg0);
		jint describeContents();
		JObject getItems();
		JString getLabel();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

