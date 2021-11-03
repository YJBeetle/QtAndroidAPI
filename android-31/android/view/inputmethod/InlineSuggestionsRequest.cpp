#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
#include "../../widget/inline/InlinePresentationSpec.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlineSuggestionsRequest.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject InlineSuggestionsRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionsRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint InlineSuggestionsRequest::SUGGESTION_COUNT_UNLIMITED()
	{
		return getStaticField<jint>(
			"android.view.inputmethod.InlineSuggestionsRequest",
			"SUGGESTION_COUNT_UNLIMITED"
		);
	}
	
	// QJniObject forward
	InlineSuggestionsRequest::InlineSuggestionsRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint InlineSuggestionsRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlineSuggestionsRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle InlineSuggestionsRequest::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	JString InlineSuggestionsRequest::getHostPackageName() const
	{
		return callObjectMethod(
			"getHostPackageName",
			"()Ljava/lang/String;"
		);
	}
	JObject InlineSuggestionsRequest::getInlinePresentationSpecs() const
	{
		return callObjectMethod(
			"getInlinePresentationSpecs",
			"()Ljava/util/List;"
		);
	}
	android::widget::inline::InlinePresentationSpec InlineSuggestionsRequest::getInlineTooltipPresentationSpec() const
	{
		return callObjectMethod(
			"getInlineTooltipPresentationSpec",
			"()Landroid/widget/inline/InlinePresentationSpec;"
		);
	}
	jint InlineSuggestionsRequest::getMaxSuggestionCount() const
	{
		return callMethod<jint>(
			"getMaxSuggestionCount",
			"()I"
		);
	}
	android::os::LocaleList InlineSuggestionsRequest::getSupportedLocales() const
	{
		return callObjectMethod(
			"getSupportedLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint InlineSuggestionsRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString InlineSuggestionsRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void InlineSuggestionsRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

