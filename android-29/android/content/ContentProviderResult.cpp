#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "../../java/lang/Integer.hpp"
#include "./ContentProviderResult.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject ContentProviderResult::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentProviderResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject ContentProviderResult::count()
	{
		return __thiz.getObjectField(
			"count",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject ContentProviderResult::uri()
	{
		return __thiz.getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	
	ContentProviderResult::ContentProviderResult(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ContentProviderResult::ContentProviderResult(android::net::Uri arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderResult",
			"(Landroid/net/Uri;)V",
			arg0.__jniObject().object()
		);
	}
	ContentProviderResult::ContentProviderResult(android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderResult",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	ContentProviderResult::ContentProviderResult(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderResult",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jint ContentProviderResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ContentProviderResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ContentProviderResult::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

