#pragma once

#include "../../JObject.hpp"

namespace android::accessibilityservice
{
	class MagnificationConfig;
}

namespace android::accessibilityservice
{
	class MagnificationConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MagnificationConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MagnificationConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MagnificationConfig_Builder();
		
		// Methods
		android::accessibilityservice::MagnificationConfig build() const;
		android::accessibilityservice::MagnificationConfig_Builder setCenterX(jfloat arg0) const;
		android::accessibilityservice::MagnificationConfig_Builder setCenterY(jfloat arg0) const;
		android::accessibilityservice::MagnificationConfig_Builder setMode(jint arg0) const;
		android::accessibilityservice::MagnificationConfig_Builder setScale(jfloat arg0) const;
	};
} // namespace android::accessibilityservice

