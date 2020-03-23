#pragma once

#ifndef ANDROID_VIEW_KEYBOARDSHORTCUTGROUP
#define ANDROID_VIEW_KEYBOARDSHORTCUTGROUP

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class KeyboardShortcutInfo;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::view
{
	class KeyboardShortcutGroup : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject getLabel();
		void addItem(__jni_impl::android::view::KeyboardShortcutInfo arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getItems();
	};
} // namespace __jni_impl::android::view

#include "KeyboardShortcutInfo.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject KeyboardShortcutGroup::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.KeyboardShortcutGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void KeyboardShortcutGroup::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;Ljava/util/List;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void KeyboardShortcutGroup::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject KeyboardShortcutGroup::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;");
	}
	void KeyboardShortcutGroup::addItem(__jni_impl::android::view::KeyboardShortcutInfo arg0)
	{
		__thiz.callMethod<void>(
			"addItem",
			"(Landroid/view/KeyboardShortcutInfo;)V",
			arg0.__jniObject().object());
	}
	jint KeyboardShortcutGroup::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void KeyboardShortcutGroup::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject KeyboardShortcutGroup::getItems()
	{
		return __thiz.callObjectMethod(
			"getItems",
			"()Ljava/util/List;");
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class KeyboardShortcutGroup : public __jni_impl::android::view::KeyboardShortcutGroup
	{
	public:
		KeyboardShortcutGroup(QAndroidJniObject obj) { __thiz = obj; }
		KeyboardShortcutGroup(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		KeyboardShortcutGroup(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_KEYBOARDSHORTCUTGROUP

