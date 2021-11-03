#include "../../content/ClipDescription.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"
#include "./InputContentInfo.hpp"

namespace android::view::inputmethod
{
	// Fields
	JObject InputContentInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.inputmethod.InputContentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	InputContentInfo::InputContentInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	InputContentInfo::InputContentInfo(android::net::Uri arg0, android::content::ClipDescription arg1)
		: JObject(
			"android.view.inputmethod.InputContentInfo",
			"(Landroid/net/Uri;Landroid/content/ClipDescription;)V",
			arg0.object(),
			arg1.object()
		) {}
	InputContentInfo::InputContentInfo(android::net::Uri arg0, android::content::ClipDescription arg1, android::net::Uri arg2)
		: JObject(
			"android.view.inputmethod.InputContentInfo",
			"(Landroid/net/Uri;Landroid/content/ClipDescription;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	jint InputContentInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::Uri InputContentInfo::getContentUri()
	{
		return callObjectMethod(
			"getContentUri",
			"()Landroid/net/Uri;"
		);
	}
	android::content::ClipDescription InputContentInfo::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	android::net::Uri InputContentInfo::getLinkUri()
	{
		return callObjectMethod(
			"getLinkUri",
			"()Landroid/net/Uri;"
		);
	}
	void InputContentInfo::releasePermission()
	{
		callMethod<void>(
			"releasePermission",
			"()V"
		);
	}
	void InputContentInfo::requestPermission()
	{
		callMethod<void>(
			"requestPermission",
			"()V"
		);
	}
	void InputContentInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::inputmethod

