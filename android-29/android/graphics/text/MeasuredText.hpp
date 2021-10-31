#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Rect;
}

namespace android::graphics::text
{
	class MeasuredText : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MeasuredText(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MeasuredText(QJniObject obj);
		
		// Constructors
		
		// Methods
		void getBounds(jint arg0, jint arg1, android::graphics::Rect arg2);
		jfloat getCharWidthAt(jint arg0);
		jfloat getWidth(jint arg0, jint arg1);
	};
} // namespace android::graphics::text

