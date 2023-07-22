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
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentProvider_CallingIdentity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContentProvider_CallingIdentity(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::content

