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
	class TimeKeyListener : public android::text::method::NumberKeyListener
	{
	public:
		// Fields
		static jcharArray CHARACTERS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeKeyListener(const char *className, const char *sig, Ts...agv) : android::text::method::NumberKeyListener(className, sig, std::forward<Ts>(agv)...) {}
		TimeKeyListener(QAndroidJniObject obj);
		
		// Constructors
		TimeKeyListener();
		TimeKeyListener(java::util::Locale arg0);
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jint getInputType();
	};
} // namespace android::text::method

