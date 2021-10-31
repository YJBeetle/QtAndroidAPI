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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RenderScript_ContextType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RenderScript_ContextType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::renderscript

