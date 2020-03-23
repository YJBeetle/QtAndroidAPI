#pragma once

#ifndef JAVA_TEXT_COLLATIONKEY
#define JAVA_TEXT_COLLATIONKEY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::text
{
	class CollationKey : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::text::CollationKey arg0);
		QAndroidJniObject toByteArray();
		QAndroidJniObject getSourceString();
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void CollationKey::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.CollationKey",
			"(V)V");
	}
	
	// Methods
	jint CollationKey::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jint CollationKey::compareTo(__jni_impl::java::text::CollationKey arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/text/CollationKey;)I",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CollationKey::toByteArray()
	{
		return __thiz.callObjectMethod(
			"toByteArray",
			"()[B");
	}
	QAndroidJniObject CollationKey::getSourceString()
	{
		return __thiz.callObjectMethod(
			"getSourceString",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class CollationKey : public __jni_impl::java::text::CollationKey
	{
	public:
		CollationKey(QAndroidJniObject obj) { __thiz = obj; }
		CollationKey()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_COLLATIONKEY

