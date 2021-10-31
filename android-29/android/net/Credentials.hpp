#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class Credentials : public __JniBaseClass
	{
	public:
		// Fields
		
		Credentials(QAndroidJniObject obj);
		// Constructors
		Credentials(jint arg0, jint arg1, jint arg2);
		Credentials() = default;
		
		// Methods
		jint getGid();
		jint getPid();
		jint getUid();
	};
} // namespace android::net

