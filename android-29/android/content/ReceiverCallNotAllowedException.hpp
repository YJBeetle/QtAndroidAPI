#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../util/AndroidRuntimeException.hpp"


namespace __jni_impl::android::content
{
	class ReceiverCallNotAllowedException : public __jni_impl::android::util::AndroidRuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::android::content


namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ReceiverCallNotAllowedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ReceiverCallNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ReceiverCallNotAllowedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ReceiverCallNotAllowedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::content

namespace android::content
{
	class ReceiverCallNotAllowedException : public __jni_impl::android::content::ReceiverCallNotAllowedException
	{
	public:
		ReceiverCallNotAllowedException(QAndroidJniObject obj) { __thiz = obj; }
		ReceiverCallNotAllowedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

