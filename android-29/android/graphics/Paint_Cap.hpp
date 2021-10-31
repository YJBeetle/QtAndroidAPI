#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace android::graphics
{
	class Paint_Cap : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BUTT();
		static QAndroidJniObject ROUND();
		static QAndroidJniObject SQUARE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paint_Cap(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Paint_Cap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::graphics

