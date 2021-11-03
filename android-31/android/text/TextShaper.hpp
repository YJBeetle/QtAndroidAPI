#pragma once

#include "../../JObject.hpp"

namespace android::text
{
	class TextPaint;
}

namespace android::text
{
	class TextShaper : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TextShaper(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextShaper(QJniObject obj);
		
		// Constructors
		
		// Methods
		static void shapeText(jstring arg0, jint arg1, jint arg2, JObject arg3, android::text::TextPaint arg4, JObject arg5);
	};
} // namespace android::text

