#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SyncAdapterType.hpp"

namespace android::content
{
	// Fields
	JObject SyncAdapterType::CREATOR()
	{
		return getStaticObjectField(
			"android.content.SyncAdapterType",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	JString SyncAdapterType::accountType()
	{
		return getObjectField(
			"accountType",
			"Ljava/lang/String;"
		);
	}
	JString SyncAdapterType::authority()
	{
		return getObjectField(
			"authority",
			"Ljava/lang/String;"
		);
	}
	jboolean SyncAdapterType::isKey()
	{
		return getField<jboolean>(
			"isKey"
		);
	}
	
	// QJniObject forward
	SyncAdapterType::SyncAdapterType(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SyncAdapterType::SyncAdapterType(android::os::Parcel arg0)
		: JObject(
			"android.content.SyncAdapterType",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	SyncAdapterType::SyncAdapterType(JString arg0, JString arg1, jboolean arg2, jboolean arg3)
		: JObject(
			"android.content.SyncAdapterType",
			"(Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2,
			arg3
		) {}
	
	// Methods
	android::content::SyncAdapterType SyncAdapterType::newKey(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.content.SyncAdapterType",
			"newKey",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SyncAdapterType;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jboolean SyncAdapterType::allowParallelSyncs() const
	{
		return callMethod<jboolean>(
			"allowParallelSyncs",
			"()Z"
		);
	}
	jint SyncAdapterType::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SyncAdapterType::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString SyncAdapterType::getSettingsActivity() const
	{
		return callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		);
	}
	jint SyncAdapterType::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SyncAdapterType::isAlwaysSyncable() const
	{
		return callMethod<jboolean>(
			"isAlwaysSyncable",
			"()Z"
		);
	}
	jboolean SyncAdapterType::isUserVisible() const
	{
		return callMethod<jboolean>(
			"isUserVisible",
			"()Z"
		);
	}
	jboolean SyncAdapterType::supportsUploading() const
	{
		return callMethod<jboolean>(
			"supportsUploading",
			"()Z"
		);
	}
	JString SyncAdapterType::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SyncAdapterType::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

