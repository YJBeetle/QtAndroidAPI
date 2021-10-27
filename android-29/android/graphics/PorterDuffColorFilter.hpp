#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ColorFilter.hpp"

namespace android::graphics
{
	class PorterDuff_Mode;
}

namespace android::graphics
{
	class PorterDuffColorFilter : public android::graphics::ColorFilter
	{
	public:
		// Fields
		
		PorterDuffColorFilter(QAndroidJniObject obj);
		// Constructors
		PorterDuffColorFilter(jint &arg0, android::graphics::PorterDuff_Mode &arg1);
		PorterDuffColorFilter() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace android::graphics

