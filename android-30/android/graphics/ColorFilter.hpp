#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class ColorFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorFilter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ColorFilter(QJniObject obj);
		
		// Constructors
		ColorFilter();
		
		// Methods
	};
} // namespace android::graphics

