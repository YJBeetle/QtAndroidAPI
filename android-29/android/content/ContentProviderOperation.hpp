#pragma once

#ifndef ANDROID_CONTENT_CONTENTPROVIDEROPERATION
#define ANDROID_CONTENT_CONTENTPROVIDEROPERATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentProviderOperation_Builder;
}
namespace __jni_impl::android::content
{
	class ContentProviderResult;
}
namespace __jni_impl::android::content
{
	class ContentProvider;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}

namespace __jni_impl::android::content
{
	class ContentProviderOperation : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		QAndroidJniObject apply(__jni_impl::android::content::ContentProvider arg0, jarray arg1, jint arg2);
		QAndroidJniObject getUri();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject newAssertQuery(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject newInsert(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject newUpdate(__jni_impl::android::net::Uri arg0);
		static QAndroidJniObject newDelete(__jni_impl::android::net::Uri arg0);
		jboolean isYieldAllowed();
		jboolean isInsert();
		jboolean isDelete();
		jboolean isUpdate();
		jboolean isAssertQuery();
		jboolean isWriteOperation();
		jboolean isReadOperation();
		QAndroidJniObject resolveValueBackReferences(jarray arg0, jint arg1);
		jarray resolveSelectionArgsBackReferences(jarray arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "ContentProviderOperation_Builder.hpp"
#include "ContentProviderResult.hpp"
#include "ContentProvider.hpp"
#include "../net/Uri.hpp"
#include "../os/Parcel.hpp"
#include "ContentValues.hpp"

namespace __jni_impl::android::content
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
	
	// Constructors
	void ContentProviderOperation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderOperation",
			"(V)V");
	}
	
	// Methods
	jstring ContentProviderOperation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ContentProviderOperation::apply(__jni_impl::android::content::ContentProvider arg0, jarray arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"apply",
			"(Landroid/content/ContentProvider;[Landroid/content/ContentProviderResult;I)Landroid/content/ContentProviderResult;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ContentProviderOperation::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint ContentProviderOperation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ContentProviderOperation::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation::newAssertQuery(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newAssertQuery",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation::newInsert(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newInsert",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation::newUpdate(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newUpdate",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderOperation::newDelete(__jni_impl::android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.ContentProviderOperation",
			"newDelete",
			"(Landroid/net/Uri;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.__jniObject().object()
		);
	}
	jboolean ContentProviderOperation::isYieldAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isYieldAllowed",
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
	jboolean ContentProviderOperation::isDelete()
	{
		return __thiz.callMethod<jboolean>(
			"isDelete",
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
	jboolean ContentProviderOperation::isAssertQuery()
	{
		return __thiz.callMethod<jboolean>(
			"isAssertQuery",
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
	jboolean ContentProviderOperation::isReadOperation()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOperation",
			"()Z"
		);
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
	jarray ContentProviderOperation::resolveSelectionArgsBackReferences(jarray arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"resolveSelectionArgsBackReferences",
			"([Landroid/content/ContentProviderResult;I)[Ljava/lang/String;",
			arg0,
			arg1
		).object<jarray>();
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentProviderOperation : public __jni_impl::android::content::ContentProviderOperation
	{
	public:
		ContentProviderOperation(QAndroidJniObject obj) { __thiz = obj; }
		ContentProviderOperation()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTPROVIDEROPERATION

