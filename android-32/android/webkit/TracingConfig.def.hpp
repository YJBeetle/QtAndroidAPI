#pragma once

#include "../../JObject.hpp"

namespace android::webkit
{
	class TracingConfig : public JObject
	{
	public:
		// Fields
		static jint CATEGORIES_ALL();
		static jint CATEGORIES_ANDROID_WEBVIEW();
		static jint CATEGORIES_FRAME_VIEWER();
		static jint CATEGORIES_INPUT_LATENCY();
		static jint CATEGORIES_JAVASCRIPT_AND_RENDERING();
		static jint CATEGORIES_NONE();
		static jint CATEGORIES_RENDERING();
		static jint CATEGORIES_WEB_DEVELOPER();
		static jint RECORD_CONTINUOUSLY();
		static jint RECORD_UNTIL_FULL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TracingConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TracingConfig(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getCustomIncludedCategories() const;
		jint getPredefinedCategories() const;
		jint getTracingMode() const;
	};
} // namespace android::webkit

