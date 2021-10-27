#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Double2 : public __JniBaseClass
	{
	public:
		// Fields
		jdouble x();
		jdouble y();
		
		// Constructors
		void __constructor();
		void __constructor(jdouble arg0, jdouble arg1);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jdouble Double2::x()
	{
		return __thiz.getField<jdouble>(
			"x"
		);
	}
	jdouble Double2::y()
	{
		return __thiz.getField<jdouble>(
			"y"
		);
	}
	
	// Constructors
	void Double2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double2",
			"()V"
		);
	}
	void Double2::__constructor(jdouble arg0, jdouble arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double2",
			"(DD)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Double2 : public __jni_impl::android::renderscript::Double2
	{
	public:
		Double2(QAndroidJniObject obj) { __thiz = obj; }
		Double2()
		{
			__constructor();
		}
		Double2(jdouble arg0, jdouble arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::renderscript

