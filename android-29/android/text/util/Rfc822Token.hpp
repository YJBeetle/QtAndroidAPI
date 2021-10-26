#pragma once

#ifndef ANDROID_TEXT_UTIL_RFC822TOKEN
#define ANDROID_TEXT_UTIL_RFC822TOKEN

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::text::util
{
	class Rfc822Token : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2);
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		void setName(jstring arg0);
		void setName(const QString &arg0);
		jstring getAddress();
		void setComment(jstring arg0);
		void setComment(const QString &arg0);
		jstring getComment();
		void setAddress(jstring arg0);
		void setAddress(const QString &arg0);
		static jstring quoteNameIfNecessary(jstring arg0);
		static jstring quoteNameIfNecessary(const QString &arg0);
		static jstring quoteName(jstring arg0);
		static jstring quoteName(const QString &arg0);
		static jstring quoteComment(jstring arg0);
		static jstring quoteComment(const QString &arg0);
	};
} // namespace __jni_impl::android::text::util


namespace __jni_impl::android::text::util
{
	// Fields
	
	// Constructors
	void Rfc822Token::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.util.Rfc822Token",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Rfc822Token::__constructor(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.text.util.Rfc822Token",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	jstring Rfc822Token::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Rfc822Token::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Rfc822Token::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Rfc822Token::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Rfc822Token::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Rfc822Token::setName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Rfc822Token::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Rfc822Token::setComment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Rfc822Token::setComment(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Rfc822Token::getComment()
	{
		return __thiz.callObjectMethod(
			"getComment",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Rfc822Token::setAddress(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAddress",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Rfc822Token::setAddress(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setAddress",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring Rfc822Token::quoteNameIfNecessary(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteNameIfNecessary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Rfc822Token::quoteNameIfNecessary(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteNameIfNecessary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Rfc822Token::quoteName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Rfc822Token::quoteName(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring Rfc822Token::quoteComment(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteComment",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Rfc822Token::quoteComment(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteComment",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::android::text::util

namespace android::text::util
{
	class Rfc822Token : public __jni_impl::android::text::util::Rfc822Token
	{
	public:
		Rfc822Token(QAndroidJniObject obj) { __thiz = obj; }
		Rfc822Token(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::text::util

#endif // ANDROID_TEXT_UTIL_RFC822TOKEN

