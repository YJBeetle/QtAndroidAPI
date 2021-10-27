#pragma once

#include "../../__JniBaseClass.hpp"
#include "../graphics/Paint_FontMetricsInt.hpp"


namespace android::text
{
	class BoringLayout_Metrics : public android::graphics::Paint_FontMetricsInt
	{
	public:
		// Fields
		jint width();
		
		BoringLayout_Metrics(QAndroidJniObject obj);
		// Constructors
		BoringLayout_Metrics();
		
		// Methods
		jstring toString();
	};
} // namespace android::text

