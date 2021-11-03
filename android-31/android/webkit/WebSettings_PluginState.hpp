#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_PluginState : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::WebSettings_PluginState OFF();
		static android::webkit::WebSettings_PluginState ON();
		static android::webkit::WebSettings_PluginState ON_DEMAND();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings_PluginState(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_PluginState(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::webkit::WebSettings_PluginState valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

