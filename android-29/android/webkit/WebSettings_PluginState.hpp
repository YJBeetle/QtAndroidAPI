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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings_PluginState(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_PluginState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

