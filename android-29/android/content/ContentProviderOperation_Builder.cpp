#include "./ContentProviderOperation.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "./ContentProviderOperation_Builder.hpp"

namespace android::content
{
	// Fields
	
	ContentProviderOperation_Builder::ContentProviderOperation_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ContentProviderOperation_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/content/ContentProviderOperation;"
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withExpectedCount(jint arg0)
	{
		return __thiz.callObjectMethod(
			"withExpectedCount",
			"(I)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withSelection(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"withSelection",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withSelection(const QString &arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"withSelection",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withSelectionBackReference(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"withSelectionBackReference",
			"(II)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValue(jstring arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"withValue",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValue(const QString &arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"withValue",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValueBackReference(jstring arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"withValueBackReference",
			"(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValueBackReference(const QString &arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"withValueBackReference",
			"(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValueBackReferences(android::content::ContentValues arg0)
	{
		return __thiz.callObjectMethod(
			"withValueBackReferences",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValues(android::content::ContentValues arg0)
	{
		return __thiz.callObjectMethod(
			"withValues",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withYieldAllowed(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"withYieldAllowed",
			"(Z)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
} // namespace android::content

