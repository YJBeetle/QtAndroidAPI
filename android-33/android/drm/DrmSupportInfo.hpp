#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DrmSupportInfo.def.hpp"

namespace android::drm
{
	// Fields
	
	// Constructors
	inline DrmSupportInfo::DrmSupportInfo()
		: JObject(
			"android.drm.DrmSupportInfo",
			"()V"
		) {}
	
	// Methods
	inline void DrmSupportInfo::addFileSuffix(JString arg0) const
	{
		callMethod<void>(
			"addFileSuffix",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void DrmSupportInfo::addMimeType(JString arg0) const
	{
		callMethod<void>(
			"addMimeType",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean DrmSupportInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString DrmSupportInfo::getDescriprition() const
	{
		return callObjectMethod(
			"getDescriprition",
			"()Ljava/lang/String;"
		);
	}
	inline JString DrmSupportInfo::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline JObject DrmSupportInfo::getFileSuffixIterator() const
	{
		return callObjectMethod(
			"getFileSuffixIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject DrmSupportInfo::getMimeTypeIterator() const
	{
		return callObjectMethod(
			"getMimeTypeIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline jint DrmSupportInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void DrmSupportInfo::setDescription(JString arg0) const
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::drm

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::drm;
#endif
