#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::text
{
	class TextPaint;
}

namespace android::text
{
	class TextShaper : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextShaper(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextShaper(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void shapeText(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, android::text::TextPaint arg4, __JniBaseClass arg5);
	};
} // namespace android::text

