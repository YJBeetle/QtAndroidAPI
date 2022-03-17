#pragma once

#include "../graphics/Typeface.def.hpp"
#include "./FontsContract_FontRequestCallback.def.hpp"

namespace android::provider
{
	// Fields
	inline jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_LOAD_ERROR()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_FONT_LOAD_ERROR"
		);
	}
	inline jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_FONT_NOT_FOUND"
		);
	}
	inline jint FontsContract_FontRequestCallback::FAIL_REASON_FONT_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_FONT_UNAVAILABLE"
		);
	}
	inline jint FontsContract_FontRequestCallback::FAIL_REASON_MALFORMED_QUERY()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_MALFORMED_QUERY"
		);
	}
	inline jint FontsContract_FontRequestCallback::FAIL_REASON_PROVIDER_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_PROVIDER_NOT_FOUND"
		);
	}
	inline jint FontsContract_FontRequestCallback::FAIL_REASON_WRONG_CERTIFICATES()
	{
		return getStaticField<jint>(
			"android.provider.FontsContract$FontRequestCallback",
			"FAIL_REASON_WRONG_CERTIFICATES"
		);
	}
	
	// Constructors
	inline FontsContract_FontRequestCallback::FontsContract_FontRequestCallback()
		: JObject(
			"android.provider.FontsContract$FontRequestCallback",
			"()V"
		) {}
	
	// Methods
	inline void FontsContract_FontRequestCallback::onTypefaceRequestFailed(jint arg0) const
	{
		callMethod<void>(
			"onTypefaceRequestFailed",
			"(I)V",
			arg0
		);
	}
	inline void FontsContract_FontRequestCallback::onTypefaceRetrieved(android::graphics::Typeface arg0) const
	{
		callMethod<void>(
			"onTypefaceRetrieved",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

