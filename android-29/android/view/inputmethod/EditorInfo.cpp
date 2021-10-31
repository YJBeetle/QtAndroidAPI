#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "./EditorInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	__JniBaseClass EditorInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.EditorInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint EditorInfo::IME_ACTION_DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_DONE"
		);
	}
	jint EditorInfo::IME_ACTION_GO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_GO"
		);
	}
	jint EditorInfo::IME_ACTION_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_NEXT"
		);
	}
	jint EditorInfo::IME_ACTION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_NONE"
		);
	}
	jint EditorInfo::IME_ACTION_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_PREVIOUS"
		);
	}
	jint EditorInfo::IME_ACTION_SEARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_SEARCH"
		);
	}
	jint EditorInfo::IME_ACTION_SEND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_SEND"
		);
	}
	jint EditorInfo::IME_ACTION_UNSPECIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_UNSPECIFIED"
		);
	}
	jint EditorInfo::IME_FLAG_FORCE_ASCII()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_FORCE_ASCII"
		);
	}
	jint EditorInfo::IME_FLAG_NAVIGATE_NEXT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NAVIGATE_NEXT"
		);
	}
	jint EditorInfo::IME_FLAG_NAVIGATE_PREVIOUS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NAVIGATE_PREVIOUS"
		);
	}
	jint EditorInfo::IME_FLAG_NO_ACCESSORY_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_ACCESSORY_ACTION"
		);
	}
	jint EditorInfo::IME_FLAG_NO_ENTER_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_ENTER_ACTION"
		);
	}
	jint EditorInfo::IME_FLAG_NO_EXTRACT_UI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_EXTRACT_UI"
		);
	}
	jint EditorInfo::IME_FLAG_NO_FULLSCREEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_FULLSCREEN"
		);
	}
	jint EditorInfo::IME_FLAG_NO_PERSONALIZED_LEARNING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_PERSONALIZED_LEARNING"
		);
	}
	jint EditorInfo::IME_MASK_ACTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_MASK_ACTION"
		);
	}
	jint EditorInfo::IME_NULL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_NULL"
		);
	}
	jint EditorInfo::actionId()
	{
		return getField<jint>(
			"actionId"
		);
	}
	jstring EditorInfo::actionLabel()
	{
		return getObjectField(
			"actionLabel",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jarray EditorInfo::contentMimeTypes()
	{
		return getObjectField(
			"contentMimeTypes",
			"[Ljava/lang/String;"
		).object<jarray>();
	}
	android::os::Bundle EditorInfo::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	jint EditorInfo::fieldId()
	{
		return getField<jint>(
			"fieldId"
		);
	}
	jstring EditorInfo::fieldName()
	{
		return getObjectField(
			"fieldName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::os::LocaleList EditorInfo::hintLocales()
	{
		return getObjectField(
			"hintLocales",
			"Landroid/os/LocaleList;"
		);
	}
	jstring EditorInfo::hintText()
	{
		return getObjectField(
			"hintText",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint EditorInfo::imeOptions()
	{
		return getField<jint>(
			"imeOptions"
		);
	}
	jint EditorInfo::initialCapsMode()
	{
		return getField<jint>(
			"initialCapsMode"
		);
	}
	jint EditorInfo::initialSelEnd()
	{
		return getField<jint>(
			"initialSelEnd"
		);
	}
	jint EditorInfo::initialSelStart()
	{
		return getField<jint>(
			"initialSelStart"
		);
	}
	jint EditorInfo::inputType()
	{
		return getField<jint>(
			"inputType"
		);
	}
	jstring EditorInfo::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring EditorInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring EditorInfo::privateImeOptions()
	{
		return getObjectField(
			"privateImeOptions",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	EditorInfo::EditorInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EditorInfo::EditorInfo()
		: __JniBaseClass(
			"android.view.inputmethod.EditorInfo",
			"()V"
		) {}
	
	// Methods
	jint EditorInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void EditorInfo::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	void EditorInfo::makeCompatible(jint arg0)
	{
		callMethod<void>(
			"makeCompatible",
			"(I)V",
			arg0
		);
	}
	void EditorInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

