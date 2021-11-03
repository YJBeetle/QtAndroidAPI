#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
class JString;

namespace android::graphics
{
	class Movie : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Movie(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Movie(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::graphics::Movie decodeByteArray(JByteArray arg0, jint arg1, jint arg2);
		static android::graphics::Movie decodeFile(JString arg0);
		static android::graphics::Movie decodeStream(java::io::InputStream arg0);
		void draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2) const;
		void draw(android::graphics::Canvas arg0, jfloat arg1, jfloat arg2, android::graphics::Paint arg3) const;
		jint duration() const;
		jint height() const;
		jboolean isOpaque() const;
		jboolean setTime(jint arg0) const;
		jint width() const;
	};
} // namespace android::graphics

