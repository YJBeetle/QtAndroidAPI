#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "../../widget/inline/InlinePresentationSpec.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlineSuggestionInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject InlineSuggestionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString InlineSuggestionInfo::SOURCE_AUTOFILL()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"SOURCE_AUTOFILL",
			"Ljava/lang/String;"
		);
	}
	JString InlineSuggestionInfo::SOURCE_PLATFORM()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"SOURCE_PLATFORM",
			"Ljava/lang/String;"
		);
	}
	JString InlineSuggestionInfo::TYPE_ACTION()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"TYPE_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString InlineSuggestionInfo::TYPE_SUGGESTION()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionInfo",
			"TYPE_SUGGESTION",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	InlineSuggestionInfo::InlineSuggestionInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint InlineSuggestionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlineSuggestionInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray InlineSuggestionInfo::getAutofillHints() const
	{
		return callObjectMethod(
			"getAutofillHints",
			"()[Ljava/lang/String;"
		);
	}
	android::widget::inline::InlinePresentationSpec InlineSuggestionInfo::getInlinePresentationSpec() const
	{
		return callObjectMethod(
			"getInlinePresentationSpec",
			"()Landroid/widget/inline/InlinePresentationSpec;"
		);
	}
	JString InlineSuggestionInfo::getSource() const
	{
		return callObjectMethod(
			"getSource",
			"()Ljava/lang/String;"
		);
	}
	JString InlineSuggestionInfo::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	jint InlineSuggestionInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean InlineSuggestionInfo::isPinned() const
	{
		return callMethod<jboolean>(
			"isPinned",
			"()Z"
		);
	}
	JString InlineSuggestionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void InlineSuggestionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

