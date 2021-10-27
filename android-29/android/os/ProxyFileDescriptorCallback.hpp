#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class ProxyFileDescriptorCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		ProxyFileDescriptorCallback(QAndroidJniObject obj);
		// Constructors
		ProxyFileDescriptorCallback();
		
		// Methods
		void onFsync();
		jlong onGetSize();
		jint onRead(jlong arg0, jint arg1, jbyteArray arg2);
		void onRelease();
		jint onWrite(jlong arg0, jint arg1, jbyteArray arg2);
	};
} // namespace android::os

