#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Region;
}
namespace android::os
{
	class Handler;
}

namespace android::accessibilityservice
{
	class AccessibilityService_MagnificationController : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AccessibilityService_MagnificationController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AccessibilityService_MagnificationController(QJniObject obj);
		
		// Constructors
		
		// Methods
		void addListener(JObject arg0);
		void addListener(JObject arg0, android::os::Handler arg1);
		jfloat getCenterX();
		jfloat getCenterY();
		android::graphics::Region getMagnificationRegion();
		jfloat getScale();
		jboolean removeListener(JObject arg0);
		jboolean reset(jboolean arg0);
		jboolean setCenter(jfloat arg0, jfloat arg1, jboolean arg2);
		jboolean setScale(jfloat arg0, jboolean arg1);
	};
} // namespace android::accessibilityservice

