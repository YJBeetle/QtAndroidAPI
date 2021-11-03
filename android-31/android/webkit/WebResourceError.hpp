#pragma once

#include "../../JObject.hpp"


namespace android::webkit
{
	class WebResourceError : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WebResourceError(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebResourceError(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDescription();
		jint getErrorCode();
	};
} // namespace android::webkit

