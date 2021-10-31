#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_PluginState : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject OFF();
		static QAndroidJniObject ON();
		static QAndroidJniObject ON_DEMAND();
		
		WebSettings_PluginState(QAndroidJniObject obj);
		// Constructors
		WebSettings_PluginState() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

