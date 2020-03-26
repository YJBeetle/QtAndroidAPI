#pragma once

#ifndef ANDROID_CONTENT_CONTENTPROVIDERCLIENT
#define ANDROID_CONTENT_CONTENTPROVIDERCLIENT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor;
}
namespace __jni_impl::java::util
{
	class ArrayList;
}
namespace __jni_impl::android::content
{
	class ContentProvider;
}

namespace __jni_impl::android::content
{
	class ContentProviderClient : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint _delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2);
		void close();
		jstring getType(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1);
		QAndroidJniObject canonicalize(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5);
		jboolean release();
		QAndroidJniObject call(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject call(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		jarray getStreamTypes(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject uncanonicalize(__jni_impl::android::net::Uri arg0);
		jboolean refresh(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		jarray applyBatch(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		jarray applyBatch(__jni_impl::java::util::ArrayList arg0);
		jint bulkInsert(__jni_impl::android::net::Uri arg0, jarray arg1);
		QAndroidJniObject getLocalContentProvider();
	};
} // namespace __jni_impl::android::content

#include "../net/Uri.hpp"
#include "ContentValues.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "res/AssetFileDescriptor.hpp"
#include "../../java/util/ArrayList.hpp"
#include "ContentProvider.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContentProviderClient::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProviderClient",
			"(V)V");
	}
	
	// Methods
	jint ContentProviderClient::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jint ContentProviderClient::_delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ContentProviderClient::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jstring ContentProviderClient::getType(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject ContentProviderClient::insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::canonicalize(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject ContentProviderClient::query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	jboolean ContentProviderClient::release()
	{
		return __thiz.callMethod<jboolean>(
			"release",
			"()Z"
		);
	}
	QAndroidJniObject ContentProviderClient::call(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::call(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jarray ContentProviderClient::getStreamTypes(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jarray>();
	}
	QAndroidJniObject ContentProviderClient::uncanonicalize(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	jboolean ContentProviderClient::refresh(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::openFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::openFile(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentProviderClient::openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentProviderClient::openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProviderClient::openTypedAssetFileDescriptor(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFileDescriptor",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jarray ContentProviderClient::applyBatch(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0,
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jarray ContentProviderClient::applyBatch(__jni_impl::java::util::ArrayList arg0)
	{
		return __thiz.callObjectMethod(
			"applyBatch",
			"(Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jint ContentProviderClient::bulkInsert(__jni_impl::android::net::Uri arg0, jarray arg1)
	{
		return __thiz.callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentProviderClient::getLocalContentProvider()
	{
		return __thiz.callObjectMethod(
			"getLocalContentProvider",
			"()Landroid/content/ContentProvider;"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentProviderClient : public __jni_impl::android::content::ContentProviderClient
	{
	public:
		ContentProviderClient(QAndroidJniObject obj) { __thiz = obj; }
		ContentProviderClient()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTPROVIDERCLIENT

