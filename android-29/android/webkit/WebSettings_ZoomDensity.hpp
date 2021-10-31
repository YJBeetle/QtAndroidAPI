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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings_ZoomDensity(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_ZoomDensity(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

