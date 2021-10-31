#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::renderscript
{
	class RenderScript_ContextType : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DEBUG();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject PROFILE();
		
		RenderScript_ContextType(QAndroidJniObject obj);
		// Constructors
		RenderScript_ContextType() = default;
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

