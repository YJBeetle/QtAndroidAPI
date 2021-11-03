#pragma once

#include "./NumberKeyListener.hpp"

class JCharArray;
class JString;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::text::method
{
	class DigitsKeyListener : public android::text::method::NumberKeyListener
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DigitsKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		DigitsKeyListener(QAndroidJniObject obj);
		
		// Constructors
		DigitsKeyListener();
		DigitsKeyListener(java::util::Locale arg0);
		DigitsKeyListener(jboolean arg0, jboolean arg1);
		DigitsKeyListener(java::util::Locale arg0, jboolean arg1, jboolean arg2);
		
		// Methods
		static android::text::method::DigitsKeyListener getInstance();
		static android::text::method::DigitsKeyListener getInstance(JString arg0);
		static android::text::method::DigitsKeyListener getInstance(java::util::Locale arg0);
		static android::text::method::DigitsKeyListener getInstance(jboolean arg0, jboolean arg1);
		static android::text::method::DigitsKeyListener getInstance(java::util::Locale arg0, jboolean arg1, jboolean arg2);
		JString filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const;
		jint getInputType() const;
	};
} // namespace android::text::method

