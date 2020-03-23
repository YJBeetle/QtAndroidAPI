#pragma once

#ifndef ANDROID_TEXT_LAYOUT_DIRECTIONS
#define ANDROID_TEXT_LAYOUT_DIRECTIONS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class Layout_Directions : public __JniBaseClass
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
	void Layout_Directions::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.Layout$Directions",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::text

namespace android::text
{
	class Layout_Directions : public __jni_impl::android::text::Layout_Directions
	{
	public:
		Layout_Directions(QAndroidJniObject obj) { __thiz = obj; }
		Layout_Directions()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_LAYOUT_DIRECTIONS

