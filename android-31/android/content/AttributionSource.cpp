#include "./Context.hpp"
#include "../os/Parcel.hpp"
#include "./AttributionSource.hpp"

namespace android::content
{
	// Fields
	JObject AttributionSource::CREATOR()
	{
		return getStaticObjectField(
			"android.content.AttributionSource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AttributionSource::AttributionSource(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AttributionSource::checkCallingUid()
	{
		return callMethod<jboolean>(
			"checkCallingUid",
			"()Z"
		);
	}
	jint AttributionSource::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AttributionSource::enforceCallingUid()
	{
		callMethod<void>(
			"enforceCallingUid",
			"()V"
		);
	}
	jboolean AttributionSource::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AttributionSource::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::content::AttributionSource AttributionSource::getNext()
	{
		return callObjectMethod(
			"getNext",
			"()Landroid/content/AttributionSource;"
		);
	}
	jstring AttributionSource::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AttributionSource::getUid()
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint AttributionSource::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AttributionSource::isTrusted(android::content::Context arg0)
	{
		return callMethod<jboolean>(
			"isTrusted",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	jstring AttributionSource::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AttributionSource::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

