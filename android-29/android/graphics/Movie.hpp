#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Paint;
}
namespace java::io
{
	class InputStream;
}

namespace android::graphics
{
	class Movie : public __JniBaseClass
	{
	public:
		// Fields
		
		Movie(QAndroidJniObject obj);
		// Constructors
		Movie() = default;
		
		// Methods
		static QAndroidJniObject decodeByteArray(jbyteArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject decodeFile(jstring arg0);
		static QAndroidJniObject decodeStream(java::io::InputStream arg0);
		void draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2);
		void draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3);
		jint duration();
		jint height();
		jboolean isOpaque();
		jboolean setTime(jint arg0);
		jint width();
	};
} // namespace android::graphics

