#pragma once

#include "./NumberKeyListener.hpp"

class JCharArray;
namespace java::util
{
	class Locale;
}

namespace android::text::method
{
	class TimeKeyListener : public android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static JCharArray CHARACTERS();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		TimeKeyListener(QJniObject obj);
		
		// Constructors
		TimeKeyListener();
		TimeKeyListener(java::util::Locale arg0);
		
		// Methods
		static android::text::method::TimeKeyListener getInstance();
		static android::text::method::TimeKeyListener getInstance(java::util::Locale arg0);
		jint getInputType() const;
	};
} // namespace android::text::method

