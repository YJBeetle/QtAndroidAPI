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
		
		DigitsKeyListener(QAndroidJniObject obj);
		// Constructors
		DigitsKeyListener();
		DigitsKeyListener(java::util::Locale arg0);
		DigitsKeyListener(jboolean arg0, jboolean arg1);
		DigitsKeyListener(java::util::Locale arg0, jboolean arg1, jboolean arg2);
		
		// Methods
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		static QAndroidJniObject getInstance(jboolean arg0, jboolean arg1);
		static QAndroidJniObject getInstance(java::util::Locale arg0, jboolean arg1, jboolean arg2);
		jstring filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5);
		jint getInputType();
	};
} // namespace android::text::method

