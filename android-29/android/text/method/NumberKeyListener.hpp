#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"

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
	class NumberKeyListener : public android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		NumberKeyListener(QAndroidJniObject obj);
		// Constructors
		NumberKeyListener();
		
		// Methods
		jstring filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jstring filter(const QString &arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jboolean onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
	};
} // namespace android::text::method

