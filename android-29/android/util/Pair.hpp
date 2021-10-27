#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class Pair : public __JniBaseClass
	{
	public:
		// Fields
		jobject first();
		jobject second();
		
		// Constructors
		void __constructor(jobject arg0, jobject arg1);
		
		// Methods
		static QAndroidJniObject create(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	jobject Pair::first()
	{
		return __thiz.getObjectField(
			"first",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	jobject Pair::second()
	{
		return __thiz.getObjectField(
			"second",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// Constructors
	void Pair::__constructor(jobject arg0, jobject arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.Pair",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject Pair::create(jobject arg0, jobject arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.Pair",
			"create",
			"(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;",
			arg0,
			arg1
		);
	}
	jboolean Pair::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Pair::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Pair::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class Pair : public __jni_impl::android::util::Pair
	{
	public:
		Pair(QAndroidJniObject obj) { __thiz = obj; }
		Pair(jobject arg0, jobject arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

