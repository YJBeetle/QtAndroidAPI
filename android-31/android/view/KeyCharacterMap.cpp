#include "../../JCharArray.hpp"
#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JBooleanArray.hpp"
#include "../os/Parcel.hpp"
#include "./KeyCharacterMap_KeyData.hpp"
#include "../../JObject.hpp"
#include "./KeyCharacterMap.hpp"

namespace android::view
{
	// Fields
	jint KeyCharacterMap::ALPHA()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"ALPHA"
		);
	}
	jint KeyCharacterMap::BUILT_IN_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"BUILT_IN_KEYBOARD"
		);
	}
	jint KeyCharacterMap::COMBINING_ACCENT()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"COMBINING_ACCENT"
		);
	}
	jint KeyCharacterMap::COMBINING_ACCENT_MASK()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"COMBINING_ACCENT_MASK"
		);
	}
	JObject KeyCharacterMap::CREATOR()
	{
		return getStaticObjectField(
			"android.view.KeyCharacterMap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint KeyCharacterMap::FULL()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"FULL"
		);
	}
	jchar KeyCharacterMap::HEX_INPUT()
	{
		return getStaticField<jchar>(
			"android.view.KeyCharacterMap",
			"HEX_INPUT"
		);
	}
	jint KeyCharacterMap::MODIFIER_BEHAVIOR_CHORDED()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"MODIFIER_BEHAVIOR_CHORDED"
		);
	}
	jint KeyCharacterMap::MODIFIER_BEHAVIOR_CHORDED_OR_TOGGLED()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"MODIFIER_BEHAVIOR_CHORDED_OR_TOGGLED"
		);
	}
	jint KeyCharacterMap::NUMERIC()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"NUMERIC"
		);
	}
	jchar KeyCharacterMap::PICKER_DIALOG_INPUT()
	{
		return getStaticField<jchar>(
			"android.view.KeyCharacterMap",
			"PICKER_DIALOG_INPUT"
		);
	}
	jint KeyCharacterMap::PREDICTIVE()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"PREDICTIVE"
		);
	}
	jint KeyCharacterMap::SPECIAL_FUNCTION()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"SPECIAL_FUNCTION"
		);
	}
	jint KeyCharacterMap::VIRTUAL_KEYBOARD()
	{
		return getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"VIRTUAL_KEYBOARD"
		);
	}
	
	// QJniObject forward
	KeyCharacterMap::KeyCharacterMap(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean KeyCharacterMap::deviceHasKey(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.view.KeyCharacterMap",
			"deviceHasKey",
			"(I)Z",
			arg0
		);
	}
	JBooleanArray KeyCharacterMap::deviceHasKeys(JIntArray arg0)
	{
		return callStaticObjectMethod(
			"android.view.KeyCharacterMap",
			"deviceHasKeys",
			"([I)[Z",
			arg0.object<jintArray>()
		);
	}
	jint KeyCharacterMap::getDeadChar(jint arg0, jint arg1)
	{
		return callStaticMethod<jint>(
			"android.view.KeyCharacterMap",
			"getDeadChar",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::view::KeyCharacterMap KeyCharacterMap::load(jint arg0)
	{
		return callStaticObjectMethod(
			"android.view.KeyCharacterMap",
			"load",
			"(I)Landroid/view/KeyCharacterMap;",
			arg0
		);
	}
	jint KeyCharacterMap::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean KeyCharacterMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint KeyCharacterMap::get(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"get",
			"(II)I",
			arg0,
			arg1
		);
	}
	jchar KeyCharacterMap::getDisplayLabel(jint arg0) const
	{
		return callMethod<jchar>(
			"getDisplayLabel",
			"(I)C",
			arg0
		);
	}
	JArray KeyCharacterMap::getEvents(JCharArray arg0) const
	{
		return callObjectMethod(
			"getEvents",
			"([C)[Landroid/view/KeyEvent;",
			arg0.object<jcharArray>()
		);
	}
	jboolean KeyCharacterMap::getKeyData(jint arg0, android::view::KeyCharacterMap_KeyData arg1) const
	{
		return callMethod<jboolean>(
			"getKeyData",
			"(ILandroid/view/KeyCharacterMap$KeyData;)Z",
			arg0,
			arg1.object()
		);
	}
	jint KeyCharacterMap::getKeyboardType() const
	{
		return callMethod<jint>(
			"getKeyboardType",
			"()I"
		);
	}
	jchar KeyCharacterMap::getMatch(jint arg0, JCharArray arg1) const
	{
		return callMethod<jchar>(
			"getMatch",
			"(I[C)C",
			arg0,
			arg1.object<jcharArray>()
		);
	}
	jchar KeyCharacterMap::getMatch(jint arg0, JCharArray arg1, jint arg2) const
	{
		return callMethod<jchar>(
			"getMatch",
			"(I[CI)C",
			arg0,
			arg1.object<jcharArray>(),
			arg2
		);
	}
	jint KeyCharacterMap::getModifierBehavior() const
	{
		return callMethod<jint>(
			"getModifierBehavior",
			"()I"
		);
	}
	jchar KeyCharacterMap::getNumber(jint arg0) const
	{
		return callMethod<jchar>(
			"getNumber",
			"(I)C",
			arg0
		);
	}
	jboolean KeyCharacterMap::isPrintingKey(jint arg0) const
	{
		return callMethod<jboolean>(
			"isPrintingKey",
			"(I)Z",
			arg0
		);
	}
	void KeyCharacterMap::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

