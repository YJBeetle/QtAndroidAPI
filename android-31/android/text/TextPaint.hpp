#pragma once

#include "../graphics/Paint.hpp"

class JIntArray;
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
		JIntArray drawableState();
		jint linkColor();
		jint underlineColor();
		jfloat underlineThickness();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextPaint(const char *className, const char *sig, Ts...agv) : android::graphics::Paint(className, sig, std::forward<Ts>(agv)...) {}
		TextPaint(QJniObject obj);
		
		// Constructors
		TextPaint();
		TextPaint(android::graphics::Paint arg0);
		TextPaint(jint arg0);
		
		// Methods
		jfloat getUnderlineThickness();
		void set(android::text::TextPaint arg0);
	};
} // namespace android::text

