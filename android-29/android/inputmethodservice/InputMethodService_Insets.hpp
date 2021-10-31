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
		android::graphics::Region touchableRegion();
		jint visibleTopInsets();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodService_Insets(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodService_Insets(QAndroidJniObject obj);
		
		// Constructors
		InputMethodService_Insets();
		
		// Methods
	};
} // namespace android::inputmethodservice

