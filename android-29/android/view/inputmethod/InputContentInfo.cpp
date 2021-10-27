#include "../../content/ClipDescription.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./InputContentInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	QAndroidJniObject InputContentInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.inputmethod.InputContentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	InputContentInfo::InputContentInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InputContentInfo::InputContentInfo(android::net::Uri &arg0, android::content::ClipDescription &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputContentInfo",
			"(Landroid/net/Uri;Landroid/content/ClipDescription;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	InputContentInfo::InputContentInfo(android::net::Uri &arg0, android::content::ClipDescription &arg1, android::net::Uri &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inputmethod.InputContentInfo",
			"(Landroid/net/Uri;Landroid/content/ClipDescription;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint InputContentInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject InputContentInfo::getContentUri()
	{
		return __thiz.callObjectMethod(
			"getContentUri",
			"()Landroid/net/Uri;"
		);
	}
	QAndroidJniObject InputContentInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	QAndroidJniObject InputContentInfo::getLinkUri()
	{
		return __thiz.callObjectMethod(
			"getLinkUri",
			"()Landroid/net/Uri;"
		);
	}
	void InputContentInfo::releasePermission()
	{
		__thiz.callMethod<void>(
			"releasePermission",
			"()V"
		);
	}
	void InputContentInfo::requestPermission()
	{
		__thiz.callMethod<void>(
			"requestPermission",
			"()V"
		);
	}
	void InputContentInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

