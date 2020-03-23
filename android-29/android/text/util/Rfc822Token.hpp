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
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void setName(jstring arg0);
		QAndroidJniObject getAddress();
		void setComment(jstring arg0);
		QAndroidJniObject getComment();
		void setAddress(jstring arg0);
		static QAndroidJniObject quoteNameIfNecessary(jstring arg0);
		static QAndroidJniObject quoteName(jstring arg0);
		static QAndroidJniObject quoteComment(jstring arg0);
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
			arg2);
	}
	
	// Methods
	QAndroidJniObject Rfc822Token::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean Rfc822Token::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject Rfc822Token::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint Rfc822Token::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void Rfc822Token::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject Rfc822Token::getAddress()
	{
		return __thiz.callObjectMethod(
			"getAddress",
			"()Ljava/lang/String;");
	}
	void Rfc822Token::setComment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject Rfc822Token::getComment()
	{
		return __thiz.callObjectMethod(
			"getComment",
			"()Ljava/lang/String;");
	}
	void Rfc822Token::setAddress(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setAddress",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject Rfc822Token::quoteNameIfNecessary(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteNameIfNecessary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Rfc822Token::quoteName(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteName",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject Rfc822Token::quoteComment(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.util.Rfc822Token",
			"quoteComment",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
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

