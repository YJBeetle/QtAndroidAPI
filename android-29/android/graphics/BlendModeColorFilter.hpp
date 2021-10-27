#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ColorFilter.hpp"

namespace android::graphics
{
	class BlendMode;
}

namespace android::graphics
{
	class BlendModeColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		BlendModeColorFilter(QAndroidJniObject obj);
		// Constructors
		BlendModeColorFilter(jint &arg0, android::graphics::BlendMode &arg1);
		BlendModeColorFilter() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getColor();
		QAndroidJniObject getMode();
		jint hashCode();
	};
} // namespace android::graphics

