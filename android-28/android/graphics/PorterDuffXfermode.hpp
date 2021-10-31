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
		
		// QJniObject forward
		template<typename ...Ts> explicit PorterDuffXfermode(const char *className, const char *sig, Ts...agv) : android::graphics::Xfermode(className, sig, std::forward<Ts>(agv)...) {}
		PorterDuffXfermode(QJniObject obj);
		
		// Constructors
		PorterDuffXfermode(android::graphics::PorterDuff_Mode arg0);
		
		// Methods
	};
} // namespace android::graphics

