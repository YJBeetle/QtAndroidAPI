#pragma once

#ifndef ANDROID_TEXT_METHOD_TIMEKEYLISTENER
#define ANDROID_TEXT_METHOD_TIMEKEYLISTENER

#include "NumberKeyListener.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::text::method
{
	class TimeKeyListener : public __jni_impl::android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static QAndroidJniObject CHARACTERS();
		
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
	QAndroidJniObject TimeKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TimeKeyListener",
			"CHARACTERS",
			"[C");
	}
	
	// Constructors
	void TimeKeyListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.TimeKeyListener",
			"()V");
	}
	void TimeKeyListener::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.TimeKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject TimeKeyListener::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TimeKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/TimeKeyListener;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject TimeKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TimeKeyListener",
			"getInstance",
			"()Landroid/text/method/TimeKeyListener;");
	}
	jint TimeKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I");
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class TimeKeyListener : public __jni_impl::android::text::method::TimeKeyListener
	{
	public:
		TimeKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		TimeKeyListener()
		{
			__constructor();
		}
		TimeKeyListener(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_TIMEKEYLISTENER

