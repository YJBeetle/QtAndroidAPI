#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JIntArray;
class JArray;
class JBooleanArray;
namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class KeyCharacterMap_KeyData;
}
class JObject;

namespace android::view
{
	class KeyCharacterMap : public JObject
	{
	public:
		// Fields
		static jint ALPHA();
		static jint BUILT_IN_KEYBOARD();
		static jint COMBINING_ACCENT();
		static jint COMBINING_ACCENT_MASK();
		static JObject CREATOR();
		static jint FULL();
		static jchar HEX_INPUT();
		static jint MODIFIER_BEHAVIOR_CHORDED();
		static jint MODIFIER_BEHAVIOR_CHORDED_OR_TOGGLED();
		static jint NUMERIC();
		static jchar PICKER_DIALOG_INPUT();
		static jint PREDICTIVE();
		static jint SPECIAL_FUNCTION();
		static jint VIRTUAL_KEYBOARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyCharacterMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyCharacterMap(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jboolean deviceHasKey(jint arg0);
		static JBooleanArray deviceHasKeys(JIntArray arg0);
		static jint getDeadChar(jint arg0, jint arg1);
		static android::view::KeyCharacterMap load(jint arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint get(jint arg0, jint arg1) const;
		jchar getDisplayLabel(jint arg0) const;
		JArray getEvents(JCharArray arg0) const;
		jboolean getKeyData(jint arg0, android::view::KeyCharacterMap_KeyData arg1) const;
		jint getKeyboardType() const;
		jchar getMatch(jint arg0, JCharArray arg1) const;
		jchar getMatch(jint arg0, JCharArray arg1, jint arg2) const;
		jint getModifierBehavior() const;
		jchar getNumber(jint arg0) const;
		jboolean isPrintingKey(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

