#pragma once

#ifndef ANDROID_CONTENT_CONTENTQUERYMAP
#define ANDROID_CONTENT_CONTENTQUERYMAP

#include "../../__JniBaseClass.hpp"
#include "../../java/util/Observable.hpp"

namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::content
{
	class ContentValues;
}

namespace __jni_impl::android::content
{
	class ContentQueryMap : public __jni_impl::java::util::Observable
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1, jboolean arg2, __jni_impl::android::os::Handler arg3);
		void __constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1, jboolean arg2, __jni_impl::android::os::Handler arg3);
		
		// Methods
		void close();
		QAndroidJniObject getValues(jstring arg0);
		QAndroidJniObject getValues(const QString &arg0);
		void setKeepUpdated(jboolean arg0);
		QAndroidJniObject getRows();
		void requery();
	};
} // namespace __jni_impl::android::content

#include "../os/Handler.hpp"
#include "ContentValues.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContentQueryMap::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1, jboolean arg2, __jni_impl::android::os::Handler arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentQueryMap",
			"(Landroid/database/Cursor;Ljava/lang/String;ZLandroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void ContentQueryMap::__constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1, jboolean arg2, __jni_impl::android::os::Handler arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentQueryMap",
			"(Landroid/database/Cursor;Ljava/lang/String;ZLandroid/os/Handler;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	void ContentQueryMap::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject ContentQueryMap::getValues(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValues",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			arg0
		);
	}
	QAndroidJniObject ContentQueryMap::getValues(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getValues",
			"(Ljava/lang/String;)Landroid/content/ContentValues;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ContentQueryMap::setKeepUpdated(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setKeepUpdated",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject ContentQueryMap::getRows()
	{
		return __thiz.callObjectMethod(
			"getRows",
			"()Ljava/util/Map;"
		);
	}
	void ContentQueryMap::requery()
	{
		__thiz.callMethod<void>(
			"requery",
			"()V"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentQueryMap : public __jni_impl::android::content::ContentQueryMap
	{
	public:
		ContentQueryMap(QAndroidJniObject obj) { __thiz = obj; }
		ContentQueryMap(__jni_impl::__JniBaseClass arg0, jstring arg1, jboolean arg2, __jni_impl::android::os::Handler arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CONTENTQUERYMAP

