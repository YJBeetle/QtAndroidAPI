#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class Paint_FontMetricsInt : public __JniBaseClass
	{
	public:
		// Fields
		jint ascent();
		jint bottom();
		jint descent();
		jint leading();
		jint top();
		
		Paint_FontMetricsInt(QAndroidJniObject obj);
		// Constructors
		Paint_FontMetricsInt();
		
		// Methods
		jstring toString();
	};
} // namespace android::graphics

