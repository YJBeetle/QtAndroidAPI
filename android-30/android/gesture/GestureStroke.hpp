#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::gesture
{
	class OrientedBoundingBox;
}
namespace android::graphics
{
	class Path;
}
namespace android::graphics
{
	class RectF;
}
class JObject;
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class GestureStroke : public JObject
	{
	public:
		// Fields
		android::graphics::RectF boundingBox();
		jfloat length();
		JFloatArray points();
		
		// QJniObject forward
		template<typename ...Ts> explicit GestureStroke(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureStroke(QJniObject obj);
		
		// Constructors
		GestureStroke(java::util::ArrayList arg0);
		
		// Methods
		void clearPath() const;
		JObject clone() const;
		android::gesture::OrientedBoundingBox computeOrientedBoundingBox() const;
		android::graphics::Path getPath() const;
		android::graphics::Path toPath(jfloat arg0, jfloat arg1, jint arg2) const;
	};
} // namespace android::gesture

