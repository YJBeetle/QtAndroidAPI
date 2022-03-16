#pragma once

#include "./TracingConfig.def.hpp"

namespace android::webkit
{
	// Fields
	inline jint TracingConfig::CATEGORIES_ALL()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_ALL"
		);
	}
	inline jint TracingConfig::CATEGORIES_ANDROID_WEBVIEW()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_ANDROID_WEBVIEW"
		);
	}
	inline jint TracingConfig::CATEGORIES_FRAME_VIEWER()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_FRAME_VIEWER"
		);
	}
	inline jint TracingConfig::CATEGORIES_INPUT_LATENCY()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_INPUT_LATENCY"
		);
	}
	inline jint TracingConfig::CATEGORIES_JAVASCRIPT_AND_RENDERING()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_JAVASCRIPT_AND_RENDERING"
		);
	}
	inline jint TracingConfig::CATEGORIES_NONE()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_NONE"
		);
	}
	inline jint TracingConfig::CATEGORIES_RENDERING()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_RENDERING"
		);
	}
	inline jint TracingConfig::CATEGORIES_WEB_DEVELOPER()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"CATEGORIES_WEB_DEVELOPER"
		);
	}
	inline jint TracingConfig::RECORD_CONTINUOUSLY()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"RECORD_CONTINUOUSLY"
		);
	}
	inline jint TracingConfig::RECORD_UNTIL_FULL()
	{
		return getStaticField<jint>(
			"android.webkit.TracingConfig",
			"RECORD_UNTIL_FULL"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject TracingConfig::getCustomIncludedCategories() const
	{
		return callObjectMethod(
			"getCustomIncludedCategories",
			"()Ljava/util/List;"
		);
	}
	inline jint TracingConfig::getPredefinedCategories() const
	{
		return callMethod<jint>(
			"getPredefinedCategories",
			"()I"
		);
	}
	inline jint TracingConfig::getTracingMode() const
	{
		return callMethod<jint>(
			"getTracingMode",
			"()I"
		);
	}
} // namespace android::webkit

// Base class headers

