#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view::inspector
{
	class PropertyReader_PropertyTypeMismatchException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jstring arg1, jstring arg2);
		void __constructor(jint arg0, const QString &arg1, const QString &arg2);
		void __constructor(jint arg0, jstring arg1, jstring arg2, jstring arg3);
		void __constructor(jint arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::view::inspector


namespace __jni_impl::android::view::inspector
{
	// Fields
	
	// Constructors
	void PropertyReader_PropertyTypeMismatchException::__constructor(jint arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void PropertyReader_PropertyTypeMismatchException::__constructor(jint arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void PropertyReader_PropertyTypeMismatchException::__constructor(jint arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void PropertyReader_PropertyTypeMismatchException::__constructor(jint arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::view::inspector

namespace android::view::inspector
{
	class PropertyReader_PropertyTypeMismatchException : public __jni_impl::android::view::inspector::PropertyReader_PropertyTypeMismatchException
	{
	public:
		PropertyReader_PropertyTypeMismatchException(QAndroidJniObject obj) { __thiz = obj; }
		PropertyReader_PropertyTypeMismatchException(jint arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PropertyReader_PropertyTypeMismatchException(jint arg0, jstring arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::view::inspector

