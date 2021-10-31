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
	__JniBaseClass ContentProviderOperation::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ContentProviderOperation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ContentProviderOperation::ContentProviderOperation(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::content::ContentProviderOperation_Builder ContentProviderOperation::newAssertQuery(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newAssertQuery",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation::newDelete(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newDelete",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation::newInsert(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newInsert",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation::newUpdate(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newUpdate",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderResult ContentProviderOperation::apply(android::content::ContentProvider arg0, jarray arg1, jint arg2)
	{
		return callObjectMethod(
			"apply",
			"(Landroid/content/ContentProvider;[Landroid/content/ContentProviderResult;I)Landroid/content/ContentProviderResult;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jint ContentProviderOperation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::Uri ContentProviderOperation::getUri()
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean ContentProviderOperation::isAssertQuery()
	{
		return callMethod<jboolean>(
			"isAssertQuery",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isDelete()
	{
		return callMethod<jboolean>(
			"isDelete",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isInsert()
	{
		return callMethod<jboolean>(
			"isInsert",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isReadOperation()
	{
		return callMethod<jboolean>(
			"isReadOperation",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isUpdate()
	{
		return callMethod<jboolean>(
			"isUpdate",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isWriteOperation()
	{
		return callMethod<jboolean>(
			"isWriteOperation",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isYieldAllowed()
	{
		return callMethod<jboolean>(
			"isYieldAllowed",
			"()Z"
		);
	}
	jarray ContentProviderOperation::resolveSelectionArgsBackReferences(jarray arg0, jint arg1)
	{
		return callObjectMethod(
			"resolveSelectionArgsBackReferences",
			"([Landroid/content/ContentProviderResult;I)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
	android::content::ContentValues ContentProviderOperation::resolveValueBackReferences(jarray arg0, jint arg1)
	{
		return callObjectMethod(
			"resolveValueBackReferences",
			"([Landroid/content/ContentProviderResult;I)Landroid/content/ContentValues;",
			arg0,
			arg1
		);
	}
	jstring ContentProviderOperation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ContentProviderOperation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

