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
		
		ContentProvider_CallingIdentity(QAndroidJniObject obj);
		// Constructors
		ContentProvider_CallingIdentity() = default;
		
		// Methods
	};
} // namespace android::content

