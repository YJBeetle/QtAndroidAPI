#pragma once

#include "../../java/lang/Enum.hpp"

class JArray;
class JString;

namespace android::webkit
{
	class WebSettings_RenderPriority : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::WebSettings_RenderPriority HIGH();
		static android::webkit::WebSettings_RenderPriority LOW();
		static android::webkit::WebSettings_RenderPriority NORMAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings_RenderPriority(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_RenderPriority(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::webkit::WebSettings_RenderPriority valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::webkit

