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
		
		WebSettings_TextSize(QAndroidJniObject obj);
		// Constructors
		WebSettings_TextSize() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::webkit

