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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Outline(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Outline(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Outline();
		Outline(android::graphics::Outline &arg0);
		
		// Methods
		jboolean canClip() const;
		jfloat getAlpha() const;
		jfloat getRadius() const;
		jboolean getRect(android::graphics::Rect arg0) const;
		jboolean isEmpty() const;
		void offset(jint arg0, jint arg1) const;
		void set(android::graphics::Outline arg0) const;
		void setAlpha(jfloat arg0) const;
		void setConvexPath(android::graphics::Path arg0) const;
		void setEmpty() const;
		void setOval(android::graphics::Rect arg0) const;
		void setOval(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setPath(android::graphics::Path arg0) const;
		void setRect(android::graphics::Rect arg0) const;
		void setRect(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setRoundRect(android::graphics::Rect arg0, jfloat arg1) const;
		void setRoundRect(jint arg0, jint arg1, jint arg2, jint arg3, jfloat arg4) const;
	};
} // namespace android::graphics

