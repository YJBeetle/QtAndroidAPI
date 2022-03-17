#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../content/Intent.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./WebChromeClient_FileChooserParams.def.hpp"

namespace android::webkit
{
	// Fields
	inline jint WebChromeClient_FileChooserParams::MODE_OPEN()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN"
		);
	}
	inline jint WebChromeClient_FileChooserParams::MODE_OPEN_MULTIPLE()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_OPEN_MULTIPLE"
		);
	}
	inline jint WebChromeClient_FileChooserParams::MODE_SAVE()
	{
		return getStaticField<jint>(
			"android.webkit.WebChromeClient$FileChooserParams",
			"MODE_SAVE"
		);
	}
	
	// Constructors
	inline WebChromeClient_FileChooserParams::WebChromeClient_FileChooserParams()
		: JObject(
			"android.webkit.WebChromeClient$FileChooserParams",
			"()V"
		) {}
	
	// Methods
	inline JArray WebChromeClient_FileChooserParams::parseResult(jint arg0, android::content::Intent arg1)
	{
		return callStaticObjectMethod(
			"android.webkit.WebChromeClient$FileChooserParams",
			"parseResult",
			"(ILandroid/content/Intent;)[Landroid/net/Uri;",
			arg0,
			arg1.object()
		);
	}
	inline android::content::Intent WebChromeClient_FileChooserParams::createIntent() const
	{
		return callObjectMethod(
			"createIntent",
			"()Landroid/content/Intent;"
		);
	}
	inline JArray WebChromeClient_FileChooserParams::getAcceptTypes() const
	{
		return callObjectMethod(
			"getAcceptTypes",
			"()[Ljava/lang/String;"
		);
	}
	inline JString WebChromeClient_FileChooserParams::getFilenameHint() const
	{
		return callObjectMethod(
			"getFilenameHint",
			"()Ljava/lang/String;"
		);
	}
	inline jint WebChromeClient_FileChooserParams::getMode() const
	{
		return callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	inline JString WebChromeClient_FileChooserParams::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean WebChromeClient_FileChooserParams::isCaptureEnabled() const
	{
		return callMethod<jboolean>(
			"isCaptureEnabled",
			"()Z"
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
