#pragma once

#include "../../__JniBaseClass.hpp"
#include "./MaskFilter.hpp"


namespace __jni_impl::android::graphics
{
	class EmbossMaskFilter : public __jni_impl::android::graphics::MaskFilter
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jfloatArray arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void EmbossMaskFilter::__constructor(jfloatArray arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.EmbossMaskFilter",
			"([FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class EmbossMaskFilter : public __jni_impl::android::graphics::EmbossMaskFilter
	{
	public:
		EmbossMaskFilter(QAndroidJniObject obj) { __thiz = obj; }
		EmbossMaskFilter(jfloatArray arg0, jfloat arg1, jfloat arg2, jfloat arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::graphics

