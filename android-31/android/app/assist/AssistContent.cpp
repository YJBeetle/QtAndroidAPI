#include "../../content/ClipData.hpp"
#include "../../content/Intent.hpp"
#include "../../net/Uri.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./AssistContent.hpp"

namespace android::app::assist
{
	// Fields
	__JniBaseClass AssistContent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.assist.AssistContent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AssistContent::AssistContent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AssistContent::AssistContent()
		: __JniBaseClass(
			"android.app.assist.AssistContent",
			"()V"
		) {}
	
	// Methods
	jint AssistContent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::content::ClipData AssistContent::getClipData()
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	android::os::Bundle AssistContent::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::content::Intent AssistContent::getIntent()
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	jstring AssistContent::getStructuredData()
	{
		return callObjectMethod(
			"getStructuredData",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri AssistContent::getWebUri()
	{
		return callObjectMethod(
			"getWebUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean AssistContent::isAppProvidedIntent()
	{
		return callMethod<jboolean>(
			"isAppProvidedIntent",
			"()Z"
		);
	}
	jboolean AssistContent::isAppProvidedWebUri()
	{
		return callMethod<jboolean>(
			"isAppProvidedWebUri",
			"()Z"
		);
	}
	void AssistContent::setClipData(android::content::ClipData arg0)
	{
		callMethod<void>(
			"setClipData",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		);
	}
	void AssistContent::setIntent(android::content::Intent arg0)
	{
		callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void AssistContent::setStructuredData(jstring arg0)
	{
		callMethod<void>(
			"setStructuredData",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AssistContent::setWebUri(android::net::Uri arg0)
	{
		callMethod<void>(
			"setWebUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	void AssistContent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::assist

