#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class TextPaint;
}
class JString;

namespace android::text
{
	class TextShaper : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextShaper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextShaper(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static void shapeText(JString arg0, jint arg1, jint arg2, JObject arg3, android::text::TextPaint arg4, JObject arg5);
	};
} // namespace android::text

