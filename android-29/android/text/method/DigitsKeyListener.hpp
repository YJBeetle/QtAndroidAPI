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
	class DigitsKeyListener : public __jni_impl::android::text::method::NumberKeyListener
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(jboolean arg0, jboolean arg1);
		void __constructor(__jni_impl::java::util::Locale arg0, jboolean arg1, jboolean arg2);
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(const QString &arg0);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getInstance(jboolean arg0, jboolean arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0, jboolean arg1, jboolean arg2);
		jstring filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5);
		jstring filter(const QString &arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5);
		jint getInputType();
	};
} // namespace __jni_impl::android::text::method

#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void DigitsKeyListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DigitsKeyListener",
			"()V"
		);
	}
	void DigitsKeyListener::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DigitsKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void DigitsKeyListener::__constructor(jboolean arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DigitsKeyListener",
			"(ZZ)V",
			arg0,
			arg1
		);
	}
	void DigitsKeyListener::__constructor(__jni_impl::java::util::Locale arg0, jboolean arg1, jboolean arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DigitsKeyListener",
			"(Ljava/util/Locale;ZZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject DigitsKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"()Landroid/text/method/DigitsKeyListener;"
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/lang/String;)Landroid/text/method/DigitsKeyListener;",
			arg0
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/lang/String;)Landroid/text/method/DigitsKeyListener;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DigitsKeyListener;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(ZZ)Landroid/text/method/DigitsKeyListener;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(__jni_impl::java::util::Locale arg0, jboolean arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/util/Locale;ZZ)Landroid/text/method/DigitsKeyListener;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	jstring DigitsKeyListener::filter(jstring arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jstring DigitsKeyListener::filter(const QString &arg0, jint arg1, jint arg2, __jni_impl::__JniBaseClass arg3, jint arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jint DigitsKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class DigitsKeyListener : public __jni_impl::android::text::method::DigitsKeyListener
	{
	public:
		DigitsKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		DigitsKeyListener()
		{
			__constructor();
		}
		DigitsKeyListener(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		DigitsKeyListener(jboolean arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DigitsKeyListener(__jni_impl::java::util::Locale arg0, jboolean arg1, jboolean arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::text::method

