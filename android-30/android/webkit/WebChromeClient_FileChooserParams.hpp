#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
namespace android::content
{
	class Intent;
}
class JString;
class JString;

namespace android::webkit
{
	class WebChromeClient_FileChooserParams : public JObject
	{
	public:
		// Fields
		static jint MODE_OPEN();
		static jint MODE_OPEN_MULTIPLE();
		static jint MODE_SAVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebChromeClient_FileChooserParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebChromeClient_FileChooserParams(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		WebChromeClient_FileChooserParams();
		
		// Methods
		static JArray parseResult(jint arg0, android::content::Intent arg1);
		android::content::Intent createIntent() const;
		JArray getAcceptTypes() const;
		JString getFilenameHint() const;
		jint getMode() const;
		JString getTitle() const;
		jboolean isCaptureEnabled() const;
	};
} // namespace android::webkit

