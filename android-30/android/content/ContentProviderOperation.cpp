#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ContentProvider.hpp"
#include "./ContentProviderOperation_Builder.hpp"
#include "./ContentProviderResult.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./ContentProviderOperation.hpp"

namespace android::content
{
	// Fields
	JObject ContentProviderOperation::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ContentProviderOperation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
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
	android::content::ContentProviderOperation_Builder ContentProviderOperation::newCall(android::net::Uri arg0, JString arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newCall",
			"(Landroid/net/Uri;Ljava/lang/String;Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
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
	android::content::ContentProviderResult ContentProviderOperation::apply(android::content::ContentProvider arg0, JArray arg1, jint arg2) const
	{
		return callObjectMethod(
			"apply",
			"(Landroid/content/ContentProvider;[Landroid/content/ContentProviderResult;I)Landroid/content/ContentProviderResult;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		);
	}
	jint ContentProviderOperation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::net::Uri ContentProviderOperation::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jboolean ContentProviderOperation::isAssertQuery() const
	{
		return callMethod<jboolean>(
			"isAssertQuery",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isCall() const
	{
		return callMethod<jboolean>(
			"isCall",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isDelete() const
	{
		return callMethod<jboolean>(
			"isDelete",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isExceptionAllowed() const
	{
		return callMethod<jboolean>(
			"isExceptionAllowed",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isInsert() const
	{
		return callMethod<jboolean>(
			"isInsert",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isReadOperation() const
	{
		return callMethod<jboolean>(
			"isReadOperation",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isUpdate() const
	{
		return callMethod<jboolean>(
			"isUpdate",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isWriteOperation() const
	{
		return callMethod<jboolean>(
			"isWriteOperation",
			"()Z"
		);
	}
	jboolean ContentProviderOperation::isYieldAllowed() const
	{
		return callMethod<jboolean>(
			"isYieldAllowed",
			"()Z"
		);
	}
	android::os::Bundle ContentProviderOperation::resolveExtrasBackReferences(JArray arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveExtrasBackReferences",
			"([Landroid/content/ContentProviderResult;I)Landroid/os/Bundle;",
			arg0.object<jarray>(),
			arg1
		);
	}
	JArray ContentProviderOperation::resolveSelectionArgsBackReferences(JArray arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveSelectionArgsBackReferences",
			"([Landroid/content/ContentProviderResult;I)[Ljava/lang/String;",
			arg0.object<jarray>(),
			arg1
		);
	}
	android::content::ContentValues ContentProviderOperation::resolveValueBackReferences(JArray arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveValueBackReferences",
			"([Landroid/content/ContentProviderResult;I)Landroid/content/ContentValues;",
			arg0.object<jarray>(),
			arg1
		);
	}
	JString ContentProviderOperation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ContentProviderOperation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

