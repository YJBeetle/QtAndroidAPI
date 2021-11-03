#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../util/Size.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./InlinePresentationSpec.hpp"

namespace android::widget::inline
{
	// Fields
	JObject InlinePresentationSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.widget.inline.InlinePresentationSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	InlinePresentationSpec::InlinePresentationSpec(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint InlinePresentationSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean InlinePresentationSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::util::Size InlinePresentationSpec::getMaxSize() const
	{
		return callObjectMethod(
			"getMaxSize",
			"()Landroid/util/Size;"
		);
	}
	android::util::Size InlinePresentationSpec::getMinSize() const
	{
		return callObjectMethod(
			"getMinSize",
			"()Landroid/util/Size;"
		);
	}
	android::os::Bundle InlinePresentationSpec::getStyle() const
	{
		return callObjectMethod(
			"getStyle",
			"()Landroid/os/Bundle;"
		);
	}
	jint InlinePresentationSpec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString InlinePresentationSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void InlinePresentationSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::widget::inline

