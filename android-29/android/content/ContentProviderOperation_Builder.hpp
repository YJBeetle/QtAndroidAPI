#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentProviderOperation;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::content
{
	class ContentProviderOperation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject withExpectedCount(jint arg0);
		QAndroidJniObject withSelection(jstring arg0, jarray arg1);
		QAndroidJniObject withSelection(const QString &arg0, jarray arg1);
		QAndroidJniObject withSelectionBackReference(jint arg0, jint arg1);
		QAndroidJniObject withValue(jstring arg0, jobject arg1);
		QAndroidJniObject withValue(const QString &arg0, jobject arg1);
		QAndroidJniObject withValueBackReference(jstring arg0, jint arg1);
		QAndroidJniObject withValueBackReference(const QString &arg0, jint arg1);
		QAndroidJniObject withValueBackReferences(__jni_impl::android::content::ContentValues arg0);
		QAndroidJniObject withValues(__jni_impl::android::content::ContentValues arg0);
		QAndroidJniObject withYieldAllowed(jboolean arg0);
	};
} // namespace __jni_impl::android::content

#include "./ContentProviderOperation.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContentProviderOperation_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderOperation$Builder",
			"(V)V");
	}
	
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
	QAndroidJniObject ContentProviderOperation_Builder::withValueBackReferences(__jni_impl::android::content::ContentValues arg0)
	{
		return __thiz.callObjectMethod(
			"withValueBackReferences",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValues(__jni_impl::android::content::ContentValues arg0)
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
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentProviderOperation_Builder : public __jni_impl::android::content::ContentProviderOperation_Builder
	{
	public:
		ContentProviderOperation_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ContentProviderOperation_Builder()
		{
			__constructor();
		}
	};
} // namespace android::content

