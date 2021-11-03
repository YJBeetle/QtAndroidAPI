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
	class TextKeyListener : public android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::BaseKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		TextKeyListener(QJniObject obj);
		
		// Constructors
		TextKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1);
		
		// Methods
		static void clear(JObject arg0);
		static android::text::method::TextKeyListener getInstance();
		static android::text::method::TextKeyListener getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1);
		static jboolean shouldCap(android::text::method::TextKeyListener_Capitalize arg0, jstring arg1, jint arg2);
		jint getInputType();
		jboolean onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3);
		jboolean onKeyOther(android::view::View arg0, JObject arg1, android::view::KeyEvent arg2);
		jboolean onKeyUp(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3);
		void onSpanAdded(JObject arg0, jobject arg1, jint arg2, jint arg3);
		void onSpanChanged(JObject arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void onSpanRemoved(JObject arg0, jobject arg1, jint arg2, jint arg3);
		void release();
	};
} // namespace android::text::method

