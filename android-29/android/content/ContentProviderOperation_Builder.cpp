#include "../../JArray.hpp"
#include "./ContentProviderOperation.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ContentProviderOperation_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentProviderOperation_Builder::ContentProviderOperation_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::ContentProviderOperation ContentProviderOperation_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/ContentProviderOperation;"
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withExpectedCount(jint arg0) const
	{
		return callObjectMethod(
			"withExpectedCount",
			"(I)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withSelection(JString arg0, JArray arg1) const
	{
		return callObjectMethod(
			"withSelection",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withSelectionBackReference(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"withSelectionBackReference",
			"(II)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValue(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"withValue",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1.object<jobject>()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValueBackReference(JString arg0, jint arg1) const
	{
		return callObjectMethod(
			"withValueBackReference",
			"(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValueBackReferences(android::content::ContentValues arg0) const
	{
		return callObjectMethod(
			"withValueBackReferences",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withValues(android::content::ContentValues arg0) const
	{
		return callObjectMethod(
			"withValues",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	android::content::ContentProviderOperation_Builder ContentProviderOperation_Builder::withYieldAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"withYieldAllowed",
			"(Z)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
} // namespace android::content

