#pragma once

#include "./NumberKeyListener.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit DialerKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		DialerKeyListener(QJniObject obj);
		
		// Constructors
		DialerKeyListener();
		
		// Methods
		static android::text::method::DialerKeyListener getInstance();
		jint getInputType() const;
	};
} // namespace android::text::method

