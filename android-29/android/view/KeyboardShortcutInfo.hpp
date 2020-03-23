#pragma once

#ifndef ANDROID_VIEW_KEYBOARDSHORTCUTINFO
#define ANDROID_VIEW_KEYBOARDSHORTCUTINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class KeyboardShortcutInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(jstring arg0, jchar arg1, jint arg2);
		
		// Methods
		jint getModifiers();
		QAndroidJniObject getLabel();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jint getKeycode();
		jchar getBaseCharacter();
	};
} // namespace __jni_impl::android::view

#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject KeyboardShortcutInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.KeyboardShortcutInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void KeyboardShortcutInfo::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyboardShortcutInfo",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2);
	}
	void KeyboardShortcutInfo::__constructor(jstring arg0, jchar arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyboardShortcutInfo",
			"(Ljava/lang/CharSequence;CI)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
	jint KeyboardShortcutInfo::getModifiers()
	{
		return __thiz.callMethod<jint>(
			"getModifiers",
			"()I");
	}
	QAndroidJniObject KeyboardShortcutInfo::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	jint KeyboardShortcutInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void KeyboardShortcutInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	jint KeyboardShortcutInfo::getKeycode()
	{
		return __thiz.callMethod<jint>(
			"getKeycode",
			"()I");
	}
	jchar KeyboardShortcutInfo::getBaseCharacter()
	{
		return __thiz.callMethod<jchar>(
			"getBaseCharacter",
			"()C");
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class KeyboardShortcutInfo : public __jni_impl::android::view::KeyboardShortcutInfo
	{
	public:
		KeyboardShortcutInfo(QAndroidJniObject obj) { __thiz = obj; }
		KeyboardShortcutInfo(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		KeyboardShortcutInfo(jstring arg0, jchar arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_KEYBOARDSHORTCUTINFO

