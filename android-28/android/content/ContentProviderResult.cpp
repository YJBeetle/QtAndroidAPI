#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../java/lang/Integer.hpp"
#include "./ContentProviderResult.hpp"

namespace android::content
{
	// Fields
	__JniBaseClass ContentProviderResult::CREATOR()
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
	
	// QJniObject forward
	ContentProviderResult::ContentProviderResult(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ContentProviderResult::ContentProviderResult(android::net::Uri arg0)
		: __JniBaseClass(
			"android.content.ContentProviderResult",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	ContentProviderResult::ContentProviderResult(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.content.ContentProviderResult",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	ContentProviderResult::ContentProviderResult(jint arg0)
		: __JniBaseClass(
			"android.content.ContentProviderResult",
			"(I)V",
			arg0
		) {}
	
	// Methods
	jint ContentProviderResult::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ContentProviderResult::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ContentProviderResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

