#include "../../../JArray.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./EditorInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject EditorInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.EditorInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint EditorInfo::IME_ACTION_DONE()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_DONE"
		);
	}
	jint EditorInfo::IME_ACTION_GO()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_GO"
		);
	}
	jint EditorInfo::IME_ACTION_NEXT()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_NEXT"
		);
	}
	jint EditorInfo::IME_ACTION_NONE()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_NONE"
		);
	}
	jint EditorInfo::IME_ACTION_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_PREVIOUS"
		);
	}
	jint EditorInfo::IME_ACTION_SEARCH()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_SEARCH"
		);
	}
	jint EditorInfo::IME_ACTION_SEND()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_SEND"
		);
	}
	jint EditorInfo::IME_ACTION_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_UNSPECIFIED"
		);
	}
	jint EditorInfo::IME_FLAG_FORCE_ASCII()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_FORCE_ASCII"
		);
	}
	jint EditorInfo::IME_FLAG_NAVIGATE_NEXT()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NAVIGATE_NEXT"
		);
	}
	jint EditorInfo::IME_FLAG_NAVIGATE_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NAVIGATE_PREVIOUS"
		);
	}
	jint EditorInfo::IME_FLAG_NO_ACCESSORY_ACTION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_ACCESSORY_ACTION"
		);
	}
	jint EditorInfo::IME_FLAG_NO_ENTER_ACTION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_ENTER_ACTION"
		);
	}
	jint EditorInfo::IME_FLAG_NO_EXTRACT_UI()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_EXTRACT_UI"
		);
	}
	jint EditorInfo::IME_FLAG_NO_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_FULLSCREEN"
		);
	}
	jint EditorInfo::IME_FLAG_NO_PERSONALIZED_LEARNING()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_PERSONALIZED_LEARNING"
		);
	}
	jint EditorInfo::IME_MASK_ACTION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_MASK_ACTION"
		);
	}
	jint EditorInfo::IME_NULL()
	{
		return getStaticField<jint>(
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
	JString EditorInfo::actionLabel()
	{
		return getObjectField(
			"actionLabel",
			"Ljava/lang/CharSequence;"
		);
	}
	JArray EditorInfo::contentMimeTypes()
	{
		return getObjectField(
			"contentMimeTypes",
			"[Ljava/lang/String;"
		);
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
	JString EditorInfo::fieldName()
	{
		return getObjectField(
			"fieldName",
			"Ljava/lang/String;"
		);
	}
	android::os::LocaleList EditorInfo::hintLocales()
	{
		return getObjectField(
			"hintLocales",
			"Landroid/os/LocaleList;"
		);
	}
	JString EditorInfo::hintText()
	{
		return getObjectField(
			"hintText",
			"Ljava/lang/CharSequence;"
		);
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
	JString EditorInfo::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		);
	}
	JString EditorInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	JString EditorInfo::privateImeOptions()
	{
		return getObjectField(
			"privateImeOptions",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	EditorInfo::EditorInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	EditorInfo::EditorInfo()
		: JObject(
			"android.view.inputmethod.EditorInfo",
			"()V"
		) {}
	
	// Methods
	jint EditorInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void EditorInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	void EditorInfo::makeCompatible(jint arg0) const
	{
		callMethod<void>(
			"makeCompatible",
			"(I)V",
			arg0
		);
	}
	void EditorInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

