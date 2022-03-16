#pragma once

#include "../../JString.hpp"
#include "./WebView_HitTestResult.def.hpp"

namespace android::webkit
{
	// Fields
	inline jint WebView_HitTestResult::ANCHOR_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"ANCHOR_TYPE"
		);
	}
	inline jint WebView_HitTestResult::EDIT_TEXT_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"EDIT_TEXT_TYPE"
		);
	}
	inline jint WebView_HitTestResult::EMAIL_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"EMAIL_TYPE"
		);
	}
	inline jint WebView_HitTestResult::GEO_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"GEO_TYPE"
		);
	}
	inline jint WebView_HitTestResult::IMAGE_ANCHOR_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"IMAGE_ANCHOR_TYPE"
		);
	}
	inline jint WebView_HitTestResult::IMAGE_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"IMAGE_TYPE"
		);
	}
	inline jint WebView_HitTestResult::PHONE_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"PHONE_TYPE"
		);
	}
	inline jint WebView_HitTestResult::SRC_ANCHOR_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"SRC_ANCHOR_TYPE"
		);
	}
	inline jint WebView_HitTestResult::SRC_IMAGE_ANCHOR_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"SRC_IMAGE_ANCHOR_TYPE"
		);
	}
	inline jint WebView_HitTestResult::UNKNOWN_TYPE()
	{
		return getStaticField<jint>(
			"android.webkit.WebView$HitTestResult",
			"UNKNOWN_TYPE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString WebView_HitTestResult::getExtra() const
	{
		return callObjectMethod(
			"getExtra",
			"()Ljava/lang/String;"
		);
	}
	inline jint WebView_HitTestResult::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
} // namespace android::webkit

// Base class headers

