#pragma once

#include "./NumberKeyListener.def.hpp"

class JCharArray;
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
		static JCharArray CHARACTERS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DialerKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		DialerKeyListener(QAndroidJniObject obj) : android::text::method::NumberKeyListener(obj) {}
		
		// Constructors
		DialerKeyListener();
		
		// Methods
		static android::text::method::DialerKeyListener getInstance();
		jint getInputType() const;
	};
} // namespace android::text::method

