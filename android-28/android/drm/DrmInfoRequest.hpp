#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DrmInfoRequest.def.hpp"

namespace android::drm
{
	// Fields
	inline JString DrmInfoRequest::ACCOUNT_ID()
	{
		return getStaticObjectField(
			"android.drm.DrmInfoRequest",
			"ACCOUNT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString DrmInfoRequest::SUBSCRIPTION_ID()
	{
		return getStaticObjectField(
			"android.drm.DrmInfoRequest",
			"SUBSCRIPTION_ID",
			"Ljava/lang/String;"
		);
	}
	inline jint DrmInfoRequest::TYPE_REGISTRATION_INFO()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_REGISTRATION_INFO"
		);
	}
	inline jint DrmInfoRequest::TYPE_RIGHTS_ACQUISITION_INFO()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_RIGHTS_ACQUISITION_INFO"
		);
	}
	inline jint DrmInfoRequest::TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_RIGHTS_ACQUISITION_PROGRESS_INFO"
		);
	}
	inline jint DrmInfoRequest::TYPE_UNREGISTRATION_INFO()
	{
		return getStaticField<jint>(
			"android.drm.DrmInfoRequest",
			"TYPE_UNREGISTRATION_INFO"
		);
	}
	
	// Constructors
	inline DrmInfoRequest::DrmInfoRequest(jint arg0, JString arg1)
		: JObject(
			"android.drm.DrmInfoRequest",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JObject DrmInfoRequest::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline jint DrmInfoRequest::getInfoType() const
	{
		return callMethod<jint>(
			"getInfoType",
			"()I"
		);
	}
	inline JString DrmInfoRequest::getMimeType() const
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		);
	}
	inline JObject DrmInfoRequest::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline JObject DrmInfoRequest::keyIterator() const
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
	inline void DrmInfoRequest::put(JString arg0, JObject arg1) const
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

