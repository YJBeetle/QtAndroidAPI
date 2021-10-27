#pragma once

#ifndef ANDROID_VIEW_KEYCHARACTERMAP
#define ANDROID_VIEW_KEYCHARACTERMAP

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view
{
	class KeyCharacterMap_KeyData;
}

namespace __jni_impl::android::view
{
	class KeyCharacterMap : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALPHA();
		static jint BUILT_IN_KEYBOARD();
		static jint COMBINING_ACCENT();
		static jint COMBINING_ACCENT_MASK();
		static QAndroidJniObject CREATOR();
		static jint FULL();
		static jchar HEX_INPUT();
		static jint MODIFIER_BEHAVIOR_CHORDED();
		static jint MODIFIER_BEHAVIOR_CHORDED_OR_TOGGLED();
		static jint NUMERIC();
		static jchar PICKER_DIALOG_INPUT();
		static jint PREDICTIVE();
		static jint SPECIAL_FUNCTION();
		static jint VIRTUAL_KEYBOARD();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean deviceHasKey(jint arg0);
		static jbooleanArray deviceHasKeys(jintArray arg0);
		static jint getDeadChar(jint arg0, jint arg1);
		static QAndroidJniObject load(jint arg0);
		jint describeContents();
		jint get(jint arg0, jint arg1);
		jchar getDisplayLabel(jint arg0);
		jarray getEvents(jcharArray arg0);
		jboolean getKeyData(jint arg0, __jni_impl::android::view::KeyCharacterMap_KeyData arg1);
		jint getKeyboardType();
		jchar getMatch(jint arg0, jcharArray arg1);
		jchar getMatch(jint arg0, jcharArray arg1, jint arg2);
		jint getModifierBehavior();
		jchar getNumber(jint arg0);
		jboolean isPrintingKey(jint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"
#include "KeyCharacterMap_KeyData.hpp"

namespace __jni_impl::android::view
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
	QAndroidJniObject KeyCharacterMap::CREATOR()
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
	
	// Constructors
	void KeyCharacterMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyCharacterMap",
			"(V)V");
	}
	
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
	QAndroidJniObject KeyCharacterMap::load(jint arg0)
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
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint KeyCharacterMap::get(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"get",
			"(II)I",
			arg0,
			arg1
		);
	}
	jchar KeyCharacterMap::getDisplayLabel(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"getDisplayLabel",
			"(I)C",
			arg0
		);
	}
	jarray KeyCharacterMap::getEvents(jcharArray arg0)
	{
		return __thiz.callObjectMethod(
			"getEvents",
			"([C)[Landroid/view/KeyEvent;",
			arg0
		).object<jarray>();
	}
	jboolean KeyCharacterMap::getKeyData(jint arg0, __jni_impl::android::view::KeyCharacterMap_KeyData arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getKeyData",
			"(ILandroid/view/KeyCharacterMap$KeyData;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint KeyCharacterMap::getKeyboardType()
	{
		return __thiz.callMethod<jint>(
			"getKeyboardType",
			"()I"
		);
	}
	jchar KeyCharacterMap::getMatch(jint arg0, jcharArray arg1)
	{
		return __thiz.callMethod<jchar>(
			"getMatch",
			"(I[C)C",
			arg0,
			arg1
		);
	}
	jchar KeyCharacterMap::getMatch(jint arg0, jcharArray arg1, jint arg2)
	{
		return __thiz.callMethod<jchar>(
			"getMatch",
			"(I[CI)C",
			arg0,
			arg1,
			arg2
		);
	}
	jint KeyCharacterMap::getModifierBehavior()
	{
		return __thiz.callMethod<jint>(
			"getModifierBehavior",
			"()I"
		);
	}
	jchar KeyCharacterMap::getNumber(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"getNumber",
			"(I)C",
			arg0
		);
	}
	jboolean KeyCharacterMap::isPrintingKey(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isPrintingKey",
			"(I)Z",
			arg0
		);
	}
	void KeyCharacterMap::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class KeyCharacterMap : public __jni_impl::android::view::KeyCharacterMap
	{
	public:
		KeyCharacterMap(QAndroidJniObject obj) { __thiz = obj; }
		KeyCharacterMap()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_KEYCHARACTERMAP

