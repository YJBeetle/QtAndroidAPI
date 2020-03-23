#pragma once

#ifndef ANDROID_DATABASE_CURSORWRAPPER
#define ANDROID_DATABASE_CURSORWRAPPER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::database
{
	class CharArrayBuffer;
}
namespace __jni_impl::android::database
{
	class ContentObserver;
}
namespace __jni_impl::android::database
{
	class DataSetObserver;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::database
{
	class CursorWrapper : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jshort getShort(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jfloat getFloat(jint arg0);
		jdouble getDouble(jint arg0);
		void close();
		jint getType(jint arg0);
		jboolean isNull(jint arg0);
		jint getCount();
		QAndroidJniObject getString(jint arg0);
		jboolean move(jint arg0);
		jint getColumnIndex(jstring arg0);
		QAndroidJniObject getColumnNames();
		QAndroidJniObject getBlob(jint arg0);
		jint getColumnCount();
		void deactivate();
		jboolean requery();
		void copyStringToBuffer(jint arg0, __jni_impl::android::database::CharArrayBuffer arg1);
		jint getPosition();
		jboolean moveToPosition(jint arg0);
		jboolean moveToFirst();
		jboolean moveToLast();
		jboolean moveToNext();
		jboolean moveToPrevious();
		jboolean isFirst();
		jboolean isLast();
		jboolean isBeforeFirst();
		jboolean isAfterLast();
		jint getColumnIndexOrThrow(jstring arg0);
		QAndroidJniObject getColumnName(jint arg0);
		void registerContentObserver(__jni_impl::android::database::ContentObserver arg0);
		void unregisterContentObserver(__jni_impl::android::database::ContentObserver arg0);
		void registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
		void unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
		void setNotificationUri(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		void setNotificationUris(__jni_impl::android::content::ContentResolver arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject getNotificationUri();
		QAndroidJniObject getNotificationUris();
		jboolean getWantsAllOnMoveCalls();
		QAndroidJniObject respond(__jni_impl::android::os::Bundle arg0);
		void setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject getWrappedCursor();
		QAndroidJniObject getExtras();
		jboolean isClosed();
	};
} // namespace __jni_impl::android::database

#include "CharArrayBuffer.hpp"
#include "ContentObserver.hpp"
#include "DataSetObserver.hpp"
#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void CursorWrapper::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorWrapper",
			"(Landroid/database/Cursor;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jshort CursorWrapper::getShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0);
	}
	jint CursorWrapper::getInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(I)I",
			arg0);
	}
	jlong CursorWrapper::getLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0);
	}
	jfloat CursorWrapper::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0);
	}
	jdouble CursorWrapper::getDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0);
	}
	void CursorWrapper::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	jint CursorWrapper::getType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(I)I",
			arg0);
	}
	jboolean CursorWrapper::isNull(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0);
	}
	jint CursorWrapper::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I");
	}
	QAndroidJniObject CursorWrapper::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0);
	}
	jboolean CursorWrapper::move(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"move",
			"(I)Z",
			arg0);
	}
	jint CursorWrapper::getColumnIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndex",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject CursorWrapper::getColumnNames()
	{
		return __thiz.callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;");
	}
	QAndroidJniObject CursorWrapper::getBlob(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0);
	}
	jint CursorWrapper::getColumnCount()
	{
		return __thiz.callMethod<jint>(
			"getColumnCount",
			"()I");
	}
	void CursorWrapper::deactivate()
	{
		__thiz.callMethod<void>(
			"deactivate",
			"()V");
	}
	jboolean CursorWrapper::requery()
	{
		return __thiz.callMethod<jboolean>(
			"requery",
			"()Z");
	}
	void CursorWrapper::copyStringToBuffer(jint arg0, __jni_impl::android::database::CharArrayBuffer arg1)
	{
		__thiz.callMethod<void>(
			"copyStringToBuffer",
			"(ILandroid/database/CharArrayBuffer;)V",
			arg0,
			arg1.__jniObject().object());
	}
	jint CursorWrapper::getPosition()
	{
		return __thiz.callMethod<jint>(
			"getPosition",
			"()I");
	}
	jboolean CursorWrapper::moveToPosition(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"moveToPosition",
			"(I)Z",
			arg0);
	}
	jboolean CursorWrapper::moveToFirst()
	{
		return __thiz.callMethod<jboolean>(
			"moveToFirst",
			"()Z");
	}
	jboolean CursorWrapper::moveToLast()
	{
		return __thiz.callMethod<jboolean>(
			"moveToLast",
			"()Z");
	}
	jboolean CursorWrapper::moveToNext()
	{
		return __thiz.callMethod<jboolean>(
			"moveToNext",
			"()Z");
	}
	jboolean CursorWrapper::moveToPrevious()
	{
		return __thiz.callMethod<jboolean>(
			"moveToPrevious",
			"()Z");
	}
	jboolean CursorWrapper::isFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isFirst",
			"()Z");
	}
	jboolean CursorWrapper::isLast()
	{
		return __thiz.callMethod<jboolean>(
			"isLast",
			"()Z");
	}
	jboolean CursorWrapper::isBeforeFirst()
	{
		return __thiz.callMethod<jboolean>(
			"isBeforeFirst",
			"()Z");
	}
	jboolean CursorWrapper::isAfterLast()
	{
		return __thiz.callMethod<jboolean>(
			"isAfterLast",
			"()Z");
	}
	jint CursorWrapper::getColumnIndexOrThrow(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnIndexOrThrow",
			"(Ljava/lang/String;)I",
			arg0);
	}
	QAndroidJniObject CursorWrapper::getColumnName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getColumnName",
			"(I)Ljava/lang/String;",
			arg0);
	}
	void CursorWrapper::registerContentObserver(__jni_impl::android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object());
	}
	void CursorWrapper::unregisterContentObserver(__jni_impl::android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object());
	}
	void CursorWrapper::registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object());
	}
	void CursorWrapper::unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object());
	}
	void CursorWrapper::setNotificationUri(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		__thiz.callMethod<void>(
			"setNotificationUri",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void CursorWrapper::setNotificationUris(__jni_impl::android::content::ContentResolver arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"setNotificationUris",
			"(Landroid/content/ContentResolver;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject CursorWrapper::getNotificationUri()
	{
		return __thiz.callObjectMethod(
			"getNotificationUri",
			"()Landroid/net/Uri;");
	}
	QAndroidJniObject CursorWrapper::getNotificationUris()
	{
		return __thiz.callObjectMethod(
			"getNotificationUris",
			"()Ljava/util/List;");
	}
	jboolean CursorWrapper::getWantsAllOnMoveCalls()
	{
		return __thiz.callMethod<jboolean>(
			"getWantsAllOnMoveCalls",
			"()Z");
	}
	QAndroidJniObject CursorWrapper::respond(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"respond",
			"(Landroid/os/Bundle;)Landroid/os/Bundle;",
			arg0.__jniObject().object());
	}
	void CursorWrapper::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CursorWrapper::getWrappedCursor()
	{
		return __thiz.callObjectMethod(
			"getWrappedCursor",
			"()Landroid/database/Cursor;");
	}
	QAndroidJniObject CursorWrapper::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
	jboolean CursorWrapper::isClosed()
	{
		return __thiz.callMethod<jboolean>(
			"isClosed",
			"()Z");
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class CursorWrapper : public __jni_impl::android::database::CursorWrapper
	{
	public:
		CursorWrapper(QAndroidJniObject obj) { __thiz = obj; }
		CursorWrapper(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_CURSORWRAPPER

