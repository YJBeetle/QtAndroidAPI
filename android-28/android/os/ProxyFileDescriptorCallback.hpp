#pragma once

#include "../../JObject.hpp"

class JByteArray;

namespace android::os
{
	class ProxyFileDescriptorCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ProxyFileDescriptorCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProxyFileDescriptorCallback(QAndroidJniObject obj);
		
		// Constructors
		ProxyFileDescriptorCallback();
		
		// Methods
		void onFsync();
		jlong onGetSize();
		jint onRead(jlong arg0, jint arg1, JByteArray arg2);
		void onRelease();
		jint onWrite(jlong arg0, jint arg1, JByteArray arg2);
	};
} // namespace android::os

