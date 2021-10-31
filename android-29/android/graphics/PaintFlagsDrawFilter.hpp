#pragma once

#include "../../__JniBaseClass.hpp"
#include "./DrawFilter.hpp"


namespace android::graphics
{
	class PaintFlagsDrawFilter : public android::graphics::DrawFilter
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PaintFlagsDrawFilter(const char *className, const char *sig, Ts...agv) : android::graphics::DrawFilter(className, sig, std::forward<Ts>(agv)...) {}
		PaintFlagsDrawFilter(QJniObject obj);
		
		// Constructors
		PaintFlagsDrawFilter(jint arg0, jint arg1);
		
		// Methods
	};
} // namespace android::graphics

