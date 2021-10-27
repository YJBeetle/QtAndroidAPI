#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Region;
}

namespace android::inputmethodservice
{
	class InputMethodService_Insets : public __JniBaseClass
	{
	public:
		// Fields
		static jint TOUCHABLE_INSETS_CONTENT();
		static jint TOUCHABLE_INSETS_FRAME();
		static jint TOUCHABLE_INSETS_REGION();
		static jint TOUCHABLE_INSETS_VISIBLE();
		jint contentTopInsets();
		jint touchableInsets();
		QAndroidJniObject touchableRegion();
		jint visibleTopInsets();
		
		InputMethodService_Insets(QAndroidJniObject obj);
		// Constructors
		InputMethodService_Insets();
		
		// Methods
	};
} // namespace android::inputmethodservice

