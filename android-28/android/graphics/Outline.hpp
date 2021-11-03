#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class Rect;
}

namespace android::graphics
{
	class Outline : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Outline(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Outline(QJniObject obj);
		
		// Constructors
		Outline();
		Outline(android::graphics::Outline &arg0);
		
		// Methods
		jboolean canClip();
		jfloat getAlpha();
		jfloat getRadius();
		jboolean getRect(android::graphics::Rect arg0);
		jboolean isEmpty();
		void offset(jint arg0, jint arg1);
		void set(android::graphics::Outline arg0);
		void setAlpha(jfloat arg0);
		void setConvexPath(android::graphics::Path arg0);
		void setEmpty();
		void setOval(android::graphics::Rect arg0);
		void setOval(jint arg0, jint arg1, jint arg2, jint arg3);
		void setRect(android::graphics::Rect arg0);
		void setRect(jint arg0, jint arg1, jint arg2, jint arg3);
		void setRoundRect(android::graphics::Rect arg0, jfloat arg1);
		void setRoundRect(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4);
	};
} // namespace android::graphics

