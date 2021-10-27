#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"
#include "./NumberKeyListener.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::text::method
{
	class DateTimeKeyListener : public __jni_impl::android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static jcharArray CHARACTERS();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::util::Locale arg0);
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		jint getInputType();
	};
} // namespace __jni_impl::android::text::method

#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	jcharArray DateTimeKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.DateTimeKeyListener",
			"CHARACTERS",
			"[C"
		).object<jcharArray>();
	}
	
	// Constructors
	void DateTimeKeyListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DateTimeKeyListener",
			"()V"
		);
	}
	void DateTimeKeyListener::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DateTimeKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DateTimeKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"()Landroid/text/method/DateTimeKeyListener;"
		);
	}
	QAndroidJniObject DateTimeKeyListener::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DateTimeKeyListener;",
			arg0.__jniObject().object()
		);
	}
	jint DateTimeKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class DateTimeKeyListener : public __jni_impl::android::text::method::DateTimeKeyListener
	{
	public:
		DateTimeKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		DateTimeKeyListener()
		{
			__constructor();
		}
		DateTimeKeyListener(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::method

