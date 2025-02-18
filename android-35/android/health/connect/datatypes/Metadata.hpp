#pragma once

#include "./DataOrigin.def.hpp"
#include "./Device.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./Metadata.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline jint Metadata::RECORDING_METHOD_ACTIVELY_RECORDED()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Metadata",
			"RECORDING_METHOD_ACTIVELY_RECORDED"
		);
	}
	inline jint Metadata::RECORDING_METHOD_AUTOMATICALLY_RECORDED()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Metadata",
			"RECORDING_METHOD_AUTOMATICALLY_RECORDED"
		);
	}
	inline jint Metadata::RECORDING_METHOD_MANUAL_ENTRY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Metadata",
			"RECORDING_METHOD_MANUAL_ENTRY"
		);
	}
	inline jint Metadata::RECORDING_METHOD_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.Metadata",
			"RECORDING_METHOD_UNKNOWN"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean Metadata::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString Metadata::getClientRecordId() const
	{
		return callObjectMethod(
			"getClientRecordId",
			"()Ljava/lang/String;"
		);
	}
	inline jlong Metadata::getClientRecordVersion() const
	{
		return callMethod<jlong>(
			"getClientRecordVersion",
			"()J"
		);
	}
	inline android::health::connect::datatypes::DataOrigin Metadata::getDataOrigin() const
	{
		return callObjectMethod(
			"getDataOrigin",
			"()Landroid/health/connect/datatypes/DataOrigin;"
		);
	}
	inline android::health::connect::datatypes::Device Metadata::getDevice() const
	{
		return callObjectMethod(
			"getDevice",
			"()Landroid/health/connect/datatypes/Device;"
		);
	}
	inline JString Metadata::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::Instant Metadata::getLastModifiedTime() const
	{
		return callObjectMethod(
			"getLastModifiedTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint Metadata::getRecordingMethod() const
	{
		return callMethod<jint>(
			"getRecordingMethod",
			"()I"
		);
	}
	inline jint Metadata::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
