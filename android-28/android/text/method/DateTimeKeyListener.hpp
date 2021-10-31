#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"
#include "./NumberKeyListener.hpp"

namespace java::util
{
	class Locale;
}

namespace android::text::method
{
	class DateTimeKeyListener : public android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static jcharArray CHARACTERS();
		
		// QJniObject forward
		template<typename ...Ts> explicit DateTimeKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		DateTimeKeyListener(QJniObject obj);
		
		// Constructors
		DateTimeKeyListener();
		DateTimeKeyListener(java::util::Locale arg0);
		
		// Methods
		static android::text::method::DateTimeKeyListener getInstance();
		static android::text::method::DateTimeKeyListener getInstance(java::util::Locale arg0);
		jint getInputType();
	};
} // namespace android::text::method

