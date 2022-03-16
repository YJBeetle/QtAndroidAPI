#include "../../content/Context.hpp"
#include "../../os/Parcel.hpp"
#include "../../util/Size.hpp"
#include "./InlineSuggestionInfo.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlineSuggestion.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject InlineSuggestion::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InlineSuggestion",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint InlineSuggestion::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlineSuggestion::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::view::inputmethod::InlineSuggestionInfo InlineSuggestion::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/view/inputmethod/InlineSuggestionInfo;"
		);
	}
	jint InlineSuggestion::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void InlineSuggestion::inflate(android::content::Context arg0, android::util::Size arg1, JObject arg2, JObject arg3) const
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/Context;Landroid/util/Size;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	JString InlineSuggestion::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void InlineSuggestion::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

