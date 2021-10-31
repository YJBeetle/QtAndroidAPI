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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorSpace_Adaptation(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpace_Adaptation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

