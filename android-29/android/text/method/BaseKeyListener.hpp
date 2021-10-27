#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MetaKeyKeyListener.hpp"

namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}

namespace android::text::method
{
	class BaseKeyListener : public android::text::method::MetaKeyKeyListener
	{
	public:
		// Fields
		
		BaseKeyListener(QAndroidJniObject obj);
		// Constructors
		BaseKeyListener();
		
		// Methods
		jboolean backspace(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
		jboolean forwardDelete(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
		jboolean onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
		jboolean onKeyOther(android::view::View arg0, __JniBaseClass arg1, android::view::KeyEvent arg2);
	};
} // namespace android::text::method

