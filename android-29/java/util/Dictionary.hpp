#pragma once

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
		QAndroidJniObject elements();
		jobject get(jobject arg0);
		jboolean isEmpty();
		QAndroidJniObject keys();
		jobject put(jobject arg0, jobject arg1);
		jobject remove(jobject arg0);
		jint size();
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
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject Dictionary::elements()
	{
		return __thiz.callObjectMethod(
			"elements",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject Dictionary::get(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jboolean Dictionary::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	QAndroidJniObject Dictionary::keys()
	{
		return __thiz.callObjectMethod(
			"keys",
			"()Ljava/util/Enumeration;"
		);
	}
	jobject Dictionary::put(jobject arg0, jobject arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;",
			arg0,
			arg1
		).object<jobject>();
	}
	jobject Dictionary::remove(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"remove",
			"(Ljava/lang/Object;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jint Dictionary::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I"
		);
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

