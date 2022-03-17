#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "./ContentProvider.def.hpp"
#include "./ContentProviderOperation_Builder.def.hpp"
#include "./ContentProviderResult.def.hpp"
#include "./ContentValues.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./ContentProviderOperation.def.hpp"

namespace android::content
{
	// Fields
	inline JObject ContentProviderOperation::CREATOR()
	{
		return getStaticObjectField(
			"android.content.ContentProviderOperation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation::newAssertQuery(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newAssertQuery",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation::newDelete(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newDelete",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation::newInsert(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newInsert",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation::newUpdate(android::net::Uri arg0)
	{
		return callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newUpdate",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderResult ContentProviderOperation::apply(android::content::ContentProvider arg0, JArray arg1, jint arg2) const
	{
		return callObjectMethod(
			"apply",
			"(Landroid/content/ContentProvider;[Landroid/content/ContentProviderResult;I)Landroid/content/ContentProviderResult;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2
		);
	}
	inline jint ContentProviderOperation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::Uri ContentProviderOperation::getUri() const
	{
		return callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jboolean ContentProviderOperation::isAssertQuery() const
	{
		return callMethod<jboolean>(
			"isAssertQuery",
			"()Z"
		);
	}
	inline jboolean ContentProviderOperation::isDelete() const
	{
		return callMethod<jboolean>(
			"isDelete",
			"()Z"
		);
	}
	inline jboolean ContentProviderOperation::isInsert() const
	{
		return callMethod<jboolean>(
			"isInsert",
			"()Z"
		);
	}
	inline jboolean ContentProviderOperation::isReadOperation() const
	{
		return callMethod<jboolean>(
			"isReadOperation",
			"()Z"
		);
	}
	inline jboolean ContentProviderOperation::isUpdate() const
	{
		return callMethod<jboolean>(
			"isUpdate",
			"()Z"
		);
	}
	inline jboolean ContentProviderOperation::isWriteOperation() const
	{
		return callMethod<jboolean>(
			"isWriteOperation",
			"()Z"
		);
	}
	inline jboolean ContentProviderOperation::isYieldAllowed() const
	{
		return callMethod<jboolean>(
			"isYieldAllowed",
			"()Z"
		);
	}
	inline JArray ContentProviderOperation::resolveSelectionArgsBackReferences(JArray arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveSelectionArgsBackReferences",
			"([Landroid/content/ContentProviderResult;I)[Ljava/lang/String;",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline android::content::ContentValues ContentProviderOperation::resolveValueBackReferences(JArray arg0, jint arg1) const
	{
		return callObjectMethod(
			"resolveValueBackReferences",
			"([Landroid/content/ContentProviderResult;I)Landroid/content/ContentValues;",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline JString ContentProviderOperation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ContentProviderOperation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
