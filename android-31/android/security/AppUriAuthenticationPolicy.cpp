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
	
	// QAndroidJniObject forward
	AppUriAuthenticationPolicy::AppUriAuthenticationPolicy(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint AppUriAuthenticationPolicy::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean AppUriAuthenticationPolicy::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AppUriAuthenticationPolicy::getAppAndUriMappings()
	{
		return callObjectMethod(
			"getAppAndUriMappings",
			"()Ljava/util/Map;"
		);
	}
	jint AppUriAuthenticationPolicy::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AppUriAuthenticationPolicy::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AppUriAuthenticationPolicy::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::security

