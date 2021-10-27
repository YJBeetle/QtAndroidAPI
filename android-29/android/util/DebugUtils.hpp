#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class DebugUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isObjectSelected(jobject arg0);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void DebugUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.util.DebugUtils",
			"(V)V");
	}
	
	// Methods
	jboolean DebugUtils::isObjectSelected(jobject arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.util.DebugUtils",
			"isObjectSelected",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class DebugUtils : public __jni_impl::android::util::DebugUtils
	{
	public:
		DebugUtils(QAndroidJniObject obj) { __thiz = obj; }
		DebugUtils()
		{
			__constructor();
		}
	};
} // namespace android::util

