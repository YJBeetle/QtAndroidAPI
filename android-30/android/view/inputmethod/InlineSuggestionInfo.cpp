#include "../../os/Parcel.hpp"
#include "../../widget/inline/InlinePresentationSpec.hpp"
#include "./InlineSuggestionInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	__JniBaseClass InlineSuggestionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring InlineSuggestionInfo::SOURCE_AUTOFILL()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"SOURCE_AUTOFILL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InlineSuggestionInfo::SOURCE_PLATFORM()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"SOURCE_PLATFORM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InlineSuggestionInfo::TYPE_ACTION()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"TYPE_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InlineSuggestionInfo::TYPE_SUGGESTION()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"TYPE_SUGGESTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	InlineSuggestionInfo::InlineSuggestionInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint InlineSuggestionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlineSuggestionInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray InlineSuggestionInfo::getAutofillHints()
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	android::widget::inline::InlinePresentationSpec InlineSuggestionInfo::getInlinePresentationSpec()
	{
		return callObjectMethod(
			"getInlinePresentationSpec",
			"()Landroid/widget/inline/InlinePresentationSpec;"
		);
	}
	jstring InlineSuggestionInfo::getSource()
	{
		return callObjectMethod(
			"getSource",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring InlineSuggestionInfo::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint InlineSuggestionInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InlineSuggestionInfo::isPinned()
	{
		return callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	jstring InlineSuggestionInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InlineSuggestionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

