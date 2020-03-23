#pragma once

#ifndef ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING
#define ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::view::inspector
{
	class IntFlagMapping : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(jint arg0, jint arg1, jstring arg2);
		QAndroidJniObject get(jint arg0);
	};
} // namespace __jni_impl::android::view::inspector


namespace __jni_impl::android::view::inspector
{
	// Fields
	
	// Constructors
	void IntFlagMapping::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.IntFlagMapping",
			"()V");
	}
	
	// Methods
	void IntFlagMapping::add(jint arg0, jint arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"add",
			"(IILjava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject IntFlagMapping::get(jint arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I)Ljava/util/Set;",
			arg0);
	}
} // namespace __jni_impl::android::view::inspector

namespace android::view::inspector
{
	class IntFlagMapping : public __jni_impl::android::view::inspector::IntFlagMapping
	{
	public:
		IntFlagMapping(QAndroidJniObject obj) { __thiz = obj; }
		IntFlagMapping()
		{
			__constructor();
		}
	};
} // namespace android::view::inspector

#endif // ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING

