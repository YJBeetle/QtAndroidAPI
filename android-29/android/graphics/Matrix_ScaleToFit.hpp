#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Matrix_ScaleToFit : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CENTER();
		static QAndroidJniObject END();
		static QAndroidJniObject FILL();
		static QAndroidJniObject START();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Matrix_ScaleToFit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Matrix_ScaleToFit(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

