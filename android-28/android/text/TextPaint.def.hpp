#pragma once

#include "../graphics/Paint.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextPaint(const char *className, const char *sig, Ts...agv) : android::graphics::Paint(className, sig, std::forward<Ts>(agv)...) {}
		TextPaint(QAndroidJniObject obj) : android::graphics::Paint(obj) {}
		
		// Constructors
		TextPaint();
		TextPaint(android::graphics::Paint arg0);
		TextPaint(jint arg0);
		
		// Methods
		void set(android::text::TextPaint arg0) const;
	};
} // namespace android::text

