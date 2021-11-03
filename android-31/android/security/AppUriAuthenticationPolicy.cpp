#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AppUriAuthenticationPolicy.hpp"

namespace android::security
{
	// Fields
	JObject AppUriAuthenticationPolicy::CREATOR()
	{
		return getStaticObjectField(
			"android.security.AppUriAuthenticationPolicy",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AppUriAuthenticationPolicy::AppUriAuthenticationPolicy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AppUriAuthenticationPolicy::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AppUriAuthenticationPolicy::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AppUriAuthenticationPolicy::getAppAndUriMappings() const
	{
		return callObjectMethod(
			"getAppAndUriMappings",
			"()Ljava/util/Map;"
		);
	}
	jint AppUriAuthenticationPolicy::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AppUriAuthenticationPolicy::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AppUriAuthenticationPolicy::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::security

