#pragma once

#include "../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::webkit
{
	class WebSettings_PluginState : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::WebSettings_PluginState OFF();
		static android::webkit::WebSettings_PluginState ON();
		static android::webkit::WebSettings_PluginState ON_DEMAND();
		
		// QJniObject forward
		template<typename ...Ts> explicit WebSettings_PluginState(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_PluginState(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::webkit::WebSettings_PluginState valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::webkit

