#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class ColorSpace_RenderIntent : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ABSOLUTE();
		static QAndroidJniObject PERCEPTUAL();
		static QAndroidJniObject RELATIVE();
		static QAndroidJniObject SATURATION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_RenderIntent(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_RenderIntent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

