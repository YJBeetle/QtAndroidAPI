#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::renderscript
{
	class Short4 : public __JniBaseClass
	{
	public:
		// Fields
		jshort w();
		jshort x();
		jshort y();
		jshort z();
		
		// Constructors
		void __constructor();
		void __constructor(jshort arg0, jshort arg1, jshort arg2, jshort arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	jshort Short4::w()
	{
		return __thiz.getField<jshort>(
			"w"
		);
	}
	jshort Short4::x()
	{
		return __thiz.getField<jshort>(
			"x"
		);
	}
	jshort Short4::y()
	{
		return __thiz.getField<jshort>(
			"y"
		);
	}
	jshort Short4::z()
	{
		return __thiz.getField<jshort>(
			"z"
		);
	}
	
	// Constructors
	void Short4::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short4",
			"()V"
		);
	}
	void Short4::__constructor(jshort arg0, jshort arg1, jshort arg2, jshort arg3)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Short4",
			"(SSSS)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Short4 : public __jni_impl::android::renderscript::Short4
	{
	public:
		Short4(QAndroidJniObject obj) { __thiz = obj; }
		Short4()
		{
			__constructor();
		}
		Short4(jshort arg0, jshort arg1, jshort arg2, jshort arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::renderscript

