#pragma once

#include "../../../JArray.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./SurroundingText.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./EditorInfo.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	inline JObject EditorInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.EditorInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint EditorInfo::IME_ACTION_DONE()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_DONE"
		);
	}
	inline jint EditorInfo::IME_ACTION_GO()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_GO"
		);
	}
	inline jint EditorInfo::IME_ACTION_NEXT()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_NEXT"
		);
	}
	inline jint EditorInfo::IME_ACTION_NONE()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_NONE"
		);
	}
	inline jint EditorInfo::IME_ACTION_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_PREVIOUS"
		);
	}
	inline jint EditorInfo::IME_ACTION_SEARCH()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_SEARCH"
		);
	}
	inline jint EditorInfo::IME_ACTION_SEND()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_SEND"
		);
	}
	inline jint EditorInfo::IME_ACTION_UNSPECIFIED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_ACTION_UNSPECIFIED"
		);
	}
	inline jint EditorInfo::IME_FLAG_FORCE_ASCII()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_FORCE_ASCII"
		);
	}
	inline jint EditorInfo::IME_FLAG_NAVIGATE_NEXT()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NAVIGATE_NEXT"
		);
	}
	inline jint EditorInfo::IME_FLAG_NAVIGATE_PREVIOUS()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NAVIGATE_PREVIOUS"
		);
	}
	inline jint EditorInfo::IME_FLAG_NO_ACCESSORY_ACTION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_ACCESSORY_ACTION"
		);
	}
	inline jint EditorInfo::IME_FLAG_NO_ENTER_ACTION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_ENTER_ACTION"
		);
	}
	inline jint EditorInfo::IME_FLAG_NO_EXTRACT_UI()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_EXTRACT_UI"
		);
	}
	inline jint EditorInfo::IME_FLAG_NO_FULLSCREEN()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_FULLSCREEN"
		);
	}
	inline jint EditorInfo::IME_FLAG_NO_PERSONALIZED_LEARNING()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_FLAG_NO_PERSONALIZED_LEARNING"
		);
	}
	inline jint EditorInfo::IME_MASK_ACTION()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_MASK_ACTION"
		);
	}
	inline jint EditorInfo::IME_NULL()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.EditorInfo",
			"IME_NULL"
		);
	}
	inline jint EditorInfo::actionId()
	{
		return getField<jint>(
			"actionId"
		);
	}
	inline JString EditorInfo::actionLabel()
	{
		return getObjectField(
			"actionLabel",
			"Ljava/lang/CharSequence;"
		);
	}
	inline JArray EditorInfo::contentMimeTypes()
	{
		return getObjectField(
			"contentMimeTypes",
			"[Ljava/lang/String;"
		);
	}
	inline android::os::Bundle EditorInfo::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
		);
	}
	inline jint EditorInfo::fieldId()
	{
		return getField<jint>(
			"fieldId"
		);
	}
	inline JString EditorInfo::fieldName()
	{
		return getObjectField(
			"fieldName",
			"Ljava/lang/String;"
		);
	}
	inline android::os::LocaleList EditorInfo::hintLocales()
	{
		return getObjectField(
			"hintLocales",
			"Landroid/os/LocaleList;"
		);
	}
	inline JString EditorInfo::hintText()
	{
		return getObjectField(
			"hintText",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint EditorInfo::imeOptions()
	{
		return getField<jint>(
			"imeOptions"
		);
	}
	inline jint EditorInfo::initialCapsMode()
	{
		return getField<jint>(
			"initialCapsMode"
		);
	}
	inline jint EditorInfo::initialSelEnd()
	{
		return getField<jint>(
			"initialSelEnd"
		);
	}
	inline jint EditorInfo::initialSelStart()
	{
		return getField<jint>(
			"initialSelStart"
		);
	}
	inline jint EditorInfo::inputType()
	{
		return getField<jint>(
			"inputType"
		);
	}
	inline JString EditorInfo::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		);
	}
	inline JString EditorInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	inline JString EditorInfo::privateImeOptions()
	{
		return getObjectField(
			"privateImeOptions",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline EditorInfo::EditorInfo()
		: JObject(
			"android.view.inputmethod.EditorInfo",
			"()V"
		) {}
	
	// Methods
	inline jint EditorInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void EditorInfo::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString EditorInfo::getInitialSelectedText(jint arg0) const
	{
		return callObjectMethod(
			"getInitialSelectedText",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	inline android::view::inputmethod::SurroundingText EditorInfo::getInitialSurroundingText(jint arg0, jint arg1, jint arg2) const
	{
		return callObjectMethod(
			"getInitialSurroundingText",
			"(III)Landroid/view/inputmethod/SurroundingText;",
			arg0,
			arg1,
			arg2
		);
	}
	inline JString EditorInfo::getInitialTextAfterCursor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getInitialTextAfterCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline JString EditorInfo::getInitialTextBeforeCursor(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getInitialTextBeforeCursor",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	inline void EditorInfo::makeCompatible(jint arg0) const
	{
		callMethod<void>(
			"makeCompatible",
			"(I)V",
			arg0
		);
	}
	inline void EditorInfo::setInitialSurroundingSubText(JString arg0, jint arg1) const
	{
		callMethod<void>(
			"setInitialSurroundingSubText",
			"(Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void EditorInfo::setInitialSurroundingText(JString arg0) const
	{
		callMethod<void>(
			"setInitialSurroundingText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void EditorInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
