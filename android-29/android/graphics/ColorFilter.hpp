#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class ColorFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void ColorFilter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ColorFilter",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ColorFilter : public __jni_impl::android::graphics::ColorFilter
	{
	public:
		ColorFilter(QAndroidJniObject obj) { __thiz = obj; }
		ColorFilter()
		{
			__constructor();
		}
	};
} // namespace android::graphics

