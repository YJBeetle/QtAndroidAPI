#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"

namespace android::text::method
{
	class TextKeyListener_Capitalize;
}
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
	class MultiTapKeyListener : public android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		MultiTapKeyListener(QAndroidJniObject obj);
		// Constructors
		MultiTapKeyListener(android::text::method::TextKeyListener_Capitalize &arg0, jboolean &arg1);
		MultiTapKeyListener() = default;
		
		// Methods
		static QAndroidJniObject getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1);
		jint getInputType();
		jboolean onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
		void onSpanAdded(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3);
		void onSpanChanged(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void onSpanRemoved(__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3);
	};
} // namespace android::text::method

