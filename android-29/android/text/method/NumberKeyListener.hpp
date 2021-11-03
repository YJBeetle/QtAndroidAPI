#pragma once

#include "./BaseKeyListener.hpp"

class JCharArray;
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
class JString;

namespace android::text::method
{
	class NumberKeyListener : public android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NumberKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::BaseKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		NumberKeyListener(QJniObject obj);
		
		// Constructors
		NumberKeyListener();
		
		// Methods
		JString filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const;
		jboolean onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const;
	};
} // namespace android::text::method

