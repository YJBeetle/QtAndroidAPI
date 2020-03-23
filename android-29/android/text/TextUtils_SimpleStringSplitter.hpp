#pragma once

#ifndef ANDROID_TEXT_TEXTUTILS_SIMPLESTRINGSPLITTER
#define ANDROID_TEXT_TEXTUTILS_SIMPLESTRINGSPLITTER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class TextUtils_SimpleStringSplitter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jchar arg0);
		
		// Methods
		void remove();
		QAndroidJniObject iterator();
		jboolean hasNext();
		QAndroidJniObject next();
		void setString(jstring arg0);
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void TextUtils_SimpleStringSplitter::__constructor(jchar arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.TextUtils$SimpleStringSplitter",
			"(C)V",
			arg0);
	}
	
	// Methods
	void TextUtils_SimpleStringSplitter::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V");
	}
	QAndroidJniObject TextUtils_SimpleStringSplitter::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	jboolean TextUtils_SimpleStringSplitter::hasNext()
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"()Z");
	}
	QAndroidJniObject TextUtils_SimpleStringSplitter::next()
	{
		return __thiz.callObjectMethod(
			"next",
			"()Ljava/lang/String;");
	}
	void TextUtils_SimpleStringSplitter::setString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setString",
			"(Ljava/lang/String;)V",
			arg0);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class TextUtils_SimpleStringSplitter : public __jni_impl::android::text::TextUtils_SimpleStringSplitter
	{
	public:
		TextUtils_SimpleStringSplitter(QAndroidJniObject obj) { __thiz = obj; }
		TextUtils_SimpleStringSplitter(jchar arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_TEXTUTILS_SIMPLESTRINGSPLITTER

