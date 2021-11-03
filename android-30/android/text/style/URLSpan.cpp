#include "../../os/Parcel.hpp"
#include "../../view/View.hpp"
#include "../../../JString.hpp"
#include "./URLSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	URLSpan::URLSpan(QJniObject obj) : android::text::style::ClickableSpan(obj) {}
	
	// Constructors
	URLSpan::URLSpan(android::os::Parcel arg0)
		: android::text::style::ClickableSpan(
			"android.text.style.URLSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	URLSpan::URLSpan(JString arg0)
		: android::text::style::ClickableSpan(
			"android.text.style.URLSpan",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint URLSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint URLSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	JString URLSpan::getURL() const
	{
		return callObjectMethod(
			"getURL",
			"()Ljava/lang/String;"
		);
	}
	void URLSpan::onClick(android::view::View arg0) const
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void URLSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

