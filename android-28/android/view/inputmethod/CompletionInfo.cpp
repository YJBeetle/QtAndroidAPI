#include "../../os/Parcel.hpp"
#include "./CompletionInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	__JniBaseClass CompletionInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.CompletionInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	CompletionInfo::CompletionInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CompletionInfo::CompletionInfo(jlong arg0, jint arg1, jstring arg2)
		: __JniBaseClass(
			"android.view.inputmethod.CompletionInfo",
			"(JILjava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2
		) {}
	CompletionInfo::CompletionInfo(jlong arg0, jint arg1, jstring arg2, jstring arg3)
		: __JniBaseClass(
			"android.view.inputmethod.CompletionInfo",
			"(JILjava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint CompletionInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong CompletionInfo::getId()
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	jstring CompletionInfo::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint CompletionInfo::getPosition()
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jstring CompletionInfo::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring CompletionInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CompletionInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

