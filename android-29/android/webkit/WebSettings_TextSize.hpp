#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::webkit
{
	class WebSettings_TextSize : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LARGER();
		static QAndroidJniObject LARGEST();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject SMALLER();
		static QAndroidJniObject SMALLEST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebSettings_TextSize(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		WebSettings_TextSize(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

