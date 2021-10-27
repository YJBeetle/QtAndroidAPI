#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/IndexOutOfBoundsException.hpp"


namespace __jni_impl::android::database
{
	class CursorIndexOutOfBoundsException : public __jni_impl::java::lang::IndexOutOfBoundsException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::database


namespace __jni_impl::android::database
{
	// Fields
	
	// Constructors
	void CursorIndexOutOfBoundsException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void CursorIndexOutOfBoundsException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorIndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void CursorIndexOutOfBoundsException::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.database.CursorIndexOutOfBoundsException",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::database

namespace android::database
{
	class CursorIndexOutOfBoundsException : public __jni_impl::android::database::CursorIndexOutOfBoundsException
	{
	public:
		CursorIndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
		CursorIndexOutOfBoundsException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		CursorIndexOutOfBoundsException(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::database

