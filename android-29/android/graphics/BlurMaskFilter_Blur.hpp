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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BlurMaskFilter_Blur(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		BlurMaskFilter_Blur(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

