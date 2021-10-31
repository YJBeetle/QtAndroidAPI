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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings_RenderPriority(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_RenderPriority(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

