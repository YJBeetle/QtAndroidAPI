#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::graphics::fonts
{
	class SystemFonts : public __JniBaseClass
	{
	public:
		// Fields
		
		SystemFonts(QAndroidJniObject obj);
		// Constructors
		SystemFonts() = default;
		
		// Methods
		static QAndroidJniObject getAvailableFonts();
	};
} // namespace android::graphics::fonts

