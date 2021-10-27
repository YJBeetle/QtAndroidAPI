#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class PorterDuff : public __JniBaseClass
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
	void PorterDuff::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PorterDuff",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PorterDuff : public __jni_impl::android::graphics::PorterDuff
	{
	public:
		PorterDuff(QAndroidJniObject obj) { __thiz = obj; }
		PorterDuff()
		{
			__constructor();
		}
	};
} // namespace android::graphics

