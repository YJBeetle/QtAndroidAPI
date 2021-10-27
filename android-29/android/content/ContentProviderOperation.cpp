#include "./ContentProvider.hpp"
#include "./ContentProviderOperation_Builder.hpp"
#include "./ContentProviderResult.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "./ContentProviderOperation.hpp"

namespace android::content
{
	// Fields
	QAndroidJniObject ContentProviderOperation::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.ContentProviderOperation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ContentProviderOperation::ContentProviderOperation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ContentProviderOperation::newAssertQuery(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newAssertQuery",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation::newDelete(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newDelete",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation::newInsert(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newInsert",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation::newUpdate(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newUpdate",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation::apply(android::content::ContentProvider arg0, jarray arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Landroid/content/ContentProvider;[Landroid/content/ContentProviderResult;I)Landroid/content/ContentProviderResult;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint ContentProviderOperation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ContentProviderOperation::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean ContentProviderOperation::isAssertQuery()
	{
		return __thiz.callMethod<jboolean>(
			"isAssertQuery",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isDelete()
	{
		return __thiz.callMethod<jboolean>(
			"isDelete",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isInsert()
	{
		return __thiz.callMethod<jboolean>(
			"isInsert",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isReadOperation()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOperation",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isUpdate()
	{
		return __thiz.callMethod<jboolean>(
			"isUpdate",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isWriteOperation()
	{
		return __thiz.callMethod<jboolean>(
			"isWriteOperation",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isYieldAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isYieldAllowed",
			"()Z"
		);
	}
	jarray ContentProviderOperation::resolveSelectionArgsBackReferences(jarray arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resolveSelectionArgsBackReferences",
			"([Landroid/content/ContentProviderResult;I)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	QAndroidJniObject ContentProviderOperation::resolveValueBackReferences(jarray arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resolveValueBackReferences",
			"([Landroid/content/ContentProviderResult;I)Landroid/content/ContentValues;",
			arg0,
			arg1
		);
	}
	jstring ContentProviderOperation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ContentProviderOperation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::content

