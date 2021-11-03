#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PorterDuffXfermode(const char *className, const char *sig, Ts...agv) : android::graphics::Xfermode(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuffXfermode(QAndroidJniObject obj);
		
		// Constructors
		PorterDuffXfermode(android::graphics::PorterDuff_Mode arg0);
		
		// Methods
	};
} // namespace android::graphics

