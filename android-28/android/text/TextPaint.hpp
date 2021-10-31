#pragma once

#include "../../__JniBaseClass.hpp"
#include "../graphics/Paint.hpp"

namespace android::graphics
{
	class Paint;
}

namespace android::text
{
	class TextPaint : public android::graphics::Paint
	{
	public:
		// Fields
		jint baselineShift();
		jint bgColor();
		jfloat density();
		jintArray drawableState();
		jint linkColor();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextPaint(const char *className, const char *sig, Ts...agv) : android::graphics::Paint(className, sig, std::forward<Ts>(agv)...) {}
		TextPaint(QJniObject obj);
		
		// Constructors
		TextPaint();
		TextPaint(android::graphics::Paint arg0);
		TextPaint(jint arg0);
		
		// Methods
		void set(android::text::TextPaint arg0);
	};
} // namespace android::text

