#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./CompletionInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject CompletionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.CompletionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CompletionInfo::CompletionInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	CompletionInfo::CompletionInfo(jlong arg0, jint arg1, JString arg2)
		: JObject(
			"android.view.inputmethod.CompletionInfo",
			"(JILjava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2.object<jstring>()
		) {}
	CompletionInfo::CompletionInfo(jlong arg0, jint arg1, JString arg2, JString arg3)
		: JObject(
			"android.view.inputmethod.CompletionInfo",
			"(JILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	jint CompletionInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong CompletionInfo::getId() const
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	JString CompletionInfo::getLabel() const
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint CompletionInfo::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	JString CompletionInfo::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString CompletionInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CompletionInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

