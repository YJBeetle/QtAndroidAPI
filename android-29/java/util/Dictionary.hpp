#pragma once

#ifndef JAVA_UTIL_DICTIONARY
#define JAVA_UTIL_DICTIONARY

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::util
{
	class Dictionary : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject remove(jobject arg0);
		QAndroidJniObject get(jobject arg0);
		QAndroidJniObject put(jobject arg0, jobject arg1);
		jboolean isEmpty();
		jint size();
		QAndroidJniObject elements();
		QAndroidJniObject keys();
	};
} // namespace __jni_impl::java::util


namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Dictionary::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Dictionary",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Dictionary::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject Dictionary::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0);
	}
	QAndroidJniObject Dictionary::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1);
	}
	jboolean Dictionary::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	jint Dictionary::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject Dictionary::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;");
	}
	QAndroidJniObject Dictionary::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;");
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Dictionary : public __jni_impl::java::util::Dictionary
	{
	public:
		Dictionary(QAndroidJniObject obj) { __thiz = obj; }
		Dictionary()
		{
			__constructor();
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_DICTIONARY

