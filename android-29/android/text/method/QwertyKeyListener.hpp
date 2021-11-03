#pragma once

#include "../../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit QwertyKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::BaseKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		QwertyKeyListener(QJniObject obj);
		
		// Constructors
		QwertyKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1);
		
		// Methods
		static android::text::method::QwertyKeyListener getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1);
		static android::text::method::QwertyKeyListener getInstanceForFullKeyboard();
		static void markAsReplaced(JObject arg0, jint arg1, jint arg2, jstring arg3);
		jint getInputType();
		jboolean onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3);
	};
} // namespace android::text::method

