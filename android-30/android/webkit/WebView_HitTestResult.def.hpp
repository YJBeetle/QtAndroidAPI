#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class WebView_HitTestResult : public JObject
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
		
		// QJniObject forward
		template<typename ...Ts> explicit WebView_HitTestResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebView_HitTestResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getExtra() const;
		jint getType() const;
	};
} // namespace android::webkit

