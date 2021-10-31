#include "../os/Parcel.hpp"
#include "./KeyboardShortcutInfo.hpp"
#include "./KeyboardShortcutGroup.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject KeyboardShortcutGroup::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.KeyboardShortcutGroup",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	KeyboardShortcutGroup::KeyboardShortcutGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyboardShortcutGroup::KeyboardShortcutGroup(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	KeyboardShortcutGroup::KeyboardShortcutGroup(jstring arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.KeyboardShortcutGroup",
			"(Ljava/lang/CharSequence;Ljava/util/List;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void KeyboardShortcutGroup::addItem(android::view::KeyboardShortcutInfo arg0)
	{
		__thiz.callMethod<void>(
			"addItem",
			"(Landroid/view/KeyboardShortcutInfo;)V",
			arg0.__jniObject().object()
		);
	}
	jint KeyboardShortcutGroup::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject KeyboardShortcutGroup::getItems()
	{
		return __thiz.callObjectMethod(
			"getItems",
			"()Ljava/util/List;"
		);
	}
	jstring KeyboardShortcutGroup::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void KeyboardShortcutGroup::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

