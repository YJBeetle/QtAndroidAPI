#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class Camera;
}
class JObject;

namespace android::hardware
{
	class Camera_Size : public JObject
	{
	public:
		// Fields
		jint height();
		jint width();
		
		// QJniObject forward
		template<typename ...Ts> explicit Camera_Size(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Camera_Size(QJniObject obj);
		
		// Constructors
		Camera_Size(android::hardware::Camera arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
	};
} // namespace android::hardware

