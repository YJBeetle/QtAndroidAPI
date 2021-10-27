#pragma once

#ifndef ANDROID_DATABASE_MERGECURSOR
#define ANDROID_DATABASE_MERGECURSOR

#include "../../__JniBaseClass.hpp"
#include "AbstractCursor.hpp"

namespace __jni_impl::android::database
{
	class ContentObserver;
}
namespace __jni_impl::android::database
{
	class DataSetObserver;
}

namespace __jni_impl::android::database
{
	class MergeCursor : public __jni_impl::android::database::AbstractCursor
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jarray arg0);
		
		// Methods
		void close();
		void deactivate();
		jbyteArray getBlob(jint arg0);
		jarray getColumnNames();
		jint getCount();
		jdouble getDouble(jint arg0);
		jfloat getFloat(jint arg0);
		jint getInt(jint arg0);
		jlong getLong(jint arg0);
		jshort getShort(jint arg0);
		jstring getString(jint arg0);
		jint getType(jint arg0);
		jboolean isNull(jint arg0);
		jboolean onMove(jint arg0, jint arg1);
		void registerContentObserver(__jni_impl::android::database::ContentObserver arg0);
		void registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
		jboolean requery();
		void unregisterContentObserver(__jni_impl::android::database::ContentObserver arg0);
		void unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0);
	};
} // namespace __jni_impl::android::database

#include "ContentObserver.hpp"
#include "DataSetObserver.hpp"

namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void MergeCursor::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.MergeCursor",
			"([Landroid/database/Cursor;)V",
			arg0
		);
	}
	
	// Methods
	void MergeCursor::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void MergeCursor::deactivate()
	{
		__thiz.callMethod<void>(
			"deactivate",
			"()V"
		);
	}
	jbyteArray MergeCursor::getBlob(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBlob",
			"(I)[B",
			arg0
		).object<jbyteArray>();
	}
	jarray MergeCursor::getColumnNames()
	{
		return __thiz.callObjectMethod(
			"getColumnNames",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint MergeCursor::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	jdouble MergeCursor::getDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0
		);
	}
	jfloat MergeCursor::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0
		);
	}
	jint MergeCursor::getInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(I)I",
			arg0
		);
	}
	jlong MergeCursor::getLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0
		);
	}
	jshort MergeCursor::getShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0
		);
	}
	jstring MergeCursor::getString(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getString",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jint MergeCursor::getType(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getType",
			"(I)I",
			arg0
		);
	}
	jboolean MergeCursor::isNull(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isNull",
			"(I)Z",
			arg0
		);
	}
	jboolean MergeCursor::onMove(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onMove",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void MergeCursor::registerContentObserver(__jni_impl::android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void MergeCursor::registerDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"registerDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean MergeCursor::requery()
	{
		return __thiz.callMethod<jboolean>(
			"requery",
			"()Z"
		);
	}
	void MergeCursor::unregisterContentObserver(__jni_impl::android::database::ContentObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterContentObserver",
			"(Landroid/database/ContentObserver;)V",
			arg0.__jniObject().object()
		);
	}
	void MergeCursor::unregisterDataSetObserver(__jni_impl::android::database::DataSetObserver arg0)
	{
		__thiz.callMethod<void>(
			"unregisterDataSetObserver",
			"(Landroid/database/DataSetObserver;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::database

namespace android::database
{
	class MergeCursor : public __jni_impl::android::database::MergeCursor
	{
	public:
		MergeCursor(QAndroidJniObject obj) { __thiz = obj; }
		MergeCursor(jarray arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::database

#endif // ANDROID_DATABASE_MERGECURSOR

