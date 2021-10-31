#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class ProxyFileDescriptorCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProxyFileDescriptorCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

