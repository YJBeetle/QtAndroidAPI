#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_ZoomDensity : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLOSE();
		static QAndroidJniObject FAR();
		static QAndroidJniObject MEDIUM();
		
		WebSettings_ZoomDensity(QAndroidJniObject obj);
		// Constructors
		WebSettings_ZoomDensity() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

