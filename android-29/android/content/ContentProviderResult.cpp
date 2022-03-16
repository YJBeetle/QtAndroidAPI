#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../java/lang/Integer.hpp"
#include "../../JString.hpp"
#include "./ContentProviderResult.hpp"

namespace android::content
{
	// Fields
	JObject ContentProviderResult::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ContentProviderResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	java::lang::Integer ContentProviderResult::count()
	{
		return getObjectField(
			"count",
			"Ljava/lang/Integer;"
		);
	}
	android::net::Uri ContentProviderResult::uri()
	{
		return getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	ContentProviderResult::ContentProviderResult(android::net::Uri arg0)
		: JObject(
			"android.content.ContentProviderResult",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	ContentProviderResult::ContentProviderResult(android::os::Parcel arg0)
		: JObject(
			"android.content.ContentProviderResult",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ContentProviderResult::ContentProviderResult(jint arg0)
		: JObject(
			"android.content.ContentProviderResult",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint ContentProviderResult::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString ContentProviderResult::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ContentProviderResult::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

