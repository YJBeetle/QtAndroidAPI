#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::wifi::aware
{
	class IdentityChangedListener : public __JniBaseClass
	{
	public:
		// Fields
		
		IdentityChangedListener(QAndroidJniObject obj);
		// Constructors
		IdentityChangedListener();
		
		// Methods
		void onIdentityChanged(jbyteArray arg0);
	};
} // namespace android::net::wifi::aware

