#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Align : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CENTER();
		static QAndroidJniObject LEFT();
		static QAndroidJniObject RIGHT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_Align(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Align(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

