#include "../../content/Context.hpp"
#include "../../os/Parcel.hpp"
#include "../../util/Size.hpp"
#include "./InlineSuggestionInfo.hpp"
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
	
	// QJniObject forward
	InlineSuggestion::InlineSuggestion(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint InlineSuggestion::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlineSuggestion::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::view::inputmethod::InlineSuggestionInfo InlineSuggestion::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/view/inputmethod/InlineSuggestionInfo;"
		);
	}
	jint InlineSuggestion::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void InlineSuggestion::inflate(android::content::Context arg0, android::util::Size arg1, JObject arg2, JObject arg3)
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
	jstring InlineSuggestion::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InlineSuggestion::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

