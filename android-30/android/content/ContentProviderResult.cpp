#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
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
	jthrowable ContentProviderResult::exception()
	{
		return getObjectField(
			"exception",
			"Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	android::os::Bundle ContentProviderResult::extras()
	{
		return getObjectField(
			"extras",
			"Landroid/os/Bundle;"
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
	ContentProviderResult::ContentProviderResult(android::os::Bundle arg0)
		: __JniBaseClass(
			"android.content.ContentProviderResult",
			"(Landroid/os/Bundle;)V",
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
	ContentProviderResult::ContentProviderResult(jthrowable arg0)
		: __JniBaseClass(
			"android.content.ContentProviderResult",
			"(Ljava/lang/Throwable;)V",
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

