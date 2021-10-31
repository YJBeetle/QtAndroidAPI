#include "../os/Parcel.hpp"
#include "./KeyCharacterMap_KeyData.hpp"
#include "./KeyCharacterMap.hpp"

namespace android::view
{
	// Fields
	jint KeyCharacterMap::ALPHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"ALPHA"
		);
	}
	jint KeyCharacterMap::BUILT_IN_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"BUILT_IN_KEYBOARD"
		);
	}
	jint KeyCharacterMap::COMBINING_ACCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"COMBINING_ACCENT"
		);
	}
	jint KeyCharacterMap::COMBINING_ACCENT_MASK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"COMBINING_ACCENT_MASK"
		);
	}
	__JniBaseClass KeyCharacterMap::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.KeyCharacterMap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint KeyCharacterMap::FULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"FULL"
		);
	}
	jchar KeyCharacterMap::HEX_INPUT()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.view.KeyCharacterMap",
			"HEX_INPUT"
		);
	}
	jint KeyCharacterMap::MODIFIER_BEHAVIOR_CHORDED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"MODIFIER_BEHAVIOR_CHORDED"
		);
	}
	jint KeyCharacterMap::MODIFIER_BEHAVIOR_CHORDED_OR_TOGGLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"MODIFIER_BEHAVIOR_CHORDED_OR_TOGGLED"
		);
	}
	jint KeyCharacterMap::NUMERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"NUMERIC"
		);
	}
	jchar KeyCharacterMap::PICKER_DIALOG_INPUT()
	{
		return QAndroidJniObject::getStaticField<jchar>(
			"android.view.KeyCharacterMap",
			"PICKER_DIALOG_INPUT"
		);
	}
	jint KeyCharacterMap::PREDICTIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"PREDICTIVE"
		);
	}
	jint KeyCharacterMap::SPECIAL_FUNCTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"SPECIAL_FUNCTION"
		);
	}
	jint KeyCharacterMap::VIRTUAL_KEYBOARD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.KeyCharacterMap",
			"VIRTUAL_KEYBOARD"
		);
	}
	
	// QAndroidJniObject forward
	KeyCharacterMap::KeyCharacterMap(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean KeyCharacterMap::deviceHasKey(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.view.KeyCharacterMap",
			"deviceHasKey",
			"(I)Z",
			arg0
		);
	}
	jbooleanArray KeyCharacterMap::deviceHasKeys(jintArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyCharacterMap",
			"deviceHasKeys",
			"([I)[Z",
			arg0
		).object<jbooleanArray>();
	}
	jint KeyCharacterMap::getDeadChar(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.view.KeyCharacterMap",
			"getDeadChar",
			"(II)I",
			arg0,
			arg1
		);
	}
	android::view::KeyCharacterMap KeyCharacterMap::load(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.KeyCharacterMap",
			"load",
			"(I)Landroid/view/KeyCharacterMap;",
			arg0
		);
	}
	jint KeyCharacterMap::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint KeyCharacterMap::get(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"get",
			"(II)I",
			arg0,
			arg1
		);
	}
	jchar KeyCharacterMap::getDisplayLabel(jint arg0)
	{
		return callMethod<jchar>(
			"getDisplayLabel",
			"(I)C",
			arg0
		);
	}
	jarray KeyCharacterMap::getEvents(jcharArray arg0)
	{
		return callObjectMethod(
			"getEvents",
			"([C)[Landroid/view/KeyEvent;",
			arg0
		).object<jarray>();
	}
	jboolean KeyCharacterMap::getKeyData(jint arg0, android::view::KeyCharacterMap_KeyData arg1)
	{
		return callMethod<jboolean>(
			"getKeyData",
			"(ILandroid/view/KeyCharacterMap$KeyData;)Z",
			arg0,
			arg1.object()
		);
	}
	jint KeyCharacterMap::getKeyboardType()
	{
		return callMethod<jint>(
			"getKeyboardType",
			"()I"
		);
	}
	jchar KeyCharacterMap::getMatch(jint arg0, jcharArray arg1)
	{
		return callMethod<jchar>(
			"getMatch",
			"(I[C)C",
			arg0,
			arg1
		);
	}
	jchar KeyCharacterMap::getMatch(jint arg0, jcharArray arg1, jint arg2)
	{
		return callMethod<jchar>(
			"getMatch",
			"(I[CI)C",
			arg0,
			arg1,
			arg2
		);
	}
	jint KeyCharacterMap::getModifierBehavior()
	{
		return callMethod<jint>(
			"getModifierBehavior",
			"()I"
		);
	}
	jchar KeyCharacterMap::getNumber(jint arg0)
	{
		return callMethod<jchar>(
			"getNumber",
			"(I)C",
			arg0
		);
	}
	jboolean KeyCharacterMap::isPrintingKey(jint arg0)
	{
		return callMethod<jboolean>(
			"isPrintingKey",
			"(I)Z",
			arg0
		);
	}
	void KeyCharacterMap::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

