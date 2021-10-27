#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"
#include "./NumberKeyListener.hpp"

namespace android::view
{
	class KeyEvent;
}

namespace android::text::method
{
	class DialerKeyListener : public android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static jcharArray CHARACTERS();
		
		DialerKeyListener(QAndroidJniObject obj);
		// Constructors
		DialerKeyListener();
		
		// Methods
		static QAndroidJniObject getInstance();
		jint getInputType();
	};
} // namespace android::text::method

