#pragma once

#include "../../content/ClipData.def.hpp"
#include "../../content/Intent.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./AssistContent.def.hpp"

namespace android::app::assist
{
	// Fields
	inline JObject AssistContent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.assist.AssistContent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AssistContent::AssistContent()
		: JObject(
			"android.app.assist.AssistContent",
			"()V"
		) {}
	
	// Methods
	inline jint AssistContent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::content::ClipData AssistContent::getClipData() const
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	inline android::os::Bundle AssistContent::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline android::content::Intent AssistContent::getIntent() const
	{
		return callObjectMethod(
			"getIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JString AssistContent::getStructuredData() const
	{
		return callObjectMethod(
			"getStructuredData",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri AssistContent::getWebUri() const
	{
		return callObjectMethod(
			"getWebUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jboolean AssistContent::isAppProvidedIntent() const
	{
		return callMethod<jboolean>(
			"isAppProvidedIntent",
			"()Z"
		);
	}
	inline jboolean AssistContent::isAppProvidedWebUri() const
	{
		return callMethod<jboolean>(
			"isAppProvidedWebUri",
			"()Z"
		);
	}
	inline void AssistContent::setClipData(android::content::ClipData arg0) const
	{
		callMethod<void>(
			"setClipData",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		);
	}
	inline void AssistContent::setIntent(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setIntent",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void AssistContent::setStructuredData(JString arg0) const
	{
		callMethod<void>(
			"setStructuredData",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void AssistContent::setWebUri(android::net::Uri arg0) const
	{
		callMethod<void>(
			"setWebUri",
			"(Landroid/net/Uri;)V",
			arg0.object()
		);
	}
	inline void AssistContent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::assist

// Base class headers

