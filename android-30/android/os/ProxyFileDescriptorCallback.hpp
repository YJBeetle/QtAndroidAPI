#pragma once

#include "../../JByteArray.hpp"
#include "./ProxyFileDescriptorCallback.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline ProxyFileDescriptorCallback::ProxyFileDescriptorCallback()
		: JObject(
			"android.os.ProxyFileDescriptorCallback",
			"()V"
		) {}
	
	// Methods
	inline void ProxyFileDescriptorCallback::onFsync() const
	{
		callMethod<void>(
			"onFsync",
			"()V"
		);
	}
	inline jlong ProxyFileDescriptorCallback::onGetSize() const
	{
		return callMethod<jlong>(
			"onGetSize",
			"()J"
		);
	}
	inline jint ProxyFileDescriptorCallback::onRead(jlong arg0, jint arg1, JByteArray arg2) const
	{
		return callMethod<jint>(
			"onRead",
			"(JI[B)I",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	inline void ProxyFileDescriptorCallback::onRelease() const
	{
		callMethod<void>(
			"onRelease",
			"()V"
		);
	}
	inline jint ProxyFileDescriptorCallback::onWrite(jlong arg0, jint arg1, JByteArray arg2) const
	{
		return callMethod<jint>(
			"onWrite",
			"(JI[B)I",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
} // namespace android::os

// Base class headers

