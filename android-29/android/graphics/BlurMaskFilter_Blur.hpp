#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class BlurMaskFilter_Blur : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject INNER();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject OUTER();
		static QAndroidJniObject SOLID();
		
		BlurMaskFilter_Blur(QAndroidJniObject obj);
		// Constructors
		BlurMaskFilter_Blur() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

