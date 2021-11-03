#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Path;
}

namespace android::accessibilityservice
{
	class GestureDescription_StrokeDescription : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureDescription_StrokeDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureDescription_StrokeDescription(QAndroidJniObject obj);
		
		// Constructors
		GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2);
		GestureDescription_StrokeDescription(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3);
		
		// Methods
		android::accessibilityservice::GestureDescription_StrokeDescription continueStroke(android::graphics::Path arg0, jlong arg1, jlong arg2, jboolean arg3) const;
		jlong getDuration() const;
		android::graphics::Path getPath() const;
		jlong getStartTime() const;
		jboolean willContinue() const;
	};
} // namespace android::accessibilityservice

