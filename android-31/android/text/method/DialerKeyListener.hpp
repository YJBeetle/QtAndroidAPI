#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DialerKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		DialerKeyListener(QAndroidJniObject obj);
		
		// Constructors
		DialerKeyListener();
		
		// Methods
		static android::text::method::DialerKeyListener getInstance();
		jint getInputType();
	};
} // namespace android::text::method

