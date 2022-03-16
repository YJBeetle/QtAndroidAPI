#pragma once

#include "./NumberKeyListener.hpp"

class JCharArray;
namespace java::util
{
	class Locale;
}

namespace android::text::method
{
	class DateKeyListener : public android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static JCharArray CHARACTERS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		DateKeyListener(QAndroidJniObject obj) : android::text::method::NumberKeyListener(obj) {}
		
		// Constructors
		DateKeyListener();
		DateKeyListener(java::util::Locale arg0);
		
		// Methods
		static android::text::method::DateKeyListener getInstance();
		static android::text::method::DateKeyListener getInstance(java::util::Locale arg0);
		jint getInputType() const;
	};
} // namespace android::text::method

