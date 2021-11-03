#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentProvider;
}

namespace android::content
{
	class ContentProvider_CallingIdentity : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContentProvider_CallingIdentity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProvider_CallingIdentity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::content

