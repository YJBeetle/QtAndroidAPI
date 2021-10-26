#pragma once

#ifndef ANDROID_CONTENT_CONTENTPROVIDER
#define ANDROID_CONTENT_CONTENTPROVIDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}
namespace __jni_impl::android::content
{
	class Context;
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
	class ContentProvider_CallingIdentity;
}
namespace __jni_impl::android::content::pm
{
	class ProviderInfo;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class PrintWriter;
}
namespace __jni_impl::android::content::res
{
	class Configuration;
}

namespace __jni_impl::android::content
{
	class ContentProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void shutdown();
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3);
		jint update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3);
		QAndroidJniObject getContext();
		jint _delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2);
		jint _delete(__jni_impl::android::net::Uri arg0, const QString &arg1, jarray arg2);
		jstring getType(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1);
		QAndroidJniObject canonicalize(__jni_impl::android::net::Uri arg0);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5);
		QAndroidJniObject query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, __jni_impl::android::os::CancellationSignal arg5);
		QAndroidJniObject call(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject call(const QString &arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject call(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::os::Bundle arg3);
		QAndroidJniObject call(const QString &arg0, const QString &arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3);
		jarray getStreamTypes(__jni_impl::android::net::Uri arg0, jstring arg1);
		jarray getStreamTypes(__jni_impl::android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject uncanonicalize(__jni_impl::android::net::Uri arg0);
		jboolean refresh(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openFile(__jni_impl::android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject openTypedAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
		jarray applyBatch(__jni_impl::java::util::ArrayList arg0);
		jarray applyBatch(jstring arg0, __jni_impl::java::util::ArrayList arg1);
		jarray applyBatch(const QString &arg0, __jni_impl::java::util::ArrayList arg1);
		jint bulkInsert(__jni_impl::android::net::Uri arg0, jarray arg1);
		QAndroidJniObject clearCallingIdentity();
		void restoreCallingIdentity(__jni_impl::android::content::ContentProvider_CallingIdentity arg0);
		jstring getReadPermission();
		jstring getWritePermission();
		jarray getPathPermissions();
		QAndroidJniObject openPipeHelper(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jobject arg3, __jni_impl::__JniBaseClass arg4);
		QAndroidJniObject openPipeHelper(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, jobject arg3, __jni_impl::__JniBaseClass arg4);
		void attachInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ProviderInfo arg1);
		void dump(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::PrintWriter arg1, jarray arg2);
		jboolean onCreate();
		void onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0);
		void onLowMemory();
		void onTrimMemory(jint arg0);
		jstring getCallingPackage();
	};
} // namespace __jni_impl::android::content

#include "../net/Uri.hpp"
#include "ContentValues.hpp"
#include "Context.hpp"
#include "../os/Bundle.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "res/AssetFileDescriptor.hpp"
#include "../../java/util/ArrayList.hpp"
#include "ContentProvider_CallingIdentity.hpp"
#include "pm/ProviderInfo.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/PrintWriter.hpp"
#include "res/Configuration.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContentProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProvider",
			"()V"
		);
	}
	
	// Methods
	void ContentProvider::shutdown()
	{
		__thiz.callMethod<void>(
			"shutdown",
			"()V"
		);
	}
	jint ContentProvider::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, jstring arg2, jarray arg3)
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
	jint ContentProvider::update(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1, const QString &arg2, jarray arg3)
	{
		return __thiz.callMethod<jint>(
			"update",
			"(Landroid/net/Uri;Landroid/content/ContentValues;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3
		);
	}
	QAndroidJniObject ContentProvider::getContext()
	{
		return __thiz.callObjectMethod(
			"getContext",
			"()Landroid/content/Context;"
		);
	}
	jint ContentProvider::_delete(__jni_impl::android::net::Uri arg0, jstring arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jint ContentProvider::_delete(__jni_impl::android::net::Uri arg0, const QString &arg1, jarray arg2)
	{
		return __thiz.callMethod<jint>(
			"delete",
			"(Landroid/net/Uri;Ljava/lang/String;[Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	jstring ContentProvider::getType(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Landroid/net/Uri;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject ContentProvider::insert(__jni_impl::android::net::Uri arg0, __jni_impl::android::content::ContentValues arg1)
	{
		return __thiz.callObjectMethod(
			"insert",
			"(Landroid/net/Uri;Landroid/content/ContentValues;)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::canonicalize(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"canonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4)
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
	QAndroidJniObject ContentProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	QAndroidJniObject ContentProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
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
	QAndroidJniObject ContentProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, jstring arg2, jarray arg3, jstring arg4, __jni_impl::android::os::CancellationSignal arg5)
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
	QAndroidJniObject ContentProvider::query(__jni_impl::android::net::Uri arg0, jarray arg1, const QString &arg2, jarray arg3, const QString &arg4, __jni_impl::android::os::CancellationSignal arg5)
	{
		return __thiz.callObjectMethod(
			"query",
			"(Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3,
			QAndroidJniObject::fromString(arg4).object<jstring>(),
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::call(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::call(const QString &arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::call(jstring arg0, jstring arg1, jstring arg2, __jni_impl::android::os::Bundle arg3)
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
	QAndroidJniObject ContentProvider::call(const QString &arg0, const QString &arg1, const QString &arg2, __jni_impl::android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"call",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/os/Bundle;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	jarray ContentProvider::getStreamTypes(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1
		).object<jarray>();
	}
	jarray ContentProvider::getStreamTypes(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getStreamTypes",
			"(Landroid/net/Uri;Ljava/lang/String;)[Ljava/lang/String;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		).object<jarray>();
	}
	QAndroidJniObject ContentProvider::uncanonicalize(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"uncanonicalize",
			"(Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	jboolean ContentProvider::refresh(__jni_impl::android::net::Uri arg0, __jni_impl::android::os::Bundle arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callMethod<jboolean>(
			"refresh",
			"(Landroid/net/Uri;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::openFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::openFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::openFile(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentProvider::openFile(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ContentProvider::openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentProvider::openAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject ContentProvider::openAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::openAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::CancellationSignal arg2)
	{
		return __thiz.callObjectMethod(
			"openAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
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
	QAndroidJniObject ContentProvider::openTypedAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, __jni_impl::android::os::CancellationSignal arg3)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Landroid/os/CancellationSignal;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::openTypedAssetFile(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::openTypedAssetFile(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"openTypedAssetFile",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	jarray ContentProvider::applyBatch(__jni_impl::java::util::ArrayList arg0)
	{
		return __thiz.callObjectMethod(
			"applyBatch",
			"(Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0.__jniObject().object()
		).object<jarray>();
	}
	jarray ContentProvider::applyBatch(jstring arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			arg0,
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jarray ContentProvider::applyBatch(const QString &arg0, __jni_impl::java::util::ArrayList arg1)
	{
		return __thiz.callObjectMethod(
			"applyBatch",
			"(Ljava/lang/String;Ljava/util/ArrayList;)[Landroid/content/ContentProviderResult;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jarray>();
	}
	jint ContentProvider::bulkInsert(__jni_impl::android::net::Uri arg0, jarray arg1)
	{
		return __thiz.callMethod<jint>(
			"bulkInsert",
			"(Landroid/net/Uri;[Landroid/content/ContentValues;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ContentProvider::clearCallingIdentity()
	{
		return __thiz.callObjectMethod(
			"clearCallingIdentity",
			"()Landroid/content/ContentProvider$CallingIdentity;"
		);
	}
	void ContentProvider::restoreCallingIdentity(__jni_impl::android::content::ContentProvider_CallingIdentity arg0)
	{
		__thiz.callMethod<void>(
			"restoreCallingIdentity",
			"(Landroid/content/ContentProvider$CallingIdentity;)V",
			arg0.__jniObject().object()
		);
	}
	jstring ContentProvider::getReadPermission()
	{
		return __thiz.callObjectMethod(
			"getReadPermission",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ContentProvider::getWritePermission()
	{
		return __thiz.callObjectMethod(
			"getWritePermission",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ContentProvider::getPathPermissions()
	{
		return __thiz.callObjectMethod(
			"getPathPermissions",
			"()[Landroid/content/pm/PathPermission;"
		).object<jarray>();
	}
	QAndroidJniObject ContentProvider::openPipeHelper(__jni_impl::android::net::Uri arg0, jstring arg1, __jni_impl::android::os::Bundle arg2, jobject arg3, __jni_impl::__JniBaseClass arg4)
	{
		return __thiz.callObjectMethod(
			"openPipeHelper",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/Object;Landroid/content/ContentProvider$PipeDataWriter;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject ContentProvider::openPipeHelper(__jni_impl::android::net::Uri arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2, jobject arg3, __jni_impl::__JniBaseClass arg4)
	{
		return __thiz.callObjectMethod(
			"openPipeHelper",
			"(Landroid/net/Uri;Ljava/lang/String;Landroid/os/Bundle;Ljava/lang/Object;Landroid/content/ContentProvider$PipeDataWriter;)Landroid/os/ParcelFileDescriptor;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	void ContentProvider::attachInfo(__jni_impl::android::content::Context arg0, __jni_impl::android::content::pm::ProviderInfo arg1)
	{
		__thiz.callMethod<void>(
			"attachInfo",
			"(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ContentProvider::dump(__jni_impl::java::io::FileDescriptor arg0, __jni_impl::java::io::PrintWriter arg1, jarray arg2)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Ljava/io/FileDescriptor;Ljava/io/PrintWriter;[Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jboolean ContentProvider::onCreate()
	{
		return __thiz.callMethod<jboolean>(
			"onCreate",
			"()Z"
		);
	}
	void ContentProvider::onConfigurationChanged(__jni_impl::android::content::res::Configuration arg0)
	{
		__thiz.callMethod<void>(
			"onConfigurationChanged",
			"(Landroid/content/res/Configuration;)V",
			arg0.__jniObject().object()
		);
	}
	void ContentProvider::onLowMemory()
	{
		__thiz.callMethod<void>(
			"onLowMemory",
			"()V"
		);
	}
	void ContentProvider::onTrimMemory(jint arg0)
	{
		__thiz.callMethod<void>(
			"onTrimMemory",
			"(I)V",
			arg0
		);
	}
	jstring ContentProvider::getCallingPackage()
	{
		return __thiz.callObjectMethod(
			"getCallingPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentProvider : public __jni_impl::android::content::ContentProvider
	{
	public:
		ContentProvider(QAndroidJniObject obj) { __thiz = obj; }
		ContentProvider()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTPROVIDER

