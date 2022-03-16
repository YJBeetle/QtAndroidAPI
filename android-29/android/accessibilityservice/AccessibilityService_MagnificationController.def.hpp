#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class AccessibilityService;
}
namespace android::graphics
{
	class Region;
}
namespace android::os
{
	class Handler;
}
class JObject;

namespace android::accessibilityservice
{
	class AccessibilityService_MagnificationController : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityService_MagnificationController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_MagnificationController(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void addListener(JObject arg0) const;
		void addListener(JObject arg0, android::os::Handler arg1) const;
		jfloat getCenterX() const;
		jfloat getCenterY() const;
		android::graphics::Region getMagnificationRegion() const;
		jfloat getScale() const;
		jboolean removeListener(JObject arg0) const;
		jboolean reset(jboolean arg0) const;
		jboolean setCenter(jfloat arg0, jfloat arg1, jboolean arg2) const;
		jboolean setScale(jfloat arg0, jboolean arg1) const;
	};
} // namespace android::accessibilityservice

