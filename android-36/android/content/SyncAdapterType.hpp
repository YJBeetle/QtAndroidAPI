#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SyncAdapterType.def.hpp"

namespace android::content
{
	// Fields
	inline JObject SyncAdapterType::CREATOR()
	{
		return getStaticObjectField(
			"android.content.SyncAdapterType",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString SyncAdapterType::accountType()
	{
		return getObjectField(
			"accountType",
			"Ljava/lang/String;"
		);
	}
	inline JString SyncAdapterType::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		);
	}
	inline jboolean SyncAdapterType::isKey()
	{
		return getField<jboolean>(
			"isKey"
		);
	}
	
	// Constructors
	inline SyncAdapterType::SyncAdapterType(android::os::Parcel arg0)
		: JObject(
			"android.content.SyncAdapterType",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline SyncAdapterType::SyncAdapterType(JString arg0, JString arg1, jboolean arg2, jboolean arg3)
		: JObject(
			"android.content.SyncAdapterType",
			"(Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::content::SyncAdapterType SyncAdapterType::newKey(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.SyncAdapterType",
			"newKey",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SyncAdapterType;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jboolean SyncAdapterType::allowParallelSyncs() const
	{
		return callMethod<jboolean>(
			"allowParallelSyncs",
			"()Z"
		);
	}
	inline jint SyncAdapterType::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SyncAdapterType::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString SyncAdapterType::getSettingsActivity() const
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		);
	}
	inline jint SyncAdapterType::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean SyncAdapterType::isAlwaysSyncable() const
	{
		return callMethod<jboolean>(
			"isAlwaysSyncable",
			"()Z"
		);
	}
	inline jboolean SyncAdapterType::isUserVisible() const
	{
		return callMethod<jboolean>(
			"isUserVisible",
			"()Z"
		);
	}
	inline jboolean SyncAdapterType::supportsUploading() const
	{
		return callMethod<jboolean>(
			"supportsUploading",
			"()Z"
		);
	}
	inline JString SyncAdapterType::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SyncAdapterType::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
