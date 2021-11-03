#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view
{
	class KeyboardShortcutInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyboardShortcutInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyboardShortcutInfo(QAndroidJniObject obj);
		
		// Constructors
		KeyboardShortcutInfo(JString arg0, jchar arg1, jint arg2);
		KeyboardShortcutInfo(JString arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents() const;
		jchar getBaseCharacter() const;
		jint getKeycode() const;
		JString getLabel() const;
		jint getModifiers() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

