#pragma once

#include "./Xfermode.def.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit PorterDuffXfermode(const char *className, const char *sig, Ts...agv) : android::graphics::Xfermode(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuffXfermode(QJniObject obj) : android::graphics::Xfermode(obj) {}
		
		// Constructors
		PorterDuffXfermode(android::graphics::PorterDuff_Mode arg0);
		
		// Methods
	};
} // namespace android::graphics

