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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TracingConfig(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TracingConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		__JniBaseClass getCustomIncludedCategories();
		jint getPredefinedCategories();
		jint getTracingMode();
	};
} // namespace android::webkit

