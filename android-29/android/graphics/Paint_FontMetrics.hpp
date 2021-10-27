#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::graphics
{
	class Paint_FontMetrics : public __JniBaseClass
	{
	public:
		// Fields
		jfloat ascent();
		jfloat bottom();
		jfloat descent();
		jfloat leading();
		jfloat top();
		
		Paint_FontMetrics(QAndroidJniObject obj);
		// Constructors
		Paint_FontMetrics();
		
		// Methods
	};
} // namespace android::graphics

