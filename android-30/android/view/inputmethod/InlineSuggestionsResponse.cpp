#include "../../os/Parcel.hpp"
#include "./InlineSuggestionsResponse.hpp"

namespace android::view::inputmethod
{
	// Fields
	__JniBaseClass InlineSuggestionsResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestionsResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	InlineSuggestionsResponse::InlineSuggestionsResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint InlineSuggestionsResponse::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlineSuggestionsResponse::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass InlineSuggestionsResponse::getInlineSuggestions()
	{
		return callObjectMethod(
			"getInlineSuggestions",
			"()Ljava/util/List;"
		);
	}
	jint InlineSuggestionsResponse::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InlineSuggestionsResponse::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InlineSuggestionsResponse::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

