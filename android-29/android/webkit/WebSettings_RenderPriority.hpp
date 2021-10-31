#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_RenderPriority : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject HIGH();
		static QAndroidJniObject LOW();
		static QAndroidJniObject NORMAL();
		
		WebSettings_RenderPriority(QAndroidJniObject obj);
		// Constructors
		WebSettings_RenderPriority() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

