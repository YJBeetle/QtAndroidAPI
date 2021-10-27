#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class TracingConfig : public __JniBaseClass
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
		
		TracingConfig(QAndroidJniObject obj);
		// Constructors
		TracingConfig() = default;
		
		// Methods
		QAndroidJniObject getCustomIncludedCategories();
		jint getPredefinedCategories();
		jint getTracingMode();
	};
} // namespace android::webkit

