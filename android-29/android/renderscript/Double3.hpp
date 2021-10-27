#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Double3 : public __JniBaseClass
	{
	public:
		// Fields
		jdouble x();
		jdouble y();
		jdouble z();
		
		// Constructors
		void __constructor();
		void __constructor(jdouble arg0, jdouble arg1, jdouble arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jdouble Double3::x()
	{
		return __thiz.getField<jdouble>(
			"x"
		);
	}
	jdouble Double3::y()
	{
		return __thiz.getField<jdouble>(
			"y"
		);
	}
	jdouble Double3::z()
	{
		return __thiz.getField<jdouble>(
			"z"
		);
	}
	
	// Constructors
	void Double3::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double3",
			"()V"
		);
	}
	void Double3::__constructor(jdouble arg0, jdouble arg1, jdouble arg2)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Double3",
			"(DDD)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Double3 : public __jni_impl::android::renderscript::Double3
	{
	public:
		Double3(QAndroidJniObject obj) { __thiz = obj; }
		Double3()
		{
			__constructor();
		}
		Double3(jdouble arg0, jdouble arg1, jdouble arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::renderscript

