#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_RenderPriority : public java::lang::Enum
	{
	public:
		// Fields
		static android::webkit::WebSettings_RenderPriority HIGH();
		static android::webkit::WebSettings_RenderPriority LOW();
		static android::webkit::WebSettings_RenderPriority NORMAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit WebSettings_RenderPriority(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_RenderPriority(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::webkit::WebSettings_RenderPriority valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

