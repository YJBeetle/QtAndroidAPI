#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentProvider;
}

namespace android::content
{
	class ContentProvider_CallingIdentity : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ContentProvider_CallingIdentity(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContentProvider_CallingIdentity(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::content

