#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class DrawFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrawFilter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrawFilter(QAndroidJniObject obj);
		
		// Constructors
		DrawFilter();
		
		// Methods
	};
} // namespace android::graphics

