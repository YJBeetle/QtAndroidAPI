#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::webkit
{
	class WebView_HitTestResult : public __JniBaseClass
	{
	public:
		// Fields
		static jint ANCHOR_TYPE();
		static jint EDIT_TEXT_TYPE();
		static jint EMAIL_TYPE();
		static jint GEO_TYPE();
		static jint IMAGE_ANCHOR_TYPE();
		static jint IMAGE_TYPE();
		static jint PHONE_TYPE();
		static jint SRC_ANCHOR_TYPE();
		static jint SRC_IMAGE_ANCHOR_TYPE();
		static jint UNKNOWN_TYPE();
		
		WebView_HitTestResult(QAndroidJniObject obj);
		// Constructors
		WebView_HitTestResult() = default;
		
		// Methods
		jstring getExtra();
		jint getType();
	};
} // namespace android::webkit

