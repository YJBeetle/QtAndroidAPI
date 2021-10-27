#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class NoCopySpan_Concrete : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void NoCopySpan_Concrete::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.NoCopySpan$Concrete",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::text

namespace android::text
{
	class NoCopySpan_Concrete : public __jni_impl::android::text::NoCopySpan_Concrete
	{
	public:
		NoCopySpan_Concrete(QAndroidJniObject obj) { __thiz = obj; }
		NoCopySpan_Concrete()
		{
			__constructor();
		}
	};
} // namespace android::text

