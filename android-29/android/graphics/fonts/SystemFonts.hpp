#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::graphics::fonts
{
	class SystemFonts : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SystemFonts(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SystemFonts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getAvailableFonts();
	};
} // namespace android::graphics::fonts

