#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class RenderScript_Priority : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LOW();
		static QAndroidJniObject NORMAL();
		
		RenderScript_Priority(QAndroidJniObject obj);
		// Constructors
		RenderScript_Priority() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace android::renderscript

