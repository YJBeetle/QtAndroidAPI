#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class KeyCharacterMap_KeyData;
}

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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyCharacterMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyCharacterMap(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean deviceHasKey(jint arg0);
		static jbooleanArray deviceHasKeys(jintArray arg0);
		static jint getDeadChar(jint arg0, jint arg1);
		static android::view::KeyCharacterMap load(jint arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jint get(jint arg0, jint arg1);
		jchar getDisplayLabel(jint arg0);
		jarray getEvents(jcharArray arg0);
		jboolean getKeyData(jint arg0, android::view::KeyCharacterMap_KeyData arg1);
		jint getKeyboardType();
		jchar getMatch(jint arg0, jcharArray arg1);
		jchar getMatch(jint arg0, jcharArray arg1, jint arg2);
		jint getModifierBehavior();
		jchar getNumber(jint arg0);
		jboolean isPrintingKey(jint arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

