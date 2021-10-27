#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace android::net::wifi::aware
{
	class PeerHandle : public __JniBaseClass
	{
	public:
		// Fields
		
		PeerHandle(QAndroidJniObject obj);
		// Constructors
		PeerHandle() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::net::wifi::aware

