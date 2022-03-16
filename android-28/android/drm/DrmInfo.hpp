#pragma once

#include "../../JByteArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DrmInfo.def.hpp"

namespace android::drm
{
	// Fields
	
	// Constructors
	inline DrmInfo::DrmInfo(jint arg0, JByteArray arg1, JString arg2)
		: JObject(
			"android.drm.DrmInfo",
			"(I[BLjava/lang/String;)V",
			arg0,
			arg1.object<jbyteArray>(),
			arg2.object<jstring>()
		) {}
	inline DrmInfo::DrmInfo(jint arg0, JString arg1, JString arg2)
		: JObject(
			"android.drm.DrmInfo",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JObject DrmInfo::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JByteArray DrmInfo::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline jint DrmInfo::getInfoType() const
	{
		return callMethod<jint>(
			"getInfoType",
			"()I"
		);
	}
	inline JString DrmInfo::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline JObject DrmInfo::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject DrmInfo::keyIterator() const
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline void DrmInfo::put(JString arg0, JObject arg1) const
	{
		callMethod<void>(
			"put",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
} // namespace android::drm

// Base class headers

