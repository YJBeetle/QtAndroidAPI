#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Interpolator_Result : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FREEZE_END();
		static QAndroidJniObject FREEZE_START();
		static QAndroidJniObject NORMAL();
		
		Interpolator_Result(QAndroidJniObject obj);
		// Constructors
		Interpolator_Result() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::graphics

