#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../util/Size.hpp"
#include "./InlinePresentationSpec.hpp"

namespace android::widget::inline
{
	// Fields
	__JniBaseClass InlinePresentationSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.inline.InlinePresentationSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	InlinePresentationSpec::InlinePresentationSpec(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint InlinePresentationSpec::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlinePresentationSpec::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::util::Size InlinePresentationSpec::getMaxSize()
	{
		return callObjectMethod(
			"getMaxSize",
			"()Landroid/util/Size;"
		);
	}
	android::util::Size InlinePresentationSpec::getMinSize()
	{
		return callObjectMethod(
			"getMinSize",
			"()Landroid/util/Size;"
		);
	}
	android::os::Bundle InlinePresentationSpec::getStyle()
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/os/Bundle;"
		);
	}
	jint InlinePresentationSpec::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring InlinePresentationSpec::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void InlinePresentationSpec::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget::inline

