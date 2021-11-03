#include "./Context.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	
	// QAndroidJniObject forward
	AttributionSource::AttributionSource(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jboolean AttributionSource::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString AttributionSource::getAttributionTag()
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	android::content::AttributionSource AttributionSource::getNext()
	{
		return callObjectMethod(
			"getNext",
			"()Landroid/content/AttributionSource;"
		);
	}
	JString AttributionSource::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
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
	JString AttributionSource::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

