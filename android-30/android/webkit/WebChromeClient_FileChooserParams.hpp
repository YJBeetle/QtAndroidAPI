#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Intent;
}

namespace android::webkit
{
	class WebChromeClient_FileChooserParams : public __JniBaseClass
	{
	public:
		// Fields
		static jint MODE_OPEN();
		static jint MODE_OPEN_MULTIPLE();
		static jint MODE_SAVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebChromeClient_FileChooserParams(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebChromeClient_FileChooserParams(QAndroidJniObject obj);
		
		// Constructors
		WebChromeClient_FileChooserParams();
		
		// Methods
		static jarray parseResult(jint arg0, android::content::Intent arg1);
		android::content::Intent createIntent();
		jarray getAcceptTypes();
		jstring getFilenameHint();
		jint getMode();
		jstring getTitle();
		jboolean isCaptureEnabled();
	};
} // namespace android::webkit

