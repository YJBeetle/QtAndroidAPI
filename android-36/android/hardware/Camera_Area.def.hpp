#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Rect;
}
class JObject;

namespace android::hardware
{
	class Camera_Area : public JObject
	{
	public:
		// Fields
		android::graphics::Rect rect();
		jint weight();
		
		// QJniObject forward
		template<typename ...Ts> explicit Camera_Area(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Camera_Area(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Camera_Area(android::graphics::Rect arg0, jint arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
	};
} // namespace android::hardware

