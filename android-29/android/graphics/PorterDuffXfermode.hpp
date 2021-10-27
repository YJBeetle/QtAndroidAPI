#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Xfermode.hpp"

namespace android::graphics
{
	class PorterDuff_Mode;
}

namespace android::graphics
{
	class PorterDuffXfermode : public android::graphics::Xfermode
	{
	public:
		// Fields
		
		PorterDuffXfermode(QAndroidJniObject obj);
		// Constructors
		PorterDuffXfermode(android::graphics::PorterDuff_Mode &arg0);
		PorterDuffXfermode() = default;
		
		// Methods
	};
} // namespace android::graphics

