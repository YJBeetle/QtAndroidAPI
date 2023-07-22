#pragma once

#include "../../JArray.hpp"
#include "./ContentProviderOperation.def.hpp"
#include "./ContentValues.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ContentProviderOperation_Builder.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::content::ContentProviderOperation ContentProviderOperation_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/ContentProviderOperation;"
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExceptionAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"withExceptionAllowed",
			"(Z)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExpectedCount(jint arg0) const
	{
		return callObjectMethod(
			"withExpectedCount",
			"(I)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExtra(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"withExtra",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExtraBackReference(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"withExtraBackReference",
			"(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExtraBackReference(JString arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"withExtraBackReference",
			"(Ljava/lang/String;ILjava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"withExtras",
			"(Landroid/os/Bundle;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withSelection(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"withSelection",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withSelectionBackReference(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"withSelectionBackReference",
			"(II)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withSelectionBackReference(jint arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"withSelectionBackReference",
			"(IILjava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValue(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"withValue",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValueBackReference(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"withValueBackReference",
			"(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValueBackReference(JString arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"withValueBackReference",
			"(Ljava/lang/String;ILjava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValueBackReferences(android::content::ContentValues arg0) const
	{
		return callObjectMethod(
			"withValueBackReferences",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValues(android::content::ContentValues arg0) const
	{
		return callObjectMethod(
			"withValues",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	inline android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withYieldAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"withYieldAllowed",
			"(Z)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
