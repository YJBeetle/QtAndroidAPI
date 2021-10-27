#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class ColorSpace_Adaptation : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BRADFORD();
		static QAndroidJniObject CIECAT02();
		static QAndroidJniObject VON_KRIES();
		
		ColorSpace_Adaptation(QAndroidJniObject obj);
		// Constructors
		ColorSpace_Adaptation() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

