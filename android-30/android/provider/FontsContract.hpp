#pragma once

#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../graphics/Typeface.def.hpp"
#include "../os/CancellationSignal.def.hpp"
#include "../os/Handler.def.hpp"
#include "./FontRequest.def.hpp"
#include "./FontsContract_FontFamilyResult.def.hpp"
#include "./FontsContract_FontRequestCallback.def.hpp"
#include "./FontsContract.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::graphics::Typeface FontsContract::buildTypeface(android::content::Context arg0, android::os::CancellationSignal arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.FontsContract",
			"buildTypeface",
			"(Landroid/content/Context;Landroid/os/CancellationSignal;[Landroid/provider/FontsContract$FontInfo;)Landroid/graphics/Typeface;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline android::provider::FontsContract_FontFamilyResult FontsContract::fetchFonts(android::content::Context arg0, android::os::CancellationSignal arg1, android::provider::FontRequest arg2)
	{
		return callStaticObjectMethod(
			"android.provider.FontsContract",
			"fetchFonts",
			"(Landroid/content/Context;Landroid/os/CancellationSignal;Landroid/provider/FontRequest;)Landroid/provider/FontsContract$FontFamilyResult;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void FontsContract::requestFonts(android::content::Context arg0, android::provider::FontRequest arg1, android::os::Handler arg2, android::os::CancellationSignal arg3, android::provider::FontsContract_FontRequestCallback arg4)
	{
		callStaticMethod<void>(
			"android.provider.FontsContract",
			"requestFonts",
			"(Landroid/content/Context;Landroid/provider/FontRequest;Landroid/os/Handler;Landroid/os/CancellationSignal;Landroid/provider/FontsContract$FontRequestCallback;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
