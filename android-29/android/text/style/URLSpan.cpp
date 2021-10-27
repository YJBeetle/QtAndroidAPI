#include "../../os/Parcel.hpp"
#include "../../view/View.hpp"
#include "./URLSpan.hpp"

namespace android::text::style
{
	// Fields
	
	URLSpan::URLSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	URLSpan::URLSpan(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.URLSpan",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	URLSpan::URLSpan(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.URLSpan",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	URLSpan::URLSpan(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.style.URLSpan",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint URLSpan::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint URLSpan::getSpanTypeId()
	{
		return __thiz.callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	jstring URLSpan::getURL()
	{
		return __thiz.callObjectMethod(
			"getURL",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void URLSpan::onClick(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void URLSpan::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::text::style

