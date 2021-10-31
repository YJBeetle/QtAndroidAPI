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
	class QwertyKeyListener : public android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit QwertyKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::BaseKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		QwertyKeyListener(QAndroidJniObject obj);
		
		// Constructors
		QwertyKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1);
		
		// Methods
		static QAndroidJniObject getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1);
		static QAndroidJniObject getInstanceForFullKeyboard();
		static void markAsReplaced(__JniBaseClass arg0, jint arg1, jint arg2, jstring arg3);
		jint getInputType();
		jboolean onKeyDown(android::view::View arg0, __JniBaseClass arg1, jint arg2, android::view::KeyEvent arg3);
	};
} // namespace android::text::method

