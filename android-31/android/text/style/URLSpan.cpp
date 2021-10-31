#include "../../os/Parcel.hpp"
#include "../../view/View.hpp"
#include "./URLSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QAndroidJniObject forward
	URLSpan::URLSpan(QAndroidJniObject obj) : android::text::style::ClickableSpan(obj) {}
	
	// Constructors
	URLSpan::URLSpan(android::os::Parcel arg0)
		: android::text::style::ClickableSpan(
			"android.text.style.URLSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	URLSpan::URLSpan(jstring arg0)
		: android::text::style::ClickableSpan(
			"android.text.style.URLSpan",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint URLSpan::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint URLSpan::getSpanTypeId()
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jstring URLSpan::getURL()
	{
		return callObjectMethod(
			"getURL",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void URLSpan::onClick(android::view::View arg0)
	{
		callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void URLSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

