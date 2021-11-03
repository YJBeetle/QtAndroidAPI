#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "../../os/Parcel.hpp"
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
	jint InlineSuggestionsRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlineSuggestionsRequest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::os::Bundle InlineSuggestionsRequest::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring InlineSuggestionsRequest::getHostPackageName()
	{
		return callObjectMethod(
			"getHostPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	JObject InlineSuggestionsRequest::getInlinePresentationSpecs()
	{
		return callObjectMethod(
			"getInlinePresentationSpecs",
			"()Ljava/util/List;"
		);
	}
	jint InlineSuggestionsRequest::getMaxSuggestionCount()
	{
		return callMethod<jint>(
			"getMaxSuggestionCount",
			"()I"
		);
	}
	android::os::LocaleList InlineSuggestionsRequest::getSupportedLocales()
	{
		return callObjectMethod(
			"getSupportedLocales",
			"()Landroid/os/LocaleList;"
		);
	}
	jint InlineSuggestionsRequest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InlineSuggestionsRequest::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InlineSuggestionsRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

