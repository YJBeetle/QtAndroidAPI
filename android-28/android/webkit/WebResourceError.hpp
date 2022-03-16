#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::webkit
{
	class WebResourceError : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebResourceError(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebResourceError(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getDescription() const;
		jint getErrorCode() const;
	};
} // namespace android::webkit

