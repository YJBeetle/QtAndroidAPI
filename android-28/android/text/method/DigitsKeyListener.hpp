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
	class DigitsKeyListener : public android::text::method::NumberKeyListener
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DigitsKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		DigitsKeyListener(QJniObject obj);
		
		// Constructors
		DigitsKeyListener();
		DigitsKeyListener(java::util::Locale arg0);
		DigitsKeyListener(jboolean arg0, jboolean arg1);
		DigitsKeyListener(java::util::Locale arg0, jboolean arg1, jboolean arg2);
		
		// Methods
		static android::text::method::DigitsKeyListener getInstance();
		static android::text::method::DigitsKeyListener getInstance(jstring arg0);
		static android::text::method::DigitsKeyListener getInstance(java::util::Locale arg0);
		static android::text::method::DigitsKeyListener getInstance(jboolean arg0, jboolean arg1);
		static android::text::method::DigitsKeyListener getInstance(java::util::Locale arg0, jboolean arg1, jboolean arg2);
		jstring filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jint getInputType();
	};
} // namespace android::text::method

