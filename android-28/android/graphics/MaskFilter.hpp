#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class MaskFilter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MaskFilter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MaskFilter(QAndroidJniObject obj);
		
		// Constructors
		MaskFilter();
		
		// Methods
	};
} // namespace android::graphics

