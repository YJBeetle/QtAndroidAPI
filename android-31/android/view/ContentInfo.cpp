#include "../content/ClipData.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ContentInfo.hpp"

namespace android::view
{
	// Fields
	JObject ContentInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.view.ContentInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint ContentInfo::FLAG_CONVERT_TO_PLAIN_TEXT()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"FLAG_CONVERT_TO_PLAIN_TEXT"
		);
	}
	jint ContentInfo::SOURCE_APP()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_APP"
		);
	}
	jint ContentInfo::SOURCE_AUTOFILL()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_AUTOFILL"
		);
	}
	jint ContentInfo::SOURCE_CLIPBOARD()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_CLIPBOARD"
		);
	}
	jint ContentInfo::SOURCE_DRAG_AND_DROP()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_DRAG_AND_DROP"
		);
	}
	jint ContentInfo::SOURCE_INPUT_METHOD()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_INPUT_METHOD"
		);
	}
	jint ContentInfo::SOURCE_PROCESS_TEXT()
	{
		return getStaticField<jint>(
			"android.view.ContentInfo",
			"SOURCE_PROCESS_TEXT"
		);
	}
	
	// QAndroidJniObject forward
	ContentInfo::ContentInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ContentInfo::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ClipData ContentInfo::getClip()
	{
		return callObjectMethod(
			"getClip",
			"()Landroid/content/ClipData;"
		);
	}
	android::os::Bundle ContentInfo::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jint ContentInfo::getFlags()
	{
		return callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	android::net::Uri ContentInfo::getLinkUri()
	{
		return callObjectMethod(
			"getLinkUri",
			"()Landroid/net/Uri;"
		);
	}
	jint ContentInfo::getSource()
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	JString ContentInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ContentInfo::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

