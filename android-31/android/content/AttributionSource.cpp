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
	jboolean AttributionSource::checkCallingUid() const
	{
		return callMethod<jboolean>(
			"checkCallingUid",
			"()Z"
		);
	}
	jint AttributionSource::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AttributionSource::enforceCallingUid() const
	{
		callMethod<void>(
			"enforceCallingUid",
			"()V"
		);
	}
	jboolean AttributionSource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString AttributionSource::getAttributionTag() const
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	android::content::AttributionSource AttributionSource::getNext() const
	{
		return callObjectMethod(
			"getNext",
			"()Landroid/content/AttributionSource;"
		);
	}
	JString AttributionSource::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint AttributionSource::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint AttributionSource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean AttributionSource::isTrusted(android::content::Context arg0) const
	{
		return callMethod<jboolean>(
			"isTrusted",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	JString AttributionSource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AttributionSource::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

