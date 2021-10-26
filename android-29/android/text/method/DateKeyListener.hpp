#pragma once

#ifndef ANDROID_TEXT_METHOD_DATEKEYLISTENER
#define ANDROID_TEXT_METHOD_DATEKEYLISTENER

#include "../../../__JniBaseClass.hpp"
#include "MetaKeyKeyListener.hpp"
#include "BaseKeyListener.hpp"
#include "NumberKeyListener.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::text::method
{
	class DateKeyListener : public __jni_impl::android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static jcharArray CHARACTERS();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		jint getInputType();
	};
} // namespace __jni_impl::android::text::method

#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	jcharArray DateKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.DateKeyListener",
			"CHARACTERS",
			"[C"
		).object<jcharArray>();
	}
	
	// Constructors
	void DateKeyListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DateKeyListener",
			"()V"
		);
	}
	void DateKeyListener::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DateKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DateKeyListener::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DateKeyListener;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DateKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateKeyListener",
			"getInstance",
			"()Landroid/text/method/DateKeyListener;"
		);
	}
	jint DateKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class DateKeyListener : public __jni_impl::android::text::method::DateKeyListener
	{
	public:
		DateKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		DateKeyListener()
		{
			__constructor();
		}
		DateKeyListener(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_DATEKEYLISTENER

