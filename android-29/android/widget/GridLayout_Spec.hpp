#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::widget
{
	class GridLayout_Alignment;
}

namespace __jni_impl::android::widget
{
	class GridLayout_Spec : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::widget

#include "GridLayout_Alignment.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void GridLayout_Spec::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$Spec",
			"(V)V");
	}
	
	// Methods
	jboolean GridLayout_Spec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint GridLayout_Spec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class GridLayout_Spec : public __jni_impl::android::widget::GridLayout_Spec
	{
	public:
		GridLayout_Spec(QAndroidJniObject obj) { __thiz = obj; }
		GridLayout_Spec()
		{
			__constructor();
		}
	};
} // namespace android::widget

