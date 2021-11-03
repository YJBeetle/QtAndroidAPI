#pragma once

#include "../../../JObject.hpp"


namespace android::graphics::fonts
{
	class SystemFonts : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SystemFonts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SystemFonts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getAvailableFonts();
	};
} // namespace android::graphics::fonts

